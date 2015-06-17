/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-sync/model/BulkPublishResult.h>
#include <aws/cognito-sync/model/DeleteDatasetResult.h>
#include <aws/cognito-sync/model/DescribeDatasetResult.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageResult.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsResult.h>
#include <aws/cognito-sync/model/GetCognitoEventsResult.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/ListDatasetsResult.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/ListRecordsResult.h>
#include <aws/cognito-sync/model/RegisterDeviceResult.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/SubscribeToDatasetResult.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetResult.h>
#include <aws/cognito-sync/model/UpdateRecordsResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CognitoSync
{

namespace Model
{
  class BulkPublishRequest;
  class DeleteDatasetRequest;
  class DescribeDatasetRequest;
  class DescribeIdentityPoolUsageRequest;
  class DescribeIdentityUsageRequest;
  class GetBulkPublishDetailsRequest;
  class GetCognitoEventsRequest;
  class GetIdentityPoolConfigurationRequest;
  class ListDatasetsRequest;
  class ListIdentityPoolUsageRequest;
  class ListRecordsRequest;
  class RegisterDeviceRequest;
  class SetCognitoEventsRequest;
  class SetIdentityPoolConfigurationRequest;
  class SubscribeToDatasetRequest;
  class UnsubscribeFromDatasetRequest;
  class UpdateRecordsRequest;

  typedef Utils::Outcome<BulkPublishResult, Client::AWSError<CognitoSyncErrors>> BulkPublishOutcome;
  typedef Utils::Outcome<DeleteDatasetResult, Client::AWSError<CognitoSyncErrors>> DeleteDatasetOutcome;
  typedef Utils::Outcome<DescribeDatasetResult, Client::AWSError<CognitoSyncErrors>> DescribeDatasetOutcome;
  typedef Utils::Outcome<DescribeIdentityPoolUsageResult, Client::AWSError<CognitoSyncErrors>> DescribeIdentityPoolUsageOutcome;
  typedef Utils::Outcome<DescribeIdentityUsageResult, Client::AWSError<CognitoSyncErrors>> DescribeIdentityUsageOutcome;
  typedef Utils::Outcome<GetBulkPublishDetailsResult, Client::AWSError<CognitoSyncErrors>> GetBulkPublishDetailsOutcome;
  typedef Utils::Outcome<GetCognitoEventsResult, Client::AWSError<CognitoSyncErrors>> GetCognitoEventsOutcome;
  typedef Utils::Outcome<GetIdentityPoolConfigurationResult, Client::AWSError<CognitoSyncErrors>> GetIdentityPoolConfigurationOutcome;
  typedef Utils::Outcome<ListDatasetsResult, Client::AWSError<CognitoSyncErrors>> ListDatasetsOutcome;
  typedef Utils::Outcome<ListIdentityPoolUsageResult, Client::AWSError<CognitoSyncErrors>> ListIdentityPoolUsageOutcome;
  typedef Utils::Outcome<ListRecordsResult, Client::AWSError<CognitoSyncErrors>> ListRecordsOutcome;
  typedef Utils::Outcome<RegisterDeviceResult, Client::AWSError<CognitoSyncErrors>> RegisterDeviceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CognitoSyncErrors>> SetCognitoEventsOutcome;
  typedef Utils::Outcome<SetIdentityPoolConfigurationResult, Client::AWSError<CognitoSyncErrors>> SetIdentityPoolConfigurationOutcome;
  typedef Utils::Outcome<SubscribeToDatasetResult, Client::AWSError<CognitoSyncErrors>> SubscribeToDatasetOutcome;
  typedef Utils::Outcome<UnsubscribeFromDatasetResult, Client::AWSError<CognitoSyncErrors>> UnsubscribeFromDatasetOutcome;
  typedef Utils::Outcome<UpdateRecordsResult, Client::AWSError<CognitoSyncErrors>> UpdateRecordsOutcome;

  typedef std::future<BulkPublishOutcome> BulkPublishOutcomeCallable;
  typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
  typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
  typedef std::future<DescribeIdentityPoolUsageOutcome> DescribeIdentityPoolUsageOutcomeCallable;
  typedef std::future<DescribeIdentityUsageOutcome> DescribeIdentityUsageOutcomeCallable;
  typedef std::future<GetBulkPublishDetailsOutcome> GetBulkPublishDetailsOutcomeCallable;
  typedef std::future<GetCognitoEventsOutcome> GetCognitoEventsOutcomeCallable;
  typedef std::future<GetIdentityPoolConfigurationOutcome> GetIdentityPoolConfigurationOutcomeCallable;
  typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
  typedef std::future<ListIdentityPoolUsageOutcome> ListIdentityPoolUsageOutcomeCallable;
  typedef std::future<ListRecordsOutcome> ListRecordsOutcomeCallable;
  typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
  typedef std::future<SetCognitoEventsOutcome> SetCognitoEventsOutcomeCallable;
  typedef std::future<SetIdentityPoolConfigurationOutcome> SetIdentityPoolConfigurationOutcomeCallable;
  typedef std::future<SubscribeToDatasetOutcome> SubscribeToDatasetOutcomeCallable;
  typedef std::future<UnsubscribeFromDatasetOutcome> UnsubscribeFromDatasetOutcomeCallable;
  typedef std::future<UpdateRecordsOutcome> UpdateRecordsOutcomeCallable;
} // namespace Model

  class CognitoSyncClient;

  typedef Aws::Utils::Event<CognitoSyncClient, const Model::BulkPublishRequest&, const Model::BulkPublishOutcome&, const Aws::Client::AsyncCallerContext*> BulkPublishOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const Aws::Client::AsyncCallerContext*> DeleteDatasetOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const Aws::Client::AsyncCallerContext*> DescribeDatasetOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::DescribeIdentityPoolUsageRequest&, const Model::DescribeIdentityPoolUsageOutcome&, const Aws::Client::AsyncCallerContext*> DescribeIdentityPoolUsageOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::DescribeIdentityUsageRequest&, const Model::DescribeIdentityUsageOutcome&, const Aws::Client::AsyncCallerContext*> DescribeIdentityUsageOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::GetBulkPublishDetailsRequest&, const Model::GetBulkPublishDetailsOutcome&, const Aws::Client::AsyncCallerContext*> GetBulkPublishDetailsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::GetCognitoEventsRequest&, const Model::GetCognitoEventsOutcome&, const Aws::Client::AsyncCallerContext*> GetCognitoEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::GetIdentityPoolConfigurationRequest&, const Model::GetIdentityPoolConfigurationOutcome&, const Aws::Client::AsyncCallerContext*> GetIdentityPoolConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const Aws::Client::AsyncCallerContext*> ListDatasetsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::ListIdentityPoolUsageRequest&, const Model::ListIdentityPoolUsageOutcome&, const Aws::Client::AsyncCallerContext*> ListIdentityPoolUsageOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::ListRecordsRequest&, const Model::ListRecordsOutcome&, const Aws::Client::AsyncCallerContext*> ListRecordsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::RegisterDeviceRequest&, const Model::RegisterDeviceOutcome&, const Aws::Client::AsyncCallerContext*> RegisterDeviceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::SetCognitoEventsRequest&, const Model::SetCognitoEventsOutcome&, const Aws::Client::AsyncCallerContext*> SetCognitoEventsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::SetIdentityPoolConfigurationRequest&, const Model::SetIdentityPoolConfigurationOutcome&, const Aws::Client::AsyncCallerContext*> SetIdentityPoolConfigurationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::SubscribeToDatasetRequest&, const Model::SubscribeToDatasetOutcome&, const Aws::Client::AsyncCallerContext*> SubscribeToDatasetOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::UnsubscribeFromDatasetRequest&, const Model::UnsubscribeFromDatasetOutcome&, const Aws::Client::AsyncCallerContext*> UnsubscribeFromDatasetOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoSyncClient, const Model::UpdateRecordsRequest&, const Model::UpdateRecordsOutcome&, const Aws::Client::AsyncCallerContext*> UpdateRecordsOutcomeReceivedEvent;

  /*
    <fullname>Amazon Cognito Sync</fullname> <p>Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user identity.</p> <p>With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity. In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity service</a>.</p> <p>If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a> and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for iOS</a>.</p>
  */
  class AWS_COGNITOSYNC_API CognitoSyncClient : public Aws::Client::AWSJsonRestClient
  {
    public:
      typedef Aws::Client::AWSJsonRestClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CognitoSyncClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CognitoSyncClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      CognitoSyncClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~CognitoSyncClient();

     /*
       <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the configured stream. Customers are limited to one successful bulk publish per 24 hours. Bulk publish is an asynchronous request, customers can see the status of the request via the GetBulkPublishDetails operation.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::BulkPublishOutcome BulkPublish(const Model::BulkPublishRequest& request) const;

     /*
       <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the configured stream. Customers are limited to one successful bulk publish per 24 hours. Bulk publish is an asynchronous request, customers can see the status of the request via the GetBulkPublishDetails operation.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::BulkPublishOutcomeCallable BulkPublishCallable(const Model::BulkPublishRequest& request) const;

     /*
       <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the configured stream. Customers are limited to one successful bulk publish per 24 hours. Bulk publish is an asynchronous request, customers can see the status of the request via the GetBulkPublishDetails operation.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void BulkPublishAsync(const Model::BulkPublishRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specific dataset. The dataset will be deleted permanently, and the action can't be undone. Datasets that this dataset was merged with will no longer report the merge. Any subsequent operation on this dataset will result in a ResourceNotFoundException.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>
     */
     Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

     /*
       <p>Deletes the specific dataset. The dataset will be deleted permanently, and the action can't be undone. Datasets that this dataset was merged with will no longer report the merge. Any subsequent operation on this dataset will result in a ResourceNotFoundException.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

     /*
       <p>Deletes the specific dataset. The dataset will be deleted permanently, and the action can't be undone. Datasets that this dataset was merged with will no longer report the merge. Any subsequent operation on this dataset will result in a ResourceNotFoundException.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets meta data about a dataset by identity and dataset name. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>
     */
     Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

     /*
       <p>Gets meta data about a dataset by identity and dataset name. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

     /*
       <p>Gets meta data about a dataset by identity and dataset name. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets usage details (for example, data storage) about a particular identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::DescribeIdentityPoolUsageOutcome DescribeIdentityPoolUsage(const Model::DescribeIdentityPoolUsageRequest& request) const;

     /*
       <p>Gets usage details (for example, data storage) about a particular identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeIdentityPoolUsageOutcomeCallable DescribeIdentityPoolUsageCallable(const Model::DescribeIdentityPoolUsageRequest& request) const;

     /*
       <p>Gets usage details (for example, data storage) about a particular identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeIdentityPoolUsageAsync(const Model::DescribeIdentityPoolUsageRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets usage information for an identity, including number of datasets and data usage.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>
     */
     Model::DescribeIdentityUsageOutcome DescribeIdentityUsage(const Model::DescribeIdentityUsageRequest& request) const;

     /*
       <p>Gets usage information for an identity, including number of datasets and data usage.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeIdentityUsageOutcomeCallable DescribeIdentityUsageCallable(const Model::DescribeIdentityUsageRequest& request) const;

     /*
       <p>Gets usage information for an identity, including number of datasets and data usage.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeIdentityUsageAsync(const Model::DescribeIdentityUsageRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Get the status of the last BulkPublish operation for an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::GetBulkPublishDetailsOutcome GetBulkPublishDetails(const Model::GetBulkPublishDetailsRequest& request) const;

     /*
       <p>Get the status of the last BulkPublish operation for an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetBulkPublishDetailsOutcomeCallable GetBulkPublishDetailsCallable(const Model::GetBulkPublishDetailsRequest& request) const;

     /*
       <p>Get the status of the last BulkPublish operation for an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetBulkPublishDetailsAsync(const Model::GetBulkPublishDetailsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets the events and the corresponding Lambda functions associated with an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::GetCognitoEventsOutcome GetCognitoEvents(const Model::GetCognitoEventsRequest& request) const;

     /*
       <p>Gets the events and the corresponding Lambda functions associated with an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCognitoEventsOutcomeCallable GetCognitoEventsCallable(const Model::GetCognitoEventsRequest& request) const;

     /*
       <p>Gets the events and the corresponding Lambda functions associated with an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCognitoEventsAsync(const Model::GetCognitoEventsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets the configuration settings of an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::GetIdentityPoolConfigurationOutcome GetIdentityPoolConfiguration(const Model::GetIdentityPoolConfigurationRequest& request) const;

     /*
       <p>Gets the configuration settings of an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityPoolConfigurationOutcomeCallable GetIdentityPoolConfigurationCallable(const Model::GetIdentityPoolConfigurationRequest& request) const;

     /*
       <p>Gets the configuration settings of an identity pool.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityPoolConfigurationAsync(const Model::GetIdentityPoolConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListDatasets can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use the Cognito Identity credentials to make this API call.</p>
     */
     Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

     /*
       <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListDatasets can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use the Cognito Identity credentials to make this API call.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

     /*
       <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListDatasets can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use the Cognito Identity credentials to make this API call.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets a list of identity pools registered with Cognito.</p> <p>ListIdentityPoolUsage can only be called with developer credentials. You cannot make this API call with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::ListIdentityPoolUsageOutcome ListIdentityPoolUsage(const Model::ListIdentityPoolUsageRequest& request) const;

     /*
       <p>Gets a list of identity pools registered with Cognito.</p> <p>ListIdentityPoolUsage can only be called with developer credentials. You cannot make this API call with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListIdentityPoolUsageOutcomeCallable ListIdentityPoolUsageCallable(const Model::ListIdentityPoolUsageRequest& request) const;

     /*
       <p>Gets a list of identity pools registered with Cognito.</p> <p>ListIdentityPoolUsage can only be called with developer credentials. You cannot make this API call with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListIdentityPoolUsageAsync(const Model::ListIdentityPoolUsageRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets paginated records, optionally changed after a particular sync count for a dataset and identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListRecords can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>
     */
     Model::ListRecordsOutcome ListRecords(const Model::ListRecordsRequest& request) const;

     /*
       <p>Gets paginated records, optionally changed after a particular sync count for a dataset and identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListRecords can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListRecordsOutcomeCallable ListRecordsCallable(const Model::ListRecordsRequest& request) const;

     /*
       <p>Gets paginated records, optionally changed after a particular sync count for a dataset and identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have access to the identity data.</p> <p>ListRecords can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You should use Cognito Identity credentials to make this API call.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListRecordsAsync(const Model::ListRecordsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Registers a device to receive push sync notifications.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>
     */
     Model::RegisterDeviceOutcome RegisterDevice(const Model::RegisterDeviceRequest& request) const;

     /*
       <p>Registers a device to receive push sync notifications.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterDeviceOutcomeCallable RegisterDeviceCallable(const Model::RegisterDeviceRequest& request) const;

     /*
       <p>Registers a device to receive push sync notifications.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterDeviceAsync(const Model::RegisterDeviceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sets the AWS Lambda function for a given event type for an identity pool. This request only updates the key/value pair specified. Other key/values pairs are not updated. To remove a key value pair, pass a empty value for the particular key.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::SetCognitoEventsOutcome SetCognitoEvents(const Model::SetCognitoEventsRequest& request) const;

     /*
       <p>Sets the AWS Lambda function for a given event type for an identity pool. This request only updates the key/value pair specified. Other key/values pairs are not updated. To remove a key value pair, pass a empty value for the particular key.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetCognitoEventsOutcomeCallable SetCognitoEventsCallable(const Model::SetCognitoEventsRequest& request) const;

     /*
       <p>Sets the AWS Lambda function for a given event type for an identity pool. This request only updates the key/value pair specified. Other key/values pairs are not updated. To remove a key value pair, pass a empty value for the particular key.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetCognitoEventsAsync(const Model::SetCognitoEventsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sets the necessary configuration for push sync.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>
     */
     Model::SetIdentityPoolConfigurationOutcome SetIdentityPoolConfiguration(const Model::SetIdentityPoolConfigurationRequest& request) const;

     /*
       <p>Sets the necessary configuration for push sync.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetIdentityPoolConfigurationOutcomeCallable SetIdentityPoolConfigurationCallable(const Model::SetIdentityPoolConfigurationRequest& request) const;

     /*
       <p>Sets the necessary configuration for push sync.</p> <p>This API can only be called with developer credentials. You cannot call this API with the temporary user credentials provided by Cognito Identity.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetIdentityPoolConfigurationAsync(const Model::SetIdentityPoolConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Subscribes to receive notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>
     */
     Model::SubscribeToDatasetOutcome SubscribeToDataset(const Model::SubscribeToDatasetRequest& request) const;

     /*
       <p>Subscribes to receive notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SubscribeToDatasetOutcomeCallable SubscribeToDatasetCallable(const Model::SubscribeToDatasetRequest& request) const;

     /*
       <p>Subscribes to receive notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SubscribeToDatasetAsync(const Model::SubscribeToDatasetRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Unsubscribes from receiving notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>
     */
     Model::UnsubscribeFromDatasetOutcome UnsubscribeFromDataset(const Model::UnsubscribeFromDatasetRequest& request) const;

     /*
       <p>Unsubscribes from receiving notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnsubscribeFromDatasetOutcomeCallable UnsubscribeFromDatasetCallable(const Model::UnsubscribeFromDatasetRequest& request) const;

     /*
       <p>Unsubscribes from receiving notifications when a dataset is modified by another device.</p> <p>This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnsubscribeFromDatasetAsync(const Model::UnsubscribeFromDatasetRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Posts updates to records and adds and deletes records for a dataset and user.</p> <p>The sync count in the record patch is your last known sync count for that record. The server will reject an UpdateRecords request with a ResourceConflictException if you try to patch a record with a new value but a stale sync count.</p> <p>For example, if the sync count on the server is 5 for a key called highScore and you try and submit a new highScore with sync count of 4, the request will be rejected. To obtain the current sync count for a record, call ListRecords. On a successful update of the record, the response returns the new sync count for that record. You should present that sync count the next time you try to update that same record. When the record does not exist, specify the sync count as 0.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>
     */
     Model::UpdateRecordsOutcome UpdateRecords(const Model::UpdateRecordsRequest& request) const;

     /*
       <p>Posts updates to records and adds and deletes records for a dataset and user.</p> <p>The sync count in the record patch is your last known sync count for that record. The server will reject an UpdateRecords request with a ResourceConflictException if you try to patch a record with a new value but a stale sync count.</p> <p>For example, if the sync count on the server is 5 for a key called highScore and you try and submit a new highScore with sync count of 4, the request will be rejected. To obtain the current sync count for a record, call ListRecords. On a successful update of the record, the response returns the new sync count for that record. You should present that sync count the next time you try to update that same record. When the record does not exist, specify the sync count as 0.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateRecordsOutcomeCallable UpdateRecordsCallable(const Model::UpdateRecordsRequest& request) const;

     /*
       <p>Posts updates to records and adds and deletes records for a dataset and user.</p> <p>The sync count in the record patch is your last known sync count for that record. The server will reject an UpdateRecords request with a ResourceConflictException if you try to patch a record with a new value but a stale sync count.</p> <p>For example, if the sync count on the server is 5 for a key called highScore and you try and submit a new highScore with sync count of 4, the request will be rejected. To obtain the current sync count for a record, call ListRecords. On a successful update of the record, the response returns the new sync count for that record. You should present that sync count the next time you try to update that same record. When the record does not exist, specify the sync count as 0.</p> <p>This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateRecordsAsync(const Model::UpdateRecordsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for BulkPublishAsync to call upon completion to the handler chain. You need to call this to
    * use BulkPublishAsync.
    */
    inline void RegisterBulkPublishOutcomeReceivedHandler(const BulkPublishOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onBulkPublishOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for BulkPublish.
    */
    inline void ClearAllBulkPublishOutcomeReceivedHandlers()
    {
      m_onBulkPublishOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDatasetAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteDatasetAsync.
    */
    inline void RegisterDeleteDatasetOutcomeReceivedHandler(const DeleteDatasetOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDatasetOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDataset.
    */
    inline void ClearAllDeleteDatasetOutcomeReceivedHandlers()
    {
      m_onDeleteDatasetOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDatasetAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDatasetAsync.
    */
    inline void RegisterDescribeDatasetOutcomeReceivedHandler(const DescribeDatasetOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDatasetOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDataset.
    */
    inline void ClearAllDescribeDatasetOutcomeReceivedHandlers()
    {
      m_onDescribeDatasetOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeIdentityPoolUsageAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeIdentityPoolUsageAsync.
    */
    inline void RegisterDescribeIdentityPoolUsageOutcomeReceivedHandler(const DescribeIdentityPoolUsageOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeIdentityPoolUsageOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeIdentityPoolUsage.
    */
    inline void ClearAllDescribeIdentityPoolUsageOutcomeReceivedHandlers()
    {
      m_onDescribeIdentityPoolUsageOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeIdentityUsageAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeIdentityUsageAsync.
    */
    inline void RegisterDescribeIdentityUsageOutcomeReceivedHandler(const DescribeIdentityUsageOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeIdentityUsageOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeIdentityUsage.
    */
    inline void ClearAllDescribeIdentityUsageOutcomeReceivedHandlers()
    {
      m_onDescribeIdentityUsageOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetBulkPublishDetailsAsync to call upon completion to the handler chain. You need to call this to
    * use GetBulkPublishDetailsAsync.
    */
    inline void RegisterGetBulkPublishDetailsOutcomeReceivedHandler(const GetBulkPublishDetailsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetBulkPublishDetailsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetBulkPublishDetails.
    */
    inline void ClearAllGetBulkPublishDetailsOutcomeReceivedHandlers()
    {
      m_onGetBulkPublishDetailsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCognitoEventsAsync to call upon completion to the handler chain. You need to call this to
    * use GetCognitoEventsAsync.
    */
    inline void RegisterGetCognitoEventsOutcomeReceivedHandler(const GetCognitoEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCognitoEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCognitoEvents.
    */
    inline void ClearAllGetCognitoEventsOutcomeReceivedHandlers()
    {
      m_onGetCognitoEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityPoolConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityPoolConfigurationAsync.
    */
    inline void RegisterGetIdentityPoolConfigurationOutcomeReceivedHandler(const GetIdentityPoolConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityPoolConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityPoolConfiguration.
    */
    inline void ClearAllGetIdentityPoolConfigurationOutcomeReceivedHandlers()
    {
      m_onGetIdentityPoolConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDatasetsAsync to call upon completion to the handler chain. You need to call this to
    * use ListDatasetsAsync.
    */
    inline void RegisterListDatasetsOutcomeReceivedHandler(const ListDatasetsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDatasetsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDatasets.
    */
    inline void ClearAllListDatasetsOutcomeReceivedHandlers()
    {
      m_onListDatasetsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListIdentityPoolUsageAsync to call upon completion to the handler chain. You need to call this to
    * use ListIdentityPoolUsageAsync.
    */
    inline void RegisterListIdentityPoolUsageOutcomeReceivedHandler(const ListIdentityPoolUsageOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListIdentityPoolUsageOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListIdentityPoolUsage.
    */
    inline void ClearAllListIdentityPoolUsageOutcomeReceivedHandlers()
    {
      m_onListIdentityPoolUsageOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListRecordsAsync to call upon completion to the handler chain. You need to call this to
    * use ListRecordsAsync.
    */
    inline void RegisterListRecordsOutcomeReceivedHandler(const ListRecordsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListRecordsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListRecords.
    */
    inline void ClearAllListRecordsOutcomeReceivedHandlers()
    {
      m_onListRecordsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterDeviceAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterDeviceAsync.
    */
    inline void RegisterRegisterDeviceOutcomeReceivedHandler(const RegisterDeviceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterDeviceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterDevice.
    */
    inline void ClearAllRegisterDeviceOutcomeReceivedHandlers()
    {
      m_onRegisterDeviceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetCognitoEventsAsync to call upon completion to the handler chain. You need to call this to
    * use SetCognitoEventsAsync.
    */
    inline void RegisterSetCognitoEventsOutcomeReceivedHandler(const SetCognitoEventsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetCognitoEventsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetCognitoEvents.
    */
    inline void ClearAllSetCognitoEventsOutcomeReceivedHandlers()
    {
      m_onSetCognitoEventsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetIdentityPoolConfigurationAsync to call upon completion to the handler chain. You need to call this to
    * use SetIdentityPoolConfigurationAsync.
    */
    inline void RegisterSetIdentityPoolConfigurationOutcomeReceivedHandler(const SetIdentityPoolConfigurationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetIdentityPoolConfigurationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetIdentityPoolConfiguration.
    */
    inline void ClearAllSetIdentityPoolConfigurationOutcomeReceivedHandlers()
    {
      m_onSetIdentityPoolConfigurationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SubscribeToDatasetAsync to call upon completion to the handler chain. You need to call this to
    * use SubscribeToDatasetAsync.
    */
    inline void RegisterSubscribeToDatasetOutcomeReceivedHandler(const SubscribeToDatasetOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSubscribeToDatasetOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SubscribeToDataset.
    */
    inline void ClearAllSubscribeToDatasetOutcomeReceivedHandlers()
    {
      m_onSubscribeToDatasetOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnsubscribeFromDatasetAsync to call upon completion to the handler chain. You need to call this to
    * use UnsubscribeFromDatasetAsync.
    */
    inline void RegisterUnsubscribeFromDatasetOutcomeReceivedHandler(const UnsubscribeFromDatasetOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnsubscribeFromDatasetOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UnsubscribeFromDataset.
    */
    inline void ClearAllUnsubscribeFromDatasetOutcomeReceivedHandlers()
    {
      m_onUnsubscribeFromDatasetOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateRecordsAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateRecordsAsync.
    */
    inline void RegisterUpdateRecordsOutcomeReceivedHandler(const UpdateRecordsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateRecordsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateRecords.
    */
    inline void ClearAllUpdateRecordsOutcomeReceivedHandlers()
    {
      m_onUpdateRecordsOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void BulkPublishAsyncHelper(const Model::BulkPublishRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeIdentityPoolUsageAsyncHelper(const Model::DescribeIdentityPoolUsageRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeIdentityUsageAsyncHelper(const Model::DescribeIdentityUsageRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetBulkPublishDetailsAsyncHelper(const Model::GetBulkPublishDetailsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetCognitoEventsAsyncHelper(const Model::GetCognitoEventsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetIdentityPoolConfigurationAsyncHelper(const Model::GetIdentityPoolConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListIdentityPoolUsageAsyncHelper(const Model::ListIdentityPoolUsageRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListRecordsAsyncHelper(const Model::ListRecordsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RegisterDeviceAsyncHelper(const Model::RegisterDeviceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetCognitoEventsAsyncHelper(const Model::SetCognitoEventsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetIdentityPoolConfigurationAsyncHelper(const Model::SetIdentityPoolConfigurationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SubscribeToDatasetAsyncHelper(const Model::SubscribeToDatasetRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UnsubscribeFromDatasetAsyncHelper(const Model::UnsubscribeFromDatasetRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateRecordsAsyncHelper(const Model::UpdateRecordsRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    BulkPublishOutcomeReceivedEvent m_onBulkPublishOutcomeReceived;
    DeleteDatasetOutcomeReceivedEvent m_onDeleteDatasetOutcomeReceived;
    DescribeDatasetOutcomeReceivedEvent m_onDescribeDatasetOutcomeReceived;
    DescribeIdentityPoolUsageOutcomeReceivedEvent m_onDescribeIdentityPoolUsageOutcomeReceived;
    DescribeIdentityUsageOutcomeReceivedEvent m_onDescribeIdentityUsageOutcomeReceived;
    GetBulkPublishDetailsOutcomeReceivedEvent m_onGetBulkPublishDetailsOutcomeReceived;
    GetCognitoEventsOutcomeReceivedEvent m_onGetCognitoEventsOutcomeReceived;
    GetIdentityPoolConfigurationOutcomeReceivedEvent m_onGetIdentityPoolConfigurationOutcomeReceived;
    ListDatasetsOutcomeReceivedEvent m_onListDatasetsOutcomeReceived;
    ListIdentityPoolUsageOutcomeReceivedEvent m_onListIdentityPoolUsageOutcomeReceived;
    ListRecordsOutcomeReceivedEvent m_onListRecordsOutcomeReceived;
    RegisterDeviceOutcomeReceivedEvent m_onRegisterDeviceOutcomeReceived;
    SetCognitoEventsOutcomeReceivedEvent m_onSetCognitoEventsOutcomeReceived;
    SetIdentityPoolConfigurationOutcomeReceivedEvent m_onSetIdentityPoolConfigurationOutcomeReceived;
    SubscribeToDatasetOutcomeReceivedEvent m_onSubscribeToDatasetOutcomeReceived;
    UnsubscribeFromDatasetOutcomeReceivedEvent m_onUnsubscribeFromDatasetOutcomeReceived;
    UpdateRecordsOutcomeReceivedEvent m_onUpdateRecordsOutcomeReceived;
  };

} // namespace CognitoSync
} // namespace Aws
