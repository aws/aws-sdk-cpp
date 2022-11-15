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

#include <aws/cur/CostandUsageReportServiceClient.h>
#include <aws/cur/CostandUsageReportServiceErrorMarshaller.h>
#include <aws/cur/CostandUsageReportServiceEndpointProvider.h>
#include <aws/cur/model/DeleteReportDefinitionRequest.h>
#include <aws/cur/model/DescribeReportDefinitionsRequest.h>
#include <aws/cur/model/ModifyReportDefinitionRequest.h>
#include <aws/cur/model/PutReportDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CostandUsageReportService;
using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CostandUsageReportServiceClient::SERVICE_NAME = "cur";
const char* CostandUsageReportServiceClient::ALLOCATION_TAG = "CostandUsageReportServiceClient";

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration,
                                                                 std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const AWSCredentials& credentials,
                                                                 std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider,
                                                                 const CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 std::shared_ptr<CostandUsageReportServiceEndpointProviderBase> endpointProvider,
                                                                 const CostandUsageReportService::CostandUsageReportServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CostandUsageReportServiceClient::CostandUsageReportServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const AWSCredentials& credentials,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CostandUsageReportServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CostandUsageReportServiceClient::~CostandUsageReportServiceClient()
{
}

std::shared_ptr<CostandUsageReportServiceEndpointProviderBase>& CostandUsageReportServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CostandUsageReportServiceClient::init(const CostandUsageReportService::CostandUsageReportServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cost and Usage Report Service");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CostandUsageReportServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteReportDefinitionOutcome CostandUsageReportServiceClient::DeleteReportDefinition(const DeleteReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportDefinitionOutcomeCallable CostandUsageReportServiceClient::DeleteReportDefinitionCallable(const DeleteReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::DeleteReportDefinitionAsync(const DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReportDefinition(request), context);
    } );
}

DescribeReportDefinitionsOutcome CostandUsageReportServiceClient::DescribeReportDefinitions(const DescribeReportDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReportDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReportDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReportDefinitionsOutcomeCallable CostandUsageReportServiceClient::DescribeReportDefinitionsCallable(const DescribeReportDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::DescribeReportDefinitionsAsync(const DescribeReportDefinitionsRequest& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReportDefinitions(request), context);
    } );
}

ModifyReportDefinitionOutcome CostandUsageReportServiceClient::ModifyReportDefinition(const ModifyReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyReportDefinitionOutcomeCallable CostandUsageReportServiceClient::ModifyReportDefinitionCallable(const ModifyReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::ModifyReportDefinitionAsync(const ModifyReportDefinitionRequest& request, const ModifyReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyReportDefinition(request), context);
    } );
}

PutReportDefinitionOutcome CostandUsageReportServiceClient::PutReportDefinition(const PutReportDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutReportDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutReportDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutReportDefinitionOutcomeCallable CostandUsageReportServiceClient::PutReportDefinitionCallable(const PutReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::PutReportDefinitionAsync(const PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutReportDefinition(request), context);
    } );
}

