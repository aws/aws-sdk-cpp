/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CognitoSyncEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/bulkpublish";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::BulkPublish, this, request);
}

void CognitoSyncClient::BulkPublishAsync(const BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::BulkPublishAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::BulkPublishAsyncHelper(const BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BulkPublish(request), context);
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &CognitoSyncClient::DeleteDataset, this, request);
}

void CognitoSyncClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::DeleteDatasetAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::DescribeDataset, this, request);
}

void CognitoSyncClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::DescribeDatasetAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::DescribeIdentityPoolUsage, this, request);
}

void CognitoSyncClient::DescribeIdentityPoolUsageAsync(const DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::DescribeIdentityPoolUsageAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::DescribeIdentityPoolUsageAsyncHelper(const DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityPoolUsage(request), context);
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::DescribeIdentityUsage, this, request);
}

void CognitoSyncClient::DescribeIdentityUsageAsync(const DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::DescribeIdentityUsageAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::DescribeIdentityUsageAsyncHelper(const DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityUsage(request), context);
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/getBulkPublishDetails";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::GetBulkPublishDetails, this, request);
}

void CognitoSyncClient::GetBulkPublishDetailsAsync(const GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::GetBulkPublishDetailsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::GetBulkPublishDetailsAsyncHelper(const GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBulkPublishDetails(request), context);
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/events";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::GetCognitoEvents, this, request);
}

void CognitoSyncClient::GetCognitoEventsAsync(const GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::GetCognitoEventsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::GetCognitoEventsAsyncHelper(const GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCognitoEvents(request), context);
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::GetIdentityPoolConfiguration, this, request);
}

void CognitoSyncClient::GetIdentityPoolConfigurationAsync(const GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::GetIdentityPoolConfigurationAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::GetIdentityPoolConfigurationAsyncHelper(const GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityPoolConfiguration(request), context);
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::ListDatasets, this, request);
}

void CognitoSyncClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::ListDatasetsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::ListIdentityPoolUsage, this, request);
}

void CognitoSyncClient::ListIdentityPoolUsageAsync(const ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::ListIdentityPoolUsageAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::ListIdentityPoolUsageAsyncHelper(const ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityPoolUsage(request), context);
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/records";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &CognitoSyncClient::ListRecords, this, request);
}

void CognitoSyncClient::ListRecordsAsync(const ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::ListRecordsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::ListRecordsAsyncHelper(const ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecords(request), context);
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identity/";
  ss << request.GetIdentityId();
  ss << "/device";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::RegisterDevice, this, request);
}

void CognitoSyncClient::RegisterDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::RegisterDeviceAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::RegisterDeviceAsyncHelper(const RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDevice(request), context);
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/events";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::SetCognitoEvents, this, request);
}

void CognitoSyncClient::SetCognitoEventsAsync(const SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::SetCognitoEventsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::SetCognitoEventsAsyncHelper(const SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetCognitoEvents(request), context);
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/configuration";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::SetIdentityPoolConfiguration, this, request);
}

void CognitoSyncClient::SetIdentityPoolConfigurationAsync(const SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::SetIdentityPoolConfigurationAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::SetIdentityPoolConfigurationAsyncHelper(const SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityPoolConfiguration(request), context);
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/subscriptions/";
  ss << request.GetDeviceId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::SubscribeToDataset, this, request);
}

void CognitoSyncClient::SubscribeToDatasetAsync(const SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::SubscribeToDatasetAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::SubscribeToDatasetAsyncHelper(const SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SubscribeToDataset(request), context);
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/subscriptions/";
  ss << request.GetDeviceId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &CognitoSyncClient::UnsubscribeFromDataset, this, request);
}

void CognitoSyncClient::UnsubscribeFromDatasetAsync(const UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::UnsubscribeFromDatasetAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::UnsubscribeFromDatasetAsyncHelper(const UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnsubscribeFromDataset(request), context);
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/identitypools/";
  ss << request.GetIdentityPoolId();
  ss << "/identities/";
  ss << request.GetIdentityId();
  ss << "/datasets/";
  ss << request.GetDatasetName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CognitoSyncClient::UpdateRecords, this, request);
}

void CognitoSyncClient::UpdateRecordsAsync(const UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CognitoSyncClient::UpdateRecordsAsyncHelper, this, request, handler, context);
}

void CognitoSyncClient::UpdateRecordsAsyncHelper(const UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRecords(request), context);
}

