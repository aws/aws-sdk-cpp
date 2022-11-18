/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dataexchange/DataExchangeServiceClientModel.h>
#include <aws/dataexchange/DataExchangeLegacyAsyncMacros.h>

namespace Aws
{
namespace DataExchange
{
  /**
   * <p>AWS Data Exchange is a service that makes it easy for AWS customers to
   * exchange data in the cloud. You can use the AWS Data Exchange APIs to create,
   * update, manage, and access file-based data set in the AWS Cloud.</p> <p>As a
   * subscriber, you can view and access the data sets that you have an entitlement
   * to through a subscription. You can use the APIS to download or copy your
   * entitled data sets to Amazon S3 for use across a variety of AWS analytics and
   * machine learning services.</p> <p>As a provider, you can create and manage your
   * data sets that you would like to publish to a product. Being able to package and
   * provide your data sets into products requires a few steps to determine
   * eligibility. For more information, visit the AWS Data Exchange User Guide.</p>
   * <p>A data set is a collection of data that can be changed or updated over time.
   * Data sets can be updated using revisions, which represent a new version or
   * incremental change to a data set. A revision contains one or more assets. An
   * asset in AWS Data Exchange is a piece of data that can be stored as an Amazon S3
   * object. The asset can be a structured data file, an image file, or some other
   * data file. Jobs are asynchronous import or export operations used to create or
   * copy assets.</p>
   */
  class AWS_DATAEXCHANGE_API DataExchangeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::DataExchange::DataExchangeClientConfiguration& clientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration(),
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DataExchange::DataExchangeClientConfiguration& clientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataExchangeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DataExchange::DataExchangeClientConfiguration& clientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataExchangeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DataExchangeClient();


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
         * <p>This operation cancels a job. Jobs can be cancelled only when they are in the
         * WAITING state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;


        /**
         * <p>This operation creates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;


        /**
         * <p>This operation creates an event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventActionOutcome CreateEventAction(const Model::CreateEventActionRequest& request) const;


        /**
         * <p>This operation creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;


        /**
         * <p>This operation creates a revision for a data set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRevisionOutcome CreateRevision(const Model::CreateRevisionRequest& request) const;


        /**
         * <p>This operation deletes an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;


        /**
         * <p>This operation deletes a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;


        /**
         * <p>This operation deletes the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventActionOutcome DeleteEventAction(const Model::DeleteEventActionRequest& request) const;


        /**
         * <p>This operation deletes a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRevisionOutcome DeleteRevision(const Model::DeleteRevisionRequest& request) const;


        /**
         * <p>This operation returns information about an asset.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetOutcome GetAsset(const Model::GetAssetRequest& request) const;


        /**
         * <p>This operation returns information about a data set.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetOutcome GetDataSet(const Model::GetDataSetRequest& request) const;


        /**
         * <p>This operation retrieves information about an event action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventActionOutcome GetEventAction(const Model::GetEventActionRequest& request) const;


        /**
         * <p>This operation returns information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;


        /**
         * <p>This operation returns information about a revision.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevisionOutcome GetRevision(const Model::GetRevisionRequest& request) const;


        /**
         * <p>This operation lists a data set's revisions sorted by CreatedAt in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListDataSetRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetRevisionsOutcome ListDataSetRevisions(const Model::ListDataSetRevisionsRequest& request) const;


        /**
         * <p>This operation lists your data sets. When listing by origin OWNED, results
         * are sorted by CreatedAt in descending order. When listing by origin ENTITLED,
         * there is no order and the maxResults parameter is ignored.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListDataSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetsOutcome ListDataSets(const Model::ListDataSetsRequest& request) const;


        /**
         * <p>This operation lists your event actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListEventActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventActionsOutcome ListEventActions(const Model::ListEventActionsRequest& request) const;


        /**
         * <p>This operation lists your jobs sorted by CreatedAt in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;


        /**
         * <p>This operation lists a revision's assets sorted alphabetically in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListRevisionAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRevisionAssetsOutcome ListRevisionAssets(const Model::ListRevisionAssetsRequest& request) const;


        /**
         * <p>This operation lists the tags on the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>This operation revokes subscribers' access to a revision.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RevokeRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeRevisionOutcome RevokeRevision(const Model::RevokeRevisionRequest& request) const;


        /**
         * <p>This operation invokes an API Gateway API asset. The request is proxied to
         * the provider’s API Gateway API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/SendApiAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::SendApiAssetOutcome SendApiAsset(const Model::SendApiAssetRequest& request) const;


        /**
         * <p>This operation starts a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;


        /**
         * <p>This operation tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>This operation removes one or more tags from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>This operation updates an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest& request) const;


        /**
         * <p>This operation updates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;


        /**
         * <p>This operation updates the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventActionOutcome UpdateEventAction(const Model::UpdateEventActionRequest& request) const;


        /**
         * <p>This operation updates a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevisionOutcome UpdateRevision(const Model::UpdateRevisionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DataExchangeEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DataExchangeClientConfiguration& clientConfiguration);

      DataExchangeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DataExchangeEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataExchange
} // namespace Aws
