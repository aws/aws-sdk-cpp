/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncEndpoint.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
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

static const char* SERVICE_NAME = "cognito-sync";
static const char* ALLOCATION_TAG = "CognitoSyncClient";


CognitoSyncClient::CognitoSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoSyncClient::~CognitoSyncClient()
{
}

void CognitoSyncClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CognitoSyncEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CognitoSyncClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BulkPublish", "Required field: IdentityPoolId, is not set");
    return BulkPublishOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/bulkpublish";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BulkPublishOutcome(BulkPublishResult(outcome.GetResult()));
  }
  else
  {
    return BulkPublishOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BulkPublishAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::BulkPublishAsyncHelper(const BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BulkPublish(request), context);
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetOutcome(DeleteDatasetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDatasetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetOutcome(DescribeDatasetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityPoolUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityPoolUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityPoolUsageOutcome(DescribeIdentityPoolUsageResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityPoolUsageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityPoolUsageAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::DescribeIdentityPoolUsageAsyncHelper(const DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityPoolUsage(request), context);
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityUsageOutcome(DescribeIdentityUsageResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityUsageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityUsageAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::DescribeIdentityUsageAsyncHelper(const DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityUsage(request), context);
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBulkPublishDetails", "Required field: IdentityPoolId, is not set");
    return GetBulkPublishDetailsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/getBulkPublishDetails";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBulkPublishDetailsOutcome(GetBulkPublishDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetBulkPublishDetailsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBulkPublishDetailsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::GetBulkPublishDetailsAsyncHelper(const GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBulkPublishDetails(request), context);
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return GetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/events";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCognitoEventsOutcome(GetCognitoEventsResult(outcome.GetResult()));
  }
  else
  {
    return GetCognitoEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetCognitoEventsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::GetCognitoEventsAsyncHelper(const GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCognitoEvents(request), context);
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return GetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIdentityPoolConfigurationOutcome(GetIdentityPoolConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityPoolConfigurationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityPoolConfigurationAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::GetIdentityPoolConfigurationAsyncHelper(const GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityPoolConfiguration(request), context);
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetsOutcome(ListDatasetsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIdentityPoolUsageOutcome(ListIdentityPoolUsageResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentityPoolUsageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentityPoolUsageAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::ListIdentityPoolUsageAsyncHelper(const ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityPoolUsage(request), context);
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/records";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecordsOutcome(ListRecordsResult(outcome.GetResult()));
  }
  else
  {
    return ListRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListRecordsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::ListRecordsAsyncHelper(const ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecords(request), context);
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identity/";
  ss << request.GetIdentityId();
  ss << "/device";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterDeviceOutcome(RegisterDeviceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterDeviceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::RegisterDeviceAsyncHelper(const RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDevice(request), context);
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return SetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/events";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetCognitoEventsOutcome(NoResult());
  }
  else
  {
    return SetCognitoEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetCognitoEventsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::SetCognitoEventsAsyncHelper(const SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetCognitoEvents(request), context);
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest& request) const
{
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return SetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetIdentityPoolConfigurationOutcome(SetIdentityPoolConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityPoolConfigurationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityPoolConfigurationAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::SetIdentityPoolConfigurationAsyncHelper(const SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityPoolConfiguration(request), context);
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/subscriptions/";
  ss << request.GetDeviceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SubscribeToDatasetOutcome(SubscribeToDatasetResult(outcome.GetResult()));
  }
  else
  {
    return SubscribeToDatasetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SubscribeToDatasetAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::SubscribeToDatasetAsyncHelper(const SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubscribeToDataset(request), context);
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/subscriptions/";
  ss << request.GetDeviceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnsubscribeFromDatasetOutcome(UnsubscribeFromDatasetResult(outcome.GetResult()));
  }
  else
  {
    return UnsubscribeFromDatasetOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UnsubscribeFromDatasetAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::UnsubscribeFromDatasetAsyncHelper(const UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnsubscribeFromDataset(request), context);
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRecordsOutcome(UpdateRecordsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRecordsAsyncHelper( request, handler, context ); } );
}

void CognitoSyncClient::UpdateRecordsAsyncHelper(const UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRecords(request), context);
}

