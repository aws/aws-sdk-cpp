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

#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/cognito-sync/model/DeleteDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageRequest.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsRequest.h>
#include <aws/cognito-sync/model/GetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/ListDatasetsRequest.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/SubscribeToDatasetRequest.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/cognito-sync/model/UpdateRecordsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoSync;
using namespace Aws::CognitoSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CognitoSyncClient::SERVICE_NAME = "cognito-sync";
const char* CognitoSyncClient::ALLOCATION_TAG = "CognitoSyncClient";

CognitoSyncClient::CognitoSyncClient(const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CognitoSyncClient::CognitoSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CognitoSyncClient::~CognitoSyncClient()
{
}

std::shared_ptr<CognitoSyncEndpointProviderBase>& CognitoSyncClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CognitoSyncClient::init(const CognitoSync::CognitoSyncClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cognito Sync");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CognitoSyncClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BulkPublish, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BulkPublish", "Required field: IdentityPoolId, is not set");
    return BulkPublishOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BulkPublish, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bulkpublish");
  return BulkPublishOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BulkPublishOutcomeCallable CognitoSyncClient::BulkPublishCallable(const BulkPublishRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BulkPublishOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BulkPublish(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::BulkPublishAsync(const BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BulkPublish(request), context);
    } );
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityPoolId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable CognitoSyncClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityPoolId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable CognitoSyncClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityPoolUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityPoolUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  return DescribeIdentityPoolUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityPoolUsageOutcomeCallable CognitoSyncClient::DescribeIdentityPoolUsageCallable(const DescribeIdentityPoolUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityPoolUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityPoolUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::DescribeIdentityPoolUsageAsync(const DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIdentityPoolUsage(request), context);
    } );
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  return DescribeIdentityUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityUsageOutcomeCallable CognitoSyncClient::DescribeIdentityUsageCallable(const DescribeIdentityUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::DescribeIdentityUsageAsync(const DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIdentityUsage(request), context);
    } );
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBulkPublishDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBulkPublishDetails", "Required field: IdentityPoolId, is not set");
    return GetBulkPublishDetailsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBulkPublishDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getBulkPublishDetails");
  return GetBulkPublishDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBulkPublishDetailsOutcomeCallable CognitoSyncClient::GetBulkPublishDetailsCallable(const GetBulkPublishDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBulkPublishDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBulkPublishDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::GetBulkPublishDetailsAsync(const GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBulkPublishDetails(request), context);
    } );
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return GetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  return GetCognitoEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCognitoEventsOutcomeCallable CognitoSyncClient::GetCognitoEventsCallable(const GetCognitoEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCognitoEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCognitoEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::GetCognitoEventsAsync(const GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCognitoEvents(request), context);
    } );
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return GetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetIdentityPoolConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityPoolConfigurationOutcomeCallable CognitoSyncClient::GetIdentityPoolConfigurationCallable(const GetIdentityPoolConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityPoolConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityPoolConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::GetIdentityPoolConfigurationAsync(const GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIdentityPoolConfiguration(request), context);
    } );
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityPoolId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable CognitoSyncClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasets(request), context);
    } );
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools");
  return ListIdentityPoolUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityPoolUsageOutcomeCallable CognitoSyncClient::ListIdentityPoolUsageCallable(const ListIdentityPoolUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityPoolUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityPoolUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::ListIdentityPoolUsageAsync(const ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIdentityPoolUsage(request), context);
    } );
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityPoolId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: DatasetName, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  return ListRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecordsOutcomeCallable CognitoSyncClient::ListRecordsCallable(const ListRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::ListRecordsAsync(const ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecords(request), context);
    } );
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityPoolId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identity/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/device");
  return RegisterDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDeviceOutcomeCallable CognitoSyncClient::RegisterDeviceCallable(const RegisterDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::RegisterDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterDevice(request), context);
    } );
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return SetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  return SetCognitoEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetCognitoEventsOutcomeCallable CognitoSyncClient::SetCognitoEventsCallable(const SetCognitoEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetCognitoEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetCognitoEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::SetCognitoEventsAsync(const SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetCognitoEvents(request), context);
    } );
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return SetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return SetIdentityPoolConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIdentityPoolConfigurationOutcomeCallable CognitoSyncClient::SetIdentityPoolConfigurationCallable(const SetIdentityPoolConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityPoolConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityPoolConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::SetIdentityPoolConfigurationAsync(const SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetIdentityPoolConfiguration(request), context);
    } );
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubscribeToDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityPoolId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DatasetName, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DeviceId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubscribeToDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return SubscribeToDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubscribeToDatasetOutcomeCallable CognitoSyncClient::SubscribeToDatasetCallable(const SubscribeToDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeToDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubscribeToDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::SubscribeToDatasetAsync(const SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SubscribeToDataset(request), context);
    } );
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnsubscribeFromDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityPoolId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DatasetName, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DeviceId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnsubscribeFromDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return UnsubscribeFromDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UnsubscribeFromDatasetOutcomeCallable CognitoSyncClient::UnsubscribeFromDatasetCallable(const UnsubscribeFromDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeFromDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnsubscribeFromDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::UnsubscribeFromDatasetAsync(const UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnsubscribeFromDataset(request), context);
    } );
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityPoolId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: DatasetName, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return UpdateRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecordsOutcomeCallable CognitoSyncClient::UpdateRecordsCallable(const UpdateRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoSyncClient::UpdateRecordsAsync(const UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecords(request), context);
    } );
}

