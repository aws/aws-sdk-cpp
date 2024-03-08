/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dataexchange/DataExchangeServiceClientModel.h>

namespace Aws
{
namespace DataExchange
{
  /**
   * <p>AWS Data Exchange is a service that makes it easy for AWS customers to
   * exchange data in the cloud. You can use the AWS Data Exchange APIs to create,
   * update, manage, and access file-based data set in the AWS Cloud.</p> <p>As a
   * subscriber, you can view and access the data sets that you have an entitlement
   * to through a subscription. You can use the APIs to download or copy your
   * entitled data sets to Amazon Simple Storage Service (Amazon S3) for use across a
   * variety of AWS analytics and machine learning services.</p> <p>As a provider,
   * you can create and manage your data sets that you would like to publish to a
   * product. Being able to package and provide your data sets into products requires
   * a few steps to determine eligibility. For more information, visit the <i>AWS
   * Data Exchange User Guide</i>.</p> <p>A data set is a collection of data that can
   * be changed or updated over time. Data sets can be updated using revisions, which
   * represent a new version or incremental change to a data set. A revision contains
   * one or more assets. An asset in AWS Data Exchange is a piece of data that can be
   * stored as an Amazon S3 object, Redshift datashare, API Gateway API, AWS Lake
   * Formation data permission, or Amazon S3 data access. The asset can be a
   * structured data file, an image file, or some other data file. Jobs are
   * asynchronous import or export operations used to create or copy assets.</p>
   */
  class AWS_DATAEXCHANGE_API DataExchangeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DataExchangeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DataExchangeClientConfiguration ClientConfigurationType;
      typedef DataExchangeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::DataExchange::DataExchangeClientConfiguration& clientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration(),
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::DataExchange::DataExchangeClientConfiguration& clientConfiguration = Aws::DataExchange::DataExchangeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataExchangeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>This operation cancels a job. Jobs can be cancelled only when they are in the
         * WAITING state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::CancelJob, request, handler, context);
        }

        /**
         * <p>This operation creates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSetRequestT = Model::CreateDataSetRequest>
        Model::CreateDataSetOutcomeCallable CreateDataSetCallable(const CreateDataSetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::CreateDataSet, request);
        }

        /**
         * An Async wrapper for CreateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSetRequestT = Model::CreateDataSetRequest>
        void CreateDataSetAsync(const CreateDataSetRequestT& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::CreateDataSet, request, handler, context);
        }

        /**
         * <p>This operation creates an event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventActionOutcome CreateEventAction(const Model::CreateEventActionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventActionRequestT = Model::CreateEventActionRequest>
        Model::CreateEventActionOutcomeCallable CreateEventActionCallable(const CreateEventActionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::CreateEventAction, request);
        }

        /**
         * An Async wrapper for CreateEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventActionRequestT = Model::CreateEventActionRequest>
        void CreateEventActionAsync(const CreateEventActionRequestT& request, const CreateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::CreateEventAction, request, handler, context);
        }

        /**
         * <p>This operation creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::CreateJob, request, handler, context);
        }

        /**
         * <p>This operation creates a revision for a data set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRevisionOutcome CreateRevision(const Model::CreateRevisionRequest& request) const;

        /**
         * A Callable wrapper for CreateRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRevisionRequestT = Model::CreateRevisionRequest>
        Model::CreateRevisionOutcomeCallable CreateRevisionCallable(const CreateRevisionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::CreateRevision, request);
        }

        /**
         * An Async wrapper for CreateRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRevisionRequestT = Model::CreateRevisionRequest>
        void CreateRevisionAsync(const CreateRevisionRequestT& request, const CreateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::CreateRevision, request, handler, context);
        }

        /**
         * <p>This operation deletes an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const DeleteAssetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::DeleteAsset, request);
        }

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        void DeleteAssetAsync(const DeleteAssetRequestT& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::DeleteAsset, request, handler, context);
        }

        /**
         * <p>This operation deletes a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSetRequestT = Model::DeleteDataSetRequest>
        Model::DeleteDataSetOutcomeCallable DeleteDataSetCallable(const DeleteDataSetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::DeleteDataSet, request);
        }

        /**
         * An Async wrapper for DeleteDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSetRequestT = Model::DeleteDataSetRequest>
        void DeleteDataSetAsync(const DeleteDataSetRequestT& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::DeleteDataSet, request, handler, context);
        }

        /**
         * <p>This operation deletes the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventActionOutcome DeleteEventAction(const Model::DeleteEventActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventActionRequestT = Model::DeleteEventActionRequest>
        Model::DeleteEventActionOutcomeCallable DeleteEventActionCallable(const DeleteEventActionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::DeleteEventAction, request);
        }

        /**
         * An Async wrapper for DeleteEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventActionRequestT = Model::DeleteEventActionRequest>
        void DeleteEventActionAsync(const DeleteEventActionRequestT& request, const DeleteEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::DeleteEventAction, request, handler, context);
        }

        /**
         * <p>This operation deletes a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRevisionOutcome DeleteRevision(const Model::DeleteRevisionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRevisionRequestT = Model::DeleteRevisionRequest>
        Model::DeleteRevisionOutcomeCallable DeleteRevisionCallable(const DeleteRevisionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::DeleteRevision, request);
        }

        /**
         * An Async wrapper for DeleteRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRevisionRequestT = Model::DeleteRevisionRequest>
        void DeleteRevisionAsync(const DeleteRevisionRequestT& request, const DeleteRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::DeleteRevision, request, handler, context);
        }

        /**
         * <p>This operation returns information about an asset.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssetOutcome GetAsset(const Model::GetAssetRequest& request) const;

        /**
         * A Callable wrapper for GetAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssetRequestT = Model::GetAssetRequest>
        Model::GetAssetOutcomeCallable GetAssetCallable(const GetAssetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::GetAsset, request);
        }

        /**
         * An Async wrapper for GetAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssetRequestT = Model::GetAssetRequest>
        void GetAssetAsync(const GetAssetRequestT& request, const GetAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::GetAsset, request, handler, context);
        }

        /**
         * <p>This operation returns information about a data set.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSetOutcome GetDataSet(const Model::GetDataSetRequest& request) const;

        /**
         * A Callable wrapper for GetDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSetRequestT = Model::GetDataSetRequest>
        Model::GetDataSetOutcomeCallable GetDataSetCallable(const GetDataSetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::GetDataSet, request);
        }

        /**
         * An Async wrapper for GetDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSetRequestT = Model::GetDataSetRequest>
        void GetDataSetAsync(const GetDataSetRequestT& request, const GetDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::GetDataSet, request, handler, context);
        }

        /**
         * <p>This operation retrieves information about an event action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventActionOutcome GetEventAction(const Model::GetEventActionRequest& request) const;

        /**
         * A Callable wrapper for GetEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventActionRequestT = Model::GetEventActionRequest>
        Model::GetEventActionOutcomeCallable GetEventActionCallable(const GetEventActionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::GetEventAction, request);
        }

        /**
         * An Async wrapper for GetEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventActionRequestT = Model::GetEventActionRequest>
        void GetEventActionAsync(const GetEventActionRequestT& request, const GetEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::GetEventAction, request, handler, context);
        }

        /**
         * <p>This operation returns information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::GetJob, request, handler, context);
        }

        /**
         * <p>This operation returns information about a revision.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevisionOutcome GetRevision(const Model::GetRevisionRequest& request) const;

        /**
         * A Callable wrapper for GetRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRevisionRequestT = Model::GetRevisionRequest>
        Model::GetRevisionOutcomeCallable GetRevisionCallable(const GetRevisionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::GetRevision, request);
        }

        /**
         * An Async wrapper for GetRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRevisionRequestT = Model::GetRevisionRequest>
        void GetRevisionAsync(const GetRevisionRequestT& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::GetRevision, request, handler, context);
        }

        /**
         * <p>This operation lists a data set's revisions sorted by CreatedAt in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListDataSetRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSetRevisionsOutcome ListDataSetRevisions(const Model::ListDataSetRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSetRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSetRevisionsRequestT = Model::ListDataSetRevisionsRequest>
        Model::ListDataSetRevisionsOutcomeCallable ListDataSetRevisionsCallable(const ListDataSetRevisionsRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListDataSetRevisions, request);
        }

        /**
         * An Async wrapper for ListDataSetRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSetRevisionsRequestT = Model::ListDataSetRevisionsRequest>
        void ListDataSetRevisionsAsync(const ListDataSetRevisionsRequestT& request, const ListDataSetRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListDataSetRevisions, request, handler, context);
        }

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
         * A Callable wrapper for ListDataSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const ListDataSetsRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListDataSets, request);
        }

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSetsRequestT = Model::ListDataSetsRequest>
        void ListDataSetsAsync(const ListDataSetsRequestT& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListDataSets, request, handler, context);
        }

        /**
         * <p>This operation lists your event actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListEventActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventActionsOutcome ListEventActions(const Model::ListEventActionsRequest& request) const;

        /**
         * A Callable wrapper for ListEventActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventActionsRequestT = Model::ListEventActionsRequest>
        Model::ListEventActionsOutcomeCallable ListEventActionsCallable(const ListEventActionsRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListEventActions, request);
        }

        /**
         * An Async wrapper for ListEventActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventActionsRequestT = Model::ListEventActionsRequest>
        void ListEventActionsAsync(const ListEventActionsRequestT& request, const ListEventActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListEventActions, request, handler, context);
        }

        /**
         * <p>This operation lists your jobs sorted by CreatedAt in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListJobs, request, handler, context);
        }

        /**
         * <p>This operation lists a revision's assets sorted alphabetically in descending
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListRevisionAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRevisionAssetsOutcome ListRevisionAssets(const Model::ListRevisionAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListRevisionAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRevisionAssetsRequestT = Model::ListRevisionAssetsRequest>
        Model::ListRevisionAssetsOutcomeCallable ListRevisionAssetsCallable(const ListRevisionAssetsRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListRevisionAssets, request);
        }

        /**
         * An Async wrapper for ListRevisionAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRevisionAssetsRequestT = Model::ListRevisionAssetsRequest>
        void ListRevisionAssetsAsync(const ListRevisionAssetsRequestT& request, const ListRevisionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListRevisionAssets, request, handler, context);
        }

        /**
         * <p>This operation lists the tags on the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>This operation revokes subscribers' access to a revision.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RevokeRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeRevisionOutcome RevokeRevision(const Model::RevokeRevisionRequest& request) const;

        /**
         * A Callable wrapper for RevokeRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeRevisionRequestT = Model::RevokeRevisionRequest>
        Model::RevokeRevisionOutcomeCallable RevokeRevisionCallable(const RevokeRevisionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::RevokeRevision, request);
        }

        /**
         * An Async wrapper for RevokeRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeRevisionRequestT = Model::RevokeRevisionRequest>
        void RevokeRevisionAsync(const RevokeRevisionRequestT& request, const RevokeRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::RevokeRevision, request, handler, context);
        }

        /**
         * <p>This operation invokes an API Gateway API asset. The request is proxied to
         * the provider’s API Gateway API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/SendApiAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::SendApiAssetOutcome SendApiAsset(const Model::SendApiAssetRequest& request) const;

        /**
         * A Callable wrapper for SendApiAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendApiAssetRequestT = Model::SendApiAssetRequest>
        Model::SendApiAssetOutcomeCallable SendApiAssetCallable(const SendApiAssetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::SendApiAsset, request);
        }

        /**
         * An Async wrapper for SendApiAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendApiAssetRequestT = Model::SendApiAssetRequest>
        void SendApiAssetAsync(const SendApiAssetRequestT& request, const SendApiAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::SendApiAsset, request, handler, context);
        }

        /**
         * <p>The type of event associated with the data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/SendDataSetNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataSetNotificationOutcome SendDataSetNotification(const Model::SendDataSetNotificationRequest& request) const;

        /**
         * A Callable wrapper for SendDataSetNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendDataSetNotificationRequestT = Model::SendDataSetNotificationRequest>
        Model::SendDataSetNotificationOutcomeCallable SendDataSetNotificationCallable(const SendDataSetNotificationRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::SendDataSetNotification, request);
        }

        /**
         * An Async wrapper for SendDataSetNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendDataSetNotificationRequestT = Model::SendDataSetNotificationRequest>
        void SendDataSetNotificationAsync(const SendDataSetNotificationRequestT& request, const SendDataSetNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::SendDataSetNotification, request, handler, context);
        }

        /**
         * <p>This operation starts a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;

        /**
         * A Callable wrapper for StartJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRequestT = Model::StartJobRequest>
        Model::StartJobOutcomeCallable StartJobCallable(const StartJobRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::StartJob, request);
        }

        /**
         * An Async wrapper for StartJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRequestT = Model::StartJobRequest>
        void StartJobAsync(const StartJobRequestT& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::StartJob, request, handler, context);
        }

        /**
         * <p>This operation tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::TagResource, request, handler, context);
        }

        /**
         * <p>This operation removes one or more tags from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::UntagResource, request, handler, context);
        }

        /**
         * <p>This operation updates an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest& request) const;

        /**
         * A Callable wrapper for UpdateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssetRequestT = Model::UpdateAssetRequest>
        Model::UpdateAssetOutcomeCallable UpdateAssetCallable(const UpdateAssetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::UpdateAsset, request);
        }

        /**
         * An Async wrapper for UpdateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssetRequestT = Model::UpdateAssetRequest>
        void UpdateAssetAsync(const UpdateAssetRequestT& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::UpdateAsset, request, handler, context);
        }

        /**
         * <p>This operation updates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSetRequestT = Model::UpdateDataSetRequest>
        Model::UpdateDataSetOutcomeCallable UpdateDataSetCallable(const UpdateDataSetRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::UpdateDataSet, request);
        }

        /**
         * An Async wrapper for UpdateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSetRequestT = Model::UpdateDataSetRequest>
        void UpdateDataSetAsync(const UpdateDataSetRequestT& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::UpdateDataSet, request, handler, context);
        }

        /**
         * <p>This operation updates the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventActionOutcome UpdateEventAction(const Model::UpdateEventActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventActionRequestT = Model::UpdateEventActionRequest>
        Model::UpdateEventActionOutcomeCallable UpdateEventActionCallable(const UpdateEventActionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::UpdateEventAction, request);
        }

        /**
         * An Async wrapper for UpdateEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventActionRequestT = Model::UpdateEventActionRequest>
        void UpdateEventActionAsync(const UpdateEventActionRequestT& request, const UpdateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::UpdateEventAction, request, handler, context);
        }

        /**
         * <p>This operation updates a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevisionOutcome UpdateRevision(const Model::UpdateRevisionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRevisionRequestT = Model::UpdateRevisionRequest>
        Model::UpdateRevisionOutcomeCallable UpdateRevisionCallable(const UpdateRevisionRequestT& request) const
        {
            return SubmitCallable(&DataExchangeClient::UpdateRevision, request);
        }

        /**
         * An Async wrapper for UpdateRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRevisionRequestT = Model::UpdateRevisionRequest>
        void UpdateRevisionAsync(const UpdateRevisionRequestT& request, const UpdateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DataExchangeClient::UpdateRevision, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DataExchangeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DataExchangeClient>;
      void init(const DataExchangeClientConfiguration& clientConfiguration);

      DataExchangeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DataExchangeEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataExchange
} // namespace Aws
