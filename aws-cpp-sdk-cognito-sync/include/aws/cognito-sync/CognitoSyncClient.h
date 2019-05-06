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

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
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
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

        typedef Aws::Utils::Outcome<BulkPublishResult, Aws::Client::AWSError<CognitoSyncErrors>> BulkPublishOutcome;
        typedef Aws::Utils::Outcome<DeleteDatasetResult, Aws::Client::AWSError<CognitoSyncErrors>> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, Aws::Client::AWSError<CognitoSyncErrors>> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityPoolUsageResult, Aws::Client::AWSError<CognitoSyncErrors>> DescribeIdentityPoolUsageOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityUsageResult, Aws::Client::AWSError<CognitoSyncErrors>> DescribeIdentityUsageOutcome;
        typedef Aws::Utils::Outcome<GetBulkPublishDetailsResult, Aws::Client::AWSError<CognitoSyncErrors>> GetBulkPublishDetailsOutcome;
        typedef Aws::Utils::Outcome<GetCognitoEventsResult, Aws::Client::AWSError<CognitoSyncErrors>> GetCognitoEventsOutcome;
        typedef Aws::Utils::Outcome<GetIdentityPoolConfigurationResult, Aws::Client::AWSError<CognitoSyncErrors>> GetIdentityPoolConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, Aws::Client::AWSError<CognitoSyncErrors>> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListIdentityPoolUsageResult, Aws::Client::AWSError<CognitoSyncErrors>> ListIdentityPoolUsageOutcome;
        typedef Aws::Utils::Outcome<ListRecordsResult, Aws::Client::AWSError<CognitoSyncErrors>> ListRecordsOutcome;
        typedef Aws::Utils::Outcome<RegisterDeviceResult, Aws::Client::AWSError<CognitoSyncErrors>> RegisterDeviceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CognitoSyncErrors>> SetCognitoEventsOutcome;
        typedef Aws::Utils::Outcome<SetIdentityPoolConfigurationResult, Aws::Client::AWSError<CognitoSyncErrors>> SetIdentityPoolConfigurationOutcome;
        typedef Aws::Utils::Outcome<SubscribeToDatasetResult, Aws::Client::AWSError<CognitoSyncErrors>> SubscribeToDatasetOutcome;
        typedef Aws::Utils::Outcome<UnsubscribeFromDatasetResult, Aws::Client::AWSError<CognitoSyncErrors>> UnsubscribeFromDatasetOutcome;
        typedef Aws::Utils::Outcome<UpdateRecordsResult, Aws::Client::AWSError<CognitoSyncErrors>> UpdateRecordsOutcome;

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

    typedef std::function<void(const CognitoSyncClient*, const Model::BulkPublishRequest&, const Model::BulkPublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BulkPublishResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeIdentityPoolUsageRequest&, const Model::DescribeIdentityPoolUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityPoolUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeIdentityUsageRequest&, const Model::DescribeIdentityUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetBulkPublishDetailsRequest&, const Model::GetBulkPublishDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBulkPublishDetailsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetCognitoEventsRequest&, const Model::GetCognitoEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCognitoEventsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetIdentityPoolConfigurationRequest&, const Model::GetIdentityPoolConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityPoolConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListIdentityPoolUsageRequest&, const Model::ListIdentityPoolUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPoolUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListRecordsRequest&, const Model::ListRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::RegisterDeviceRequest&, const Model::RegisterDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SetCognitoEventsRequest&, const Model::SetCognitoEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetCognitoEventsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SetIdentityPoolConfigurationRequest&, const Model::SetIdentityPoolConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityPoolConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SubscribeToDatasetRequest&, const Model::SubscribeToDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeToDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::UnsubscribeFromDatasetRequest&, const Model::UnsubscribeFromDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeFromDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::UpdateRecordsRequest&, const Model::UpdateRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecordsResponseReceivedHandler;

  /**
   * <fullname>Amazon Cognito Sync</fullname> <p>Amazon Cognito Sync provides an AWS
   * service and client library that enable cross-device syncing of
   * application-related user data. High-level client libraries are available for
   * both iOS and Android. You can use these libraries to persist data locally so
   * that it's available even if the device is offline. Developer credentials don't
   * need to be stored on the mobile device to access the service. You can use Amazon
   * Cognito to obtain a normalized user ID and credentials. User data is persisted
   * in a dataset that can store up to 1 MB of key-value pairs, and you can have up
   * to 20 datasets per user identity.</p> <p>With Amazon Cognito Sync, the data
   * stored for each identity is accessible only to credentials assigned to that
   * identity. In order to use the Cognito Sync service, you need to make API calls
   * using credentials retrieved with <a
   * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon
   * Cognito Identity service</a>.</p> <p>If you want to use Cognito Sync in an
   * Android or iOS application, you will probably want to make API calls via the AWS
   * Mobile SDK. To learn more, see the <a
   * href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer
   * Guide for Android</a> and the <a
   * href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer
   * Guide for iOS</a>.</p>
   */
  class AWS_COGNITOSYNC_API CognitoSyncClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CognitoSyncClient();

        inline virtual const char* GetServiceClientName() const override { return "cognito-sync"; }


        /**
         * <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the
         * configured stream. Customers are limited to one successful bulk publish per 24
         * hours. Bulk publish is an asynchronous request, customers can see the status of
         * the request via the GetBulkPublishDetails operation.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/BulkPublish">AWS
         * API Reference</a></p>
         */
        virtual Model::BulkPublishOutcome BulkPublish(const Model::BulkPublishRequest& request) const;

        /**
         * <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the
         * configured stream. Customers are limited to one successful bulk publish per 24
         * hours. Bulk publish is an asynchronous request, customers can see the status of
         * the request via the GetBulkPublishDetails operation.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/BulkPublish">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BulkPublishOutcomeCallable BulkPublishCallable(const Model::BulkPublishRequest& request) const;

        /**
         * <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the
         * configured stream. Customers are limited to one successful bulk publish per 24
         * hours. Bulk publish is an asynchronous request, customers can see the status of
         * the request via the GetBulkPublishDetails operation.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/BulkPublish">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BulkPublishAsync(const Model::BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specific dataset. The dataset will be deleted permanently, and
         * the action can't be undone. Datasets that this dataset was merged with will no
         * longer report the merge. Any subsequent operation on this dataset will result in
         * a ResourceNotFoundException.</p> <p>This API can be called with temporary user
         * credentials provided by Cognito Identity or with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes the specific dataset. The dataset will be deleted permanently, and
         * the action can't be undone. Datasets that this dataset was merged with will no
         * longer report the merge. Any subsequent operation on this dataset will result in
         * a ResourceNotFoundException.</p> <p>This API can be called with temporary user
         * credentials provided by Cognito Identity or with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes the specific dataset. The dataset will be deleted permanently, and
         * the action can't be undone. Datasets that this dataset was merged with will no
         * longer report the merge. Any subsequent operation on this dataset will result in
         * a ResourceNotFoundException.</p> <p>This API can be called with temporary user
         * credentials provided by Cognito Identity or with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets meta data about a dataset by identity and dataset name. With Amazon
         * Cognito Sync, each identity has access only to its own data. Thus, the
         * credentials used to make this API call need to have access to the identity
         * data.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials. You should use Cognito Identity
         * credentials to make this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Gets meta data about a dataset by identity and dataset name. With Amazon
         * Cognito Sync, each identity has access only to its own data. Thus, the
         * credentials used to make this API call need to have access to the identity
         * data.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials. You should use Cognito Identity
         * credentials to make this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Gets meta data about a dataset by identity and dataset name. With Amazon
         * Cognito Sync, each identity has access only to its own data. Thus, the
         * credentials used to make this API call need to have access to the identity
         * data.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials. You should use Cognito Identity
         * credentials to make this API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets usage details (for example, data storage) about a particular identity
         * pool.</p> <p>This API can only be called with developer credentials. You cannot
         * call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityPoolUsageOutcome DescribeIdentityPoolUsage(const Model::DescribeIdentityPoolUsageRequest& request) const;

        /**
         * <p>Gets usage details (for example, data storage) about a particular identity
         * pool.</p> <p>This API can only be called with developer credentials. You cannot
         * call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityPoolUsageOutcomeCallable DescribeIdentityPoolUsageCallable(const Model::DescribeIdentityPoolUsageRequest& request) const;

        /**
         * <p>Gets usage details (for example, data storage) about a particular identity
         * pool.</p> <p>This API can only be called with developer credentials. You cannot
         * call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityPoolUsageAsync(const Model::DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets usage information for an identity, including number of datasets and data
         * usage.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityUsageOutcome DescribeIdentityUsage(const Model::DescribeIdentityUsageRequest& request) const;

        /**
         * <p>Gets usage information for an identity, including number of datasets and data
         * usage.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityUsageOutcomeCallable DescribeIdentityUsageCallable(const Model::DescribeIdentityUsageRequest& request) const;

        /**
         * <p>Gets usage information for an identity, including number of datasets and data
         * usage.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityUsageAsync(const Model::DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the status of the last BulkPublish operation for an identity pool.</p>
         * <p>This API can only be called with developer credentials. You cannot call this
         * API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetBulkPublishDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkPublishDetailsOutcome GetBulkPublishDetails(const Model::GetBulkPublishDetailsRequest& request) const;

        /**
         * <p>Get the status of the last BulkPublish operation for an identity pool.</p>
         * <p>This API can only be called with developer credentials. You cannot call this
         * API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetBulkPublishDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBulkPublishDetailsOutcomeCallable GetBulkPublishDetailsCallable(const Model::GetBulkPublishDetailsRequest& request) const;

        /**
         * <p>Get the status of the last BulkPublish operation for an identity pool.</p>
         * <p>This API can only be called with developer credentials. You cannot call this
         * API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetBulkPublishDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBulkPublishDetailsAsync(const Model::GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the events and the corresponding Lambda functions associated with an
         * identity pool.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCognitoEventsOutcome GetCognitoEvents(const Model::GetCognitoEventsRequest& request) const;

        /**
         * <p>Gets the events and the corresponding Lambda functions associated with an
         * identity pool.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCognitoEventsOutcomeCallable GetCognitoEventsCallable(const Model::GetCognitoEventsRequest& request) const;

        /**
         * <p>Gets the events and the corresponding Lambda functions associated with an
         * identity pool.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCognitoEventsAsync(const Model::GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the configuration settings of an identity pool.</p> <p>This API can only
         * be called with developer credentials. You cannot call this API with the
         * temporary user credentials provided by Cognito Identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoolConfigurationOutcome GetIdentityPoolConfiguration(const Model::GetIdentityPoolConfigurationRequest& request) const;

        /**
         * <p>Gets the configuration settings of an identity pool.</p> <p>This API can only
         * be called with developer credentials. You cannot call this API with the
         * temporary user credentials provided by Cognito Identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoolConfigurationOutcomeCallable GetIdentityPoolConfigurationCallable(const Model::GetIdentityPoolConfigurationRequest& request) const;

        /**
         * <p>Gets the configuration settings of an identity pool.</p> <p>This API can only
         * be called with developer credentials. You cannot call this API with the
         * temporary user credentials provided by Cognito Identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityPoolConfigurationAsync(const Model::GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has
         * access only to its own data. Thus, the credentials used to make this API call
         * need to have access to the identity data.</p> <p>ListDatasets can be called with
         * temporary user credentials provided by Cognito Identity or with developer
         * credentials. You should use the Cognito Identity credentials to make this API
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has
         * access only to its own data. Thus, the credentials used to make this API call
         * need to have access to the identity data.</p> <p>ListDatasets can be called with
         * temporary user credentials provided by Cognito Identity or with developer
         * credentials. You should use the Cognito Identity credentials to make this API
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Lists datasets for an identity. With Amazon Cognito Sync, each identity has
         * access only to its own data. Thus, the credentials used to make this API call
         * need to have access to the identity data.</p> <p>ListDatasets can be called with
         * temporary user credentials provided by Cognito Identity or with developer
         * credentials. You should use the Cognito Identity credentials to make this API
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of identity pools registered with Cognito.</p>
         * <p>ListIdentityPoolUsage can only be called with developer credentials. You
         * cannot make this API call with the temporary user credentials provided by
         * Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListIdentityPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoolUsageOutcome ListIdentityPoolUsage(const Model::ListIdentityPoolUsageRequest& request) const;

        /**
         * <p>Gets a list of identity pools registered with Cognito.</p>
         * <p>ListIdentityPoolUsage can only be called with developer credentials. You
         * cannot make this API call with the temporary user credentials provided by
         * Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListIdentityPoolUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoolUsageOutcomeCallable ListIdentityPoolUsageCallable(const Model::ListIdentityPoolUsageRequest& request) const;

        /**
         * <p>Gets a list of identity pools registered with Cognito.</p>
         * <p>ListIdentityPoolUsage can only be called with developer credentials. You
         * cannot make this API call with the temporary user credentials provided by
         * Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListIdentityPoolUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityPoolUsageAsync(const Model::ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets paginated records, optionally changed after a particular sync count for
         * a dataset and identity. With Amazon Cognito Sync, each identity has access only
         * to its own data. Thus, the credentials used to make this API call need to have
         * access to the identity data.</p> <p>ListRecords can be called with temporary
         * user credentials provided by Cognito Identity or with developer credentials. You
         * should use Cognito Identity credentials to make this API call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordsOutcome ListRecords(const Model::ListRecordsRequest& request) const;

        /**
         * <p>Gets paginated records, optionally changed after a particular sync count for
         * a dataset and identity. With Amazon Cognito Sync, each identity has access only
         * to its own data. Thus, the credentials used to make this API call need to have
         * access to the identity data.</p> <p>ListRecords can be called with temporary
         * user credentials provided by Cognito Identity or with developer credentials. You
         * should use Cognito Identity credentials to make this API call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordsOutcomeCallable ListRecordsCallable(const Model::ListRecordsRequest& request) const;

        /**
         * <p>Gets paginated records, optionally changed after a particular sync count for
         * a dataset and identity. With Amazon Cognito Sync, each identity has access only
         * to its own data. Thus, the credentials used to make this API call need to have
         * access to the identity data.</p> <p>ListRecords can be called with temporary
         * user credentials provided by Cognito Identity or with developer credentials. You
         * should use Cognito Identity credentials to make this API call.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordsAsync(const Model::ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a device to receive push sync notifications.</p> <p>This API can
         * only be called with temporary credentials provided by Cognito Identity. You
         * cannot call this API with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RegisterDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDeviceOutcome RegisterDevice(const Model::RegisterDeviceRequest& request) const;

        /**
         * <p>Registers a device to receive push sync notifications.</p> <p>This API can
         * only be called with temporary credentials provided by Cognito Identity. You
         * cannot call this API with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RegisterDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDeviceOutcomeCallable RegisterDeviceCallable(const Model::RegisterDeviceRequest& request) const;

        /**
         * <p>Registers a device to receive push sync notifications.</p> <p>This API can
         * only be called with temporary credentials provided by Cognito Identity. You
         * cannot call this API with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RegisterDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the AWS Lambda function for a given event type for an identity pool.
         * This request only updates the key/value pair specified. Other key/values pairs
         * are not updated. To remove a key value pair, pass a empty value for the
         * particular key.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetCognitoEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::SetCognitoEventsOutcome SetCognitoEvents(const Model::SetCognitoEventsRequest& request) const;

        /**
         * <p>Sets the AWS Lambda function for a given event type for an identity pool.
         * This request only updates the key/value pair specified. Other key/values pairs
         * are not updated. To remove a key value pair, pass a empty value for the
         * particular key.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetCognitoEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetCognitoEventsOutcomeCallable SetCognitoEventsCallable(const Model::SetCognitoEventsRequest& request) const;

        /**
         * <p>Sets the AWS Lambda function for a given event type for an identity pool.
         * This request only updates the key/value pair specified. Other key/values pairs
         * are not updated. To remove a key value pair, pass a empty value for the
         * particular key.</p> <p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetCognitoEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetCognitoEventsAsync(const Model::SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the necessary configuration for push sync.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityPoolConfigurationOutcome SetIdentityPoolConfiguration(const Model::SetIdentityPoolConfigurationRequest& request) const;

        /**
         * <p>Sets the necessary configuration for push sync.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityPoolConfigurationOutcomeCallable SetIdentityPoolConfigurationCallable(const Model::SetIdentityPoolConfigurationRequest& request) const;

        /**
         * <p>Sets the necessary configuration for push sync.</p> <p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityPoolConfigurationAsync(const Model::SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Subscribes to receive notifications when a dataset is modified by another
         * device.</p> <p>This API can only be called with temporary credentials provided
         * by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SubscribeToDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToDatasetOutcome SubscribeToDataset(const Model::SubscribeToDatasetRequest& request) const;

        /**
         * <p>Subscribes to receive notifications when a dataset is modified by another
         * device.</p> <p>This API can only be called with temporary credentials provided
         * by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SubscribeToDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeToDatasetOutcomeCallable SubscribeToDatasetCallable(const Model::SubscribeToDatasetRequest& request) const;

        /**
         * <p>Subscribes to receive notifications when a dataset is modified by another
         * device.</p> <p>This API can only be called with temporary credentials provided
         * by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SubscribeToDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeToDatasetAsync(const Model::SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unsubscribes from receiving notifications when a dataset is modified by
         * another device.</p> <p>This API can only be called with temporary credentials
         * provided by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UnsubscribeFromDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromDatasetOutcome UnsubscribeFromDataset(const Model::UnsubscribeFromDatasetRequest& request) const;

        /**
         * <p>Unsubscribes from receiving notifications when a dataset is modified by
         * another device.</p> <p>This API can only be called with temporary credentials
         * provided by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UnsubscribeFromDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeFromDatasetOutcomeCallable UnsubscribeFromDatasetCallable(const Model::UnsubscribeFromDatasetRequest& request) const;

        /**
         * <p>Unsubscribes from receiving notifications when a dataset is modified by
         * another device.</p> <p>This API can only be called with temporary credentials
         * provided by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UnsubscribeFromDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeFromDatasetAsync(const Model::UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts updates to records and adds and deletes records for a dataset and
         * user.</p> <p>The sync count in the record patch is your last known sync count
         * for that record. The server will reject an UpdateRecords request with a
         * ResourceConflictException if you try to patch a record with a new value but a
         * stale sync count.</p> <p>For example, if the sync count on the server is 5 for a
         * key called highScore and you try and submit a new highScore with sync count of
         * 4, the request will be rejected. To obtain the current sync count for a record,
         * call ListRecords. On a successful update of the record, the response returns the
         * new sync count for that record. You should present that sync count the next time
         * you try to update that same record. When the record does not exist, specify the
         * sync count as 0.</p> <p>This API can be called with temporary user credentials
         * provided by Cognito Identity or with developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UpdateRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecordsOutcome UpdateRecords(const Model::UpdateRecordsRequest& request) const;

        /**
         * <p>Posts updates to records and adds and deletes records for a dataset and
         * user.</p> <p>The sync count in the record patch is your last known sync count
         * for that record. The server will reject an UpdateRecords request with a
         * ResourceConflictException if you try to patch a record with a new value but a
         * stale sync count.</p> <p>For example, if the sync count on the server is 5 for a
         * key called highScore and you try and submit a new highScore with sync count of
         * 4, the request will be rejected. To obtain the current sync count for a record,
         * call ListRecords. On a successful update of the record, the response returns the
         * new sync count for that record. You should present that sync count the next time
         * you try to update that same record. When the record does not exist, specify the
         * sync count as 0.</p> <p>This API can be called with temporary user credentials
         * provided by Cognito Identity or with developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UpdateRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecordsOutcomeCallable UpdateRecordsCallable(const Model::UpdateRecordsRequest& request) const;

        /**
         * <p>Posts updates to records and adds and deletes records for a dataset and
         * user.</p> <p>The sync count in the record patch is your last known sync count
         * for that record. The server will reject an UpdateRecords request with a
         * ResourceConflictException if you try to patch a record with a new value but a
         * stale sync count.</p> <p>For example, if the sync count on the server is 5 for a
         * key called highScore and you try and submit a new highScore with sync count of
         * 4, the request will be rejected. To obtain the current sync count for a record,
         * call ListRecords. On a successful update of the record, the response returns the
         * new sync count for that record. You should present that sync count the next time
         * you try to update that same record. When the record does not exist, specify the
         * sync count as 0.</p> <p>This API can be called with temporary user credentials
         * provided by Cognito Identity or with developer credentials.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UpdateRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecordsAsync(const Model::UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BulkPublishAsyncHelper(const Model::BulkPublishRequest& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityPoolUsageAsyncHelper(const Model::DescribeIdentityPoolUsageRequest& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityUsageAsyncHelper(const Model::DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBulkPublishDetailsAsyncHelper(const Model::GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCognitoEventsAsyncHelper(const Model::GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityPoolConfigurationAsyncHelper(const Model::GetIdentityPoolConfigurationRequest& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityPoolUsageAsyncHelper(const Model::ListIdentityPoolUsageRequest& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordsAsyncHelper(const Model::ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDeviceAsyncHelper(const Model::RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetCognitoEventsAsyncHelper(const Model::SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityPoolConfigurationAsyncHelper(const Model::SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeToDatasetAsyncHelper(const Model::SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeFromDatasetAsyncHelper(const Model::UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecordsAsyncHelper(const Model::UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CognitoSync
} // namespace Aws
