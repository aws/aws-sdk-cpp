/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-sync/CognitoSyncServiceClientModel.h>
#include <aws/cognito-sync/CognitoSyncLegacyAsyncMacros.h>

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
  class AWS_COGNITOSYNC_API CognitoSyncClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Gets usage details (for example, data storage) about a particular identity
         * pool.</p> <p>This API can only be called with developer credentials. You cannot
         * call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityPoolUsageOutcome DescribeIdentityPoolUsage(const Model::DescribeIdentityPoolUsageRequest& request) const;


        /**
         * <p>Gets usage information for an identity, including number of datasets and data
         * usage.</p> <p>This API can be called with temporary user credentials provided by
         * Cognito Identity or with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/DescribeIdentityUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityUsageOutcome DescribeIdentityUsage(const Model::DescribeIdentityUsageRequest& request) const;


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
         * <p>Gets the events and the corresponding Lambda functions associated with an
         * identity pool.</p><p>This API can only be called with developer credentials. You
         * cannot call this API with the temporary user credentials provided by Cognito
         * Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCognitoEventsOutcome GetCognitoEvents(const Model::GetCognitoEventsRequest& request) const;


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
         * <p>Gets a list of identity pools registered with Cognito.</p>
         * <p>ListIdentityPoolUsage can only be called with developer credentials. You
         * cannot make this API call with the temporary user credentials provided by
         * Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListIdentityPoolUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoolUsageOutcome ListIdentityPoolUsage(const Model::ListIdentityPoolUsageRequest& request) const;


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
         * <p>Registers a device to receive push sync notifications.</p><p>This API can
         * only be called with temporary credentials provided by Cognito Identity. You
         * cannot call this API with developer credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RegisterDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDeviceOutcome RegisterDevice(const Model::RegisterDeviceRequest& request) const;


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
         * <p>Sets the necessary configuration for push sync.</p><p>This API can only be
         * called with developer credentials. You cannot call this API with the temporary
         * user credentials provided by Cognito Identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityPoolConfigurationOutcome SetIdentityPoolConfiguration(const Model::SetIdentityPoolConfigurationRequest& request) const;


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
         * <p>Unsubscribes from receiving notifications when a dataset is modified by
         * another device.</p><p>This API can only be called with temporary credentials
         * provided by Cognito Identity. You cannot call this API with developer
         * credentials.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/UnsubscribeFromDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromDatasetOutcome UnsubscribeFromDataset(const Model::UnsubscribeFromDatasetRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CognitoSyncEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CognitoSyncClientConfiguration& clientConfiguration);

      CognitoSyncClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CognitoSyncEndpointProviderBase> m_endpointProvider;
  };

} // namespace CognitoSync
} // namespace Aws
