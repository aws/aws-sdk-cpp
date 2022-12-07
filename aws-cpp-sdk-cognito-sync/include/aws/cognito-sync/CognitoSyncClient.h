/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-sync/CognitoSyncServiceClientModel.h>

namespace Aws
{
namespace CognitoSync
{
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
  class AWS_COGNITOSYNC_API CognitoSyncClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CognitoSyncClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::CognitoSync::CognitoSyncClientConfiguration& clientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration(),
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
                          const Aws::CognitoSync::CognitoSyncClientConfiguration& clientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
                          const Aws::CognitoSync::CognitoSyncClientConfiguration& clientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CognitoSyncClient();

        /**
         * <p>Initiates a bulk publish of all existing datasets for an Identity Pool to the
         * configured stream. Customers are limited to one successful bulk publish per 24
         * hours. Bulk publish is an asynchronous request, customers can see the status of
         * the request via the GetBulkPublishDetails operation.</p><p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/BulkPublish">AWS
         * API Reference</a></p>
         */
        virtual Model::BulkPublishOutcome BulkPublish(const Model::BulkPublishRequest& request) const;

        /**
         * A Callable wrapper for BulkPublish that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BulkPublishOutcomeCallable BulkPublishCallable(const Model::BulkPublishRequest& request) const;

        /**
         * An Async wrapper for BulkPublish that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeIdentityPoolUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityPoolUsageOutcomeCallable DescribeIdentityPoolUsageCallable(const Model::DescribeIdentityPoolUsageRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentityPoolUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeIdentityUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityUsageOutcomeCallable DescribeIdentityUsageCallable(const Model::DescribeIdentityUsageRequest& request) const;

        /**
         * An Async wrapper for DescribeIdentityUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityUsageAsync(const Model::DescribeIdentityUsageRequest& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the status of the last BulkPublish operation for an identity
         * pool.</p><p>This API can only be called with developer credentials. You cannot
         * call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetBulkPublishDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkPublishDetailsOutcome GetBulkPublishDetails(const Model::GetBulkPublishDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetBulkPublishDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBulkPublishDetailsOutcomeCallable GetBulkPublishDetailsCallable(const Model::GetBulkPublishDetailsRequest& request) const;

        /**
         * An Async wrapper for GetBulkPublishDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBulkPublishDetailsAsync(const Model::GetBulkPublishDetailsRequest& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the events and the corresponding Lambda functions associated with an
         * identity pool.</p><p>This API can only be called with developer credentials. You
         * cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCognitoEventsOutcome GetCognitoEvents(const Model::GetCognitoEventsRequest& request) const;

        /**
         * A Callable wrapper for GetCognitoEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCognitoEventsOutcomeCallable GetCognitoEventsCallable(const Model::GetCognitoEventsRequest& request) const;

        /**
         * An Async wrapper for GetCognitoEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCognitoEventsAsync(const Model::GetCognitoEventsRequest& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the configuration settings of an identity pool.</p><p>This API can only
         * be called with developer credentials. You cannot call this API with the
         * temporary user credentials provided by Cognito Identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoolConfigurationOutcome GetIdentityPoolConfiguration(const Model::GetIdentityPoolConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityPoolConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoolConfigurationOutcomeCallable GetIdentityPoolConfigurationCallable(const Model::GetIdentityPoolConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetIdentityPoolConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListIdentityPoolUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoolUsageOutcomeCallable ListIdentityPoolUsageCallable(const Model::ListIdentityPoolUsageRequest& request) const;

        /**
         * An Async wrapper for ListIdentityPoolUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordsOutcomeCallable ListRecordsCallable(const Model::ListRecordsRequest& request) const;

        /**
         * An Async wrapper for ListRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordsAsync(const Model::ListRecordsRequest& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a device to receive push sync notifications.</p><p>This API can
         * only be called with temporary credentials provided by Cognito Identity. You
         * cannot call this API with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RegisterDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDeviceOutcome RegisterDevice(const Model::RegisterDeviceRequest& request) const;

        /**
         * A Callable wrapper for RegisterDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDeviceOutcomeCallable RegisterDeviceCallable(const Model::RegisterDeviceRequest& request) const;

        /**
         * An Async wrapper for RegisterDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the AWS Lambda function for a given event type for an identity pool.
         * This request only updates the key/value pair specified. Other key/values pairs
         * are not updated. To remove a key value pair, pass a empty value for the
         * particular key.</p><p>This API can only be called with developer credentials.
         * You cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetCognitoEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::SetCognitoEventsOutcome SetCognitoEvents(const Model::SetCognitoEventsRequest& request) const;

        /**
         * A Callable wrapper for SetCognitoEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetCognitoEventsOutcomeCallable SetCognitoEventsCallable(const Model::SetCognitoEventsRequest& request) const;

        /**
         * An Async wrapper for SetCognitoEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetCognitoEventsAsync(const Model::SetCognitoEventsRequest& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the necessary configuration for push sync.</p><p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityPoolConfigurationOutcome SetIdentityPoolConfiguration(const Model::SetIdentityPoolConfigurationRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityPoolConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityPoolConfigurationOutcomeCallable SetIdentityPoolConfigurationCallable(const Model::SetIdentityPoolConfigurationRequest& request) const;

        /**
         * An Async wrapper for SetIdentityPoolConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityPoolConfigurationAsync(const Model::SetIdentityPoolConfigurationRequest& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Subscribes to receive notifications when a dataset is modified by another
         * device.</p><p>This API can only be called with temporary credentials provided by
         * Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SubscribeToDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToDatasetOutcome SubscribeToDataset(const Model::SubscribeToDatasetRequest& request) const;

        /**
         * A Callable wrapper for SubscribeToDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeToDatasetOutcomeCallable SubscribeToDatasetCallable(const Model::SubscribeToDatasetRequest& request) const;

        /**
         * An Async wrapper for SubscribeToDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeToDatasetAsync(const Model::SubscribeToDatasetRequest& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unsubscribes from receiving notifications when a dataset is modified by
         * another device.</p><p>This API can only be called with temporary credentials
         * provided by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UnsubscribeFromDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromDatasetOutcome UnsubscribeFromDataset(const Model::UnsubscribeFromDatasetRequest& request) const;

        /**
         * A Callable wrapper for UnsubscribeFromDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeFromDatasetOutcomeCallable UnsubscribeFromDatasetCallable(const Model::UnsubscribeFromDatasetRequest& request) const;

        /**
         * An Async wrapper for UnsubscribeFromDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeFromDatasetAsync(const Model::UnsubscribeFromDatasetRequest& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Posts updates to records and adds and deletes records for a dataset and
         * user.</p> <p>The sync count in the record patch is your last known sync count
         * for that record. The server will reject an UpdateRecords request with a
         * ResourceConflictException if you try to patch a record with a new value but a
         * stale sync count.</p><p>For example, if the sync count on the server is 5 for a
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
         * A Callable wrapper for UpdateRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecordsOutcomeCallable UpdateRecordsCallable(const Model::UpdateRecordsRequest& request) const;

        /**
         * An Async wrapper for UpdateRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecordsAsync(const Model::UpdateRecordsRequest& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CognitoSyncEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CognitoSyncClient>;
      void init(const CognitoSyncClientConfiguration& clientConfiguration);

      CognitoSyncClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CognitoSyncEndpointProviderBase> m_endpointProvider;
  };

} // namespace CognitoSync
} // namespace Aws
