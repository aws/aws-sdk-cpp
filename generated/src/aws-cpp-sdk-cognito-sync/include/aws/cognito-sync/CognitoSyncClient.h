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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CognitoSyncClientConfiguration ClientConfigurationType;
      typedef CognitoSyncEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::CognitoSync::CognitoSyncClientConfiguration& clientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration(),
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CognitoSyncClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::CognitoSync::CognitoSyncClientConfiguration& clientConfiguration = Aws::CognitoSync::CognitoSyncClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CognitoSyncClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BulkPublishRequestT = Model::BulkPublishRequest>
        Model::BulkPublishOutcomeCallable BulkPublishCallable(const BulkPublishRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::BulkPublish, request);
        }

        /**
         * An Async wrapper for BulkPublish that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BulkPublishRequestT = Model::BulkPublishRequest>
        void BulkPublishAsync(const BulkPublishRequestT& request, const BulkPublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::BulkPublish, request, handler, context);
        }

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
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::DeleteDataset, request, handler, context);
        }

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
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::DescribeDataset, request, handler, context);
        }

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
        template<typename DescribeIdentityPoolUsageRequestT = Model::DescribeIdentityPoolUsageRequest>
        Model::DescribeIdentityPoolUsageOutcomeCallable DescribeIdentityPoolUsageCallable(const DescribeIdentityPoolUsageRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::DescribeIdentityPoolUsage, request);
        }

        /**
         * An Async wrapper for DescribeIdentityPoolUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIdentityPoolUsageRequestT = Model::DescribeIdentityPoolUsageRequest>
        void DescribeIdentityPoolUsageAsync(const DescribeIdentityPoolUsageRequestT& request, const DescribeIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::DescribeIdentityPoolUsage, request, handler, context);
        }

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
        template<typename DescribeIdentityUsageRequestT = Model::DescribeIdentityUsageRequest>
        Model::DescribeIdentityUsageOutcomeCallable DescribeIdentityUsageCallable(const DescribeIdentityUsageRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::DescribeIdentityUsage, request);
        }

        /**
         * An Async wrapper for DescribeIdentityUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIdentityUsageRequestT = Model::DescribeIdentityUsageRequest>
        void DescribeIdentityUsageAsync(const DescribeIdentityUsageRequestT& request, const DescribeIdentityUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::DescribeIdentityUsage, request, handler, context);
        }

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
        template<typename GetBulkPublishDetailsRequestT = Model::GetBulkPublishDetailsRequest>
        Model::GetBulkPublishDetailsOutcomeCallable GetBulkPublishDetailsCallable(const GetBulkPublishDetailsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::GetBulkPublishDetails, request);
        }

        /**
         * An Async wrapper for GetBulkPublishDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBulkPublishDetailsRequestT = Model::GetBulkPublishDetailsRequest>
        void GetBulkPublishDetailsAsync(const GetBulkPublishDetailsRequestT& request, const GetBulkPublishDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::GetBulkPublishDetails, request, handler, context);
        }

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
        template<typename GetCognitoEventsRequestT = Model::GetCognitoEventsRequest>
        Model::GetCognitoEventsOutcomeCallable GetCognitoEventsCallable(const GetCognitoEventsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::GetCognitoEvents, request);
        }

        /**
         * An Async wrapper for GetCognitoEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCognitoEventsRequestT = Model::GetCognitoEventsRequest>
        void GetCognitoEventsAsync(const GetCognitoEventsRequestT& request, const GetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::GetCognitoEvents, request, handler, context);
        }

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
        template<typename GetIdentityPoolConfigurationRequestT = Model::GetIdentityPoolConfigurationRequest>
        Model::GetIdentityPoolConfigurationOutcomeCallable GetIdentityPoolConfigurationCallable(const GetIdentityPoolConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::GetIdentityPoolConfiguration, request);
        }

        /**
         * An Async wrapper for GetIdentityPoolConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityPoolConfigurationRequestT = Model::GetIdentityPoolConfigurationRequest>
        void GetIdentityPoolConfigurationAsync(const GetIdentityPoolConfigurationRequestT& request, const GetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::GetIdentityPoolConfiguration, request, handler, context);
        }

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
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::ListDatasets, request, handler, context);
        }

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
        template<typename ListIdentityPoolUsageRequestT = Model::ListIdentityPoolUsageRequest>
        Model::ListIdentityPoolUsageOutcomeCallable ListIdentityPoolUsageCallable(const ListIdentityPoolUsageRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::ListIdentityPoolUsage, request);
        }

        /**
         * An Async wrapper for ListIdentityPoolUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityPoolUsageRequestT = Model::ListIdentityPoolUsageRequest>
        void ListIdentityPoolUsageAsync(const ListIdentityPoolUsageRequestT& request, const ListIdentityPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::ListIdentityPoolUsage, request, handler, context);
        }

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
        template<typename ListRecordsRequestT = Model::ListRecordsRequest>
        Model::ListRecordsOutcomeCallable ListRecordsCallable(const ListRecordsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::ListRecords, request);
        }

        /**
         * An Async wrapper for ListRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecordsRequestT = Model::ListRecordsRequest>
        void ListRecordsAsync(const ListRecordsRequestT& request, const ListRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::ListRecords, request, handler, context);
        }

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
        template<typename RegisterDeviceRequestT = Model::RegisterDeviceRequest>
        Model::RegisterDeviceOutcomeCallable RegisterDeviceCallable(const RegisterDeviceRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::RegisterDevice, request);
        }

        /**
         * An Async wrapper for RegisterDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDeviceRequestT = Model::RegisterDeviceRequest>
        void RegisterDeviceAsync(const RegisterDeviceRequestT& request, const RegisterDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::RegisterDevice, request, handler, context);
        }

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
        template<typename SetCognitoEventsRequestT = Model::SetCognitoEventsRequest>
        Model::SetCognitoEventsOutcomeCallable SetCognitoEventsCallable(const SetCognitoEventsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::SetCognitoEvents, request);
        }

        /**
         * An Async wrapper for SetCognitoEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetCognitoEventsRequestT = Model::SetCognitoEventsRequest>
        void SetCognitoEventsAsync(const SetCognitoEventsRequestT& request, const SetCognitoEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::SetCognitoEvents, request, handler, context);
        }

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
        template<typename SetIdentityPoolConfigurationRequestT = Model::SetIdentityPoolConfigurationRequest>
        Model::SetIdentityPoolConfigurationOutcomeCallable SetIdentityPoolConfigurationCallable(const SetIdentityPoolConfigurationRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::SetIdentityPoolConfiguration, request);
        }

        /**
         * An Async wrapper for SetIdentityPoolConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityPoolConfigurationRequestT = Model::SetIdentityPoolConfigurationRequest>
        void SetIdentityPoolConfigurationAsync(const SetIdentityPoolConfigurationRequestT& request, const SetIdentityPoolConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::SetIdentityPoolConfiguration, request, handler, context);
        }

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
        template<typename SubscribeToDatasetRequestT = Model::SubscribeToDatasetRequest>
        Model::SubscribeToDatasetOutcomeCallable SubscribeToDatasetCallable(const SubscribeToDatasetRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::SubscribeToDataset, request);
        }

        /**
         * An Async wrapper for SubscribeToDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubscribeToDatasetRequestT = Model::SubscribeToDatasetRequest>
        void SubscribeToDatasetAsync(const SubscribeToDatasetRequestT& request, const SubscribeToDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::SubscribeToDataset, request, handler, context);
        }

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
        template<typename UnsubscribeFromDatasetRequestT = Model::UnsubscribeFromDatasetRequest>
        Model::UnsubscribeFromDatasetOutcomeCallable UnsubscribeFromDatasetCallable(const UnsubscribeFromDatasetRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::UnsubscribeFromDataset, request);
        }

        /**
         * An Async wrapper for UnsubscribeFromDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnsubscribeFromDatasetRequestT = Model::UnsubscribeFromDatasetRequest>
        void UnsubscribeFromDatasetAsync(const UnsubscribeFromDatasetRequestT& request, const UnsubscribeFromDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::UnsubscribeFromDataset, request, handler, context);
        }

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
        template<typename UpdateRecordsRequestT = Model::UpdateRecordsRequest>
        Model::UpdateRecordsOutcomeCallable UpdateRecordsCallable(const UpdateRecordsRequestT& request) const
        {
            return SubmitCallable(&CognitoSyncClient::UpdateRecords, request);
        }

        /**
         * An Async wrapper for UpdateRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecordsRequestT = Model::UpdateRecordsRequest>
        void UpdateRecordsAsync(const UpdateRecordsRequestT& request, const UpdateRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CognitoSyncClient::UpdateRecords, request, handler, context);
        }


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
