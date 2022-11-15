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

#include <aws/migrationhub-config/MigrationHubConfigClient.h>
#include <aws/migrationhub-config/MigrationHubConfigErrorMarshaller.h>
#include <aws/migrationhub-config/MigrationHubConfigEndpointProvider.h>
#include <aws/migrationhub-config/model/CreateHomeRegionControlRequest.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsRequest.h>
#include <aws/migrationhub-config/model/GetHomeRegionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubConfig;
using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MigrationHubConfigClient::SERVICE_NAME = "mgh";
const char* MigrationHubConfigClient::ALLOCATION_TAG = "MigrationHubConfigClient";

MigrationHubConfigClient::MigrationHubConfigClient(const MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider,
                                                   const MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider,
                                                   const MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MigrationHubConfigClient::MigrationHubConfigClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubConfigEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MigrationHubConfigClient::~MigrationHubConfigClient()
{
}

std::shared_ptr<MigrationHubConfigEndpointProviderBase>& MigrationHubConfigClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MigrationHubConfigClient::init(const MigrationHubConfig::MigrationHubConfigClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MigrationHub Config");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MigrationHubConfigClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateHomeRegionControlOutcome MigrationHubConfigClient::CreateHomeRegionControl(const CreateHomeRegionControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHomeRegionControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHomeRegionControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHomeRegionControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHomeRegionControlOutcomeCallable MigrationHubConfigClient::CreateHomeRegionControlCallable(const CreateHomeRegionControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHomeRegionControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHomeRegionControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::CreateHomeRegionControlAsync(const CreateHomeRegionControlRequest& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHomeRegionControl(request), context);
    } );
}

DescribeHomeRegionControlsOutcome MigrationHubConfigClient::DescribeHomeRegionControls(const DescribeHomeRegionControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHomeRegionControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHomeRegionControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHomeRegionControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHomeRegionControlsOutcomeCallable MigrationHubConfigClient::DescribeHomeRegionControlsCallable(const DescribeHomeRegionControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHomeRegionControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHomeRegionControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::DescribeHomeRegionControlsAsync(const DescribeHomeRegionControlsRequest& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHomeRegionControls(request), context);
    } );
}

GetHomeRegionOutcome MigrationHubConfigClient::GetHomeRegion(const GetHomeRegionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHomeRegion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHomeRegion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetHomeRegionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHomeRegionOutcomeCallable MigrationHubConfigClient::GetHomeRegionCallable(const GetHomeRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHomeRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHomeRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::GetHomeRegionAsync(const GetHomeRegionRequest& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetHomeRegion(request), context);
    } );
}

