/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/health/HealthClient.h>
#include <aws/health/HealthErrorMarshaller.h>
#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/health/model/DescribeEventAggregatesRequest.h>
#include <aws/health/model/DescribeEventDetailsRequest.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventsRequest.h>
#include <aws/health/model/DescribeEventsForOrganizationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Health;
using namespace Aws::Health::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* HealthClient::SERVICE_NAME = "health";
const char* HealthClient::ALLOCATION_TAG = "HealthClient";

HealthClient::HealthClient(const Health::HealthClientConfiguration& clientConfiguration,
                           std::shared_ptr<HealthEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const AWSCredentials& credentials,
                           std::shared_ptr<HealthEndpointProviderBase> endpointProvider,
                           const Health::HealthClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<HealthEndpointProviderBase> endpointProvider,
                           const Health::HealthClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  HealthClient::HealthClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
HealthClient::~HealthClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<HealthEndpointProviderBase>& HealthClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void HealthClient::init(const Health::HealthClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Health");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void HealthClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DescribeAffectedAccountsForOrganizationOutcome HealthClient::DescribeAffectedAccountsForOrganization(const DescribeAffectedAccountsForOrganizationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAffectedAccountsForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAffectedAccountsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAffectedAccountsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAffectedAccountsForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAffectedEntitiesOutcome HealthClient::DescribeAffectedEntities(const DescribeAffectedEntitiesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAffectedEntities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAffectedEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAffectedEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAffectedEntitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAffectedEntitiesForOrganizationOutcome HealthClient::DescribeAffectedEntitiesForOrganization(const DescribeAffectedEntitiesForOrganizationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAffectedEntitiesForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAffectedEntitiesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAffectedEntitiesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAffectedEntitiesForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntityAggregatesOutcome HealthClient::DescribeEntityAggregates(const DescribeEntityAggregatesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEntityAggregates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEntityAggregates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEntityAggregates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEntityAggregatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventAggregatesOutcome HealthClient::DescribeEventAggregates(const DescribeEventAggregatesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventAggregates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventAggregates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventAggregates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventAggregatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventDetailsOutcome HealthClient::DescribeEventDetails(const DescribeEventDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventDetailsForOrganizationOutcome HealthClient::DescribeEventDetailsForOrganization(const DescribeEventDetailsForOrganizationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventDetailsForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventDetailsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventDetailsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventDetailsForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventTypesOutcome HealthClient::DescribeEventTypes(const DescribeEventTypesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsOutcome HealthClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsForOrganizationOutcome HealthClient::DescribeEventsForOrganization(const DescribeEventsForOrganizationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEventsForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventsForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHealthServiceStatusForOrganizationOutcome HealthClient::DescribeHealthServiceStatusForOrganization() const
{
AWS_OPERATION_GUARD(DescribeHealthServiceStatusForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHealthServiceStatusForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHealthServiceStatusForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHealthServiceStatusForOrganizationOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeHealthServiceStatusForOrganization"));
}

DisableHealthServiceAccessForOrganizationOutcome HealthClient::DisableHealthServiceAccessForOrganization() const
{
AWS_OPERATION_GUARD(DisableHealthServiceAccessForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableHealthServiceAccessForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableHealthServiceAccessForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableHealthServiceAccessForOrganizationOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DisableHealthServiceAccessForOrganization"));
}

EnableHealthServiceAccessForOrganizationOutcome HealthClient::EnableHealthServiceAccessForOrganization() const
{
AWS_OPERATION_GUARD(EnableHealthServiceAccessForOrganization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableHealthServiceAccessForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableHealthServiceAccessForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableHealthServiceAccessForOrganizationOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "EnableHealthServiceAccessForOrganization"));
}

