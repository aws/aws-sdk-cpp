/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dataexchange/model/CreateDataSetResult.h>
#include <aws/dataexchange/model/CreateEventActionResult.h>
#include <aws/dataexchange/model/CreateJobResult.h>
#include <aws/dataexchange/model/CreateRevisionResult.h>
#include <aws/dataexchange/model/GetAssetResult.h>
#include <aws/dataexchange/model/GetDataSetResult.h>
#include <aws/dataexchange/model/GetEventActionResult.h>
#include <aws/dataexchange/model/GetJobResult.h>
#include <aws/dataexchange/model/GetRevisionResult.h>
#include <aws/dataexchange/model/ListDataSetRevisionsResult.h>
#include <aws/dataexchange/model/ListDataSetsResult.h>
#include <aws/dataexchange/model/ListEventActionsResult.h>
#include <aws/dataexchange/model/ListJobsResult.h>
#include <aws/dataexchange/model/ListRevisionAssetsResult.h>
#include <aws/dataexchange/model/ListTagsForResourceResult.h>
#include <aws/dataexchange/model/RevokeRevisionResult.h>
#include <aws/dataexchange/model/SendApiAssetResult.h>
#include <aws/dataexchange/model/StartJobResult.h>
#include <aws/dataexchange/model/UpdateAssetResult.h>
#include <aws/dataexchange/model/UpdateDataSetResult.h>
#include <aws/dataexchange/model/UpdateEventActionResult.h>
#include <aws/dataexchange/model/UpdateRevisionResult.h>
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

namespace DataExchange
{

namespace Model
{
        class CancelJobRequest;
        class CreateDataSetRequest;
        class CreateEventActionRequest;
        class CreateJobRequest;
        class CreateRevisionRequest;
        class DeleteAssetRequest;
        class DeleteDataSetRequest;
        class DeleteEventActionRequest;
        class DeleteRevisionRequest;
        class GetAssetRequest;
        class GetDataSetRequest;
        class GetEventActionRequest;
        class GetJobRequest;
        class GetRevisionRequest;
        class ListDataSetRevisionsRequest;
        class ListDataSetsRequest;
        class ListEventActionsRequest;
        class ListJobsRequest;
        class ListRevisionAssetsRequest;
        class ListTagsForResourceRequest;
        class RevokeRevisionRequest;
        class SendApiAssetRequest;
        class StartJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAssetRequest;
        class UpdateDataSetRequest;
        class UpdateEventActionRequest;
        class UpdateRevisionRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateDataSetResult, DataExchangeError> CreateDataSetOutcome;
        typedef Aws::Utils::Outcome<CreateEventActionResult, DataExchangeError> CreateEventActionOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, DataExchangeError> CreateJobOutcome;
        typedef Aws::Utils::Outcome<CreateRevisionResult, DataExchangeError> CreateRevisionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> DeleteAssetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> DeleteDataSetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> DeleteEventActionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> DeleteRevisionOutcome;
        typedef Aws::Utils::Outcome<GetAssetResult, DataExchangeError> GetAssetOutcome;
        typedef Aws::Utils::Outcome<GetDataSetResult, DataExchangeError> GetDataSetOutcome;
        typedef Aws::Utils::Outcome<GetEventActionResult, DataExchangeError> GetEventActionOutcome;
        typedef Aws::Utils::Outcome<GetJobResult, DataExchangeError> GetJobOutcome;
        typedef Aws::Utils::Outcome<GetRevisionResult, DataExchangeError> GetRevisionOutcome;
        typedef Aws::Utils::Outcome<ListDataSetRevisionsResult, DataExchangeError> ListDataSetRevisionsOutcome;
        typedef Aws::Utils::Outcome<ListDataSetsResult, DataExchangeError> ListDataSetsOutcome;
        typedef Aws::Utils::Outcome<ListEventActionsResult, DataExchangeError> ListEventActionsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, DataExchangeError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListRevisionAssetsResult, DataExchangeError> ListRevisionAssetsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, DataExchangeError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RevokeRevisionResult, DataExchangeError> RevokeRevisionOutcome;
        typedef Aws::Utils::Outcome<SendApiAssetResult, DataExchangeError> SendApiAssetOutcome;
        typedef Aws::Utils::Outcome<StartJobResult, DataExchangeError> StartJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DataExchangeError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAssetResult, DataExchangeError> UpdateAssetOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSetResult, DataExchangeError> UpdateDataSetOutcome;
        typedef Aws::Utils::Outcome<UpdateEventActionResult, DataExchangeError> UpdateEventActionOutcome;
        typedef Aws::Utils::Outcome<UpdateRevisionResult, DataExchangeError> UpdateRevisionOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateDataSetOutcome> CreateDataSetOutcomeCallable;
        typedef std::future<CreateEventActionOutcome> CreateEventActionOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<CreateRevisionOutcome> CreateRevisionOutcomeCallable;
        typedef std::future<DeleteAssetOutcome> DeleteAssetOutcomeCallable;
        typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
        typedef std::future<DeleteEventActionOutcome> DeleteEventActionOutcomeCallable;
        typedef std::future<DeleteRevisionOutcome> DeleteRevisionOutcomeCallable;
        typedef std::future<GetAssetOutcome> GetAssetOutcomeCallable;
        typedef std::future<GetDataSetOutcome> GetDataSetOutcomeCallable;
        typedef std::future<GetEventActionOutcome> GetEventActionOutcomeCallable;
        typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
        typedef std::future<GetRevisionOutcome> GetRevisionOutcomeCallable;
        typedef std::future<ListDataSetRevisionsOutcome> ListDataSetRevisionsOutcomeCallable;
        typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
        typedef std::future<ListEventActionsOutcome> ListEventActionsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListRevisionAssetsOutcome> ListRevisionAssetsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RevokeRevisionOutcome> RevokeRevisionOutcomeCallable;
        typedef std::future<SendApiAssetOutcome> SendApiAssetOutcomeCallable;
        typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAssetOutcome> UpdateAssetOutcomeCallable;
        typedef std::future<UpdateDataSetOutcome> UpdateDataSetOutcomeCallable;
        typedef std::future<UpdateEventActionOutcome> UpdateEventActionOutcomeCallable;
        typedef std::future<UpdateRevisionOutcome> UpdateRevisionOutcomeCallable;
} // namespace Model

  class DataExchangeClient;

    typedef std::function<void(const DataExchangeClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::CreateDataSetRequest&, const Model::CreateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::CreateEventActionRequest&, const Model::CreateEventActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventActionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::CreateRevisionRequest&, const Model::CreateRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRevisionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::DeleteAssetRequest&, const Model::DeleteAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::DeleteDataSetRequest&, const Model::DeleteDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::DeleteEventActionRequest&, const Model::DeleteEventActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventActionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::DeleteRevisionRequest&, const Model::DeleteRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRevisionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::GetAssetRequest&, const Model::GetAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::GetDataSetRequest&, const Model::GetDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::GetEventActionRequest&, const Model::GetEventActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventActionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::GetRevisionRequest&, const Model::GetRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRevisionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListDataSetRevisionsRequest&, const Model::ListDataSetRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetRevisionsResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListEventActionsRequest&, const Model::ListEventActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventActionsResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListRevisionAssetsRequest&, const Model::ListRevisionAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRevisionAssetsResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::RevokeRevisionRequest&, const Model::RevokeRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeRevisionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::SendApiAssetRequest&, Model::SendApiAssetOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendApiAssetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::StartJobRequest&, const Model::StartJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::UpdateAssetRequest&, const Model::UpdateAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::UpdateDataSetRequest&, const Model::UpdateDataSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSetResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::UpdateEventActionRequest&, const Model::UpdateEventActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventActionResponseReceivedHandler;
    typedef std::function<void(const DataExchangeClient*, const Model::UpdateRevisionRequest&, const Model::UpdateRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRevisionResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataExchangeClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataExchangeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation creates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSetOutcome CreateDataSet(const Model::CreateDataSetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSetOutcomeCallable CreateDataSetCallable(const Model::CreateDataSetRequest& request) const;

        /**
         * An Async wrapper for CreateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSetAsync(const Model::CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation creates an event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventActionOutcome CreateEventAction(const Model::CreateEventActionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventActionOutcomeCallable CreateEventActionCallable(const Model::CreateEventActionRequest& request) const;

        /**
         * An Async wrapper for CreateEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventActionAsync(const Model::CreateEventActionRequest& request, const CreateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation creates a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRevisionOutcomeCallable CreateRevisionCallable(const Model::CreateRevisionRequest& request) const;

        /**
         * An Async wrapper for CreateRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRevisionAsync(const Model::CreateRevisionRequest& request, const CreateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const Model::DeleteAssetRequest& request) const;

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssetAsync(const Model::DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSetOutcome DeleteDataSet(const Model::DeleteDataSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSetOutcomeCallable DeleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventActionOutcome DeleteEventAction(const Model::DeleteEventActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventActionOutcomeCallable DeleteEventActionCallable(const Model::DeleteEventActionRequest& request) const;

        /**
         * An Async wrapper for DeleteEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventActionAsync(const Model::DeleteEventActionRequest& request, const DeleteEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeleteRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRevisionOutcome DeleteRevision(const Model::DeleteRevisionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRevisionOutcomeCallable DeleteRevisionCallable(const Model::DeleteRevisionRequest& request) const;

        /**
         * An Async wrapper for DeleteRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRevisionAsync(const Model::DeleteRevisionRequest& request, const DeleteRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAssetOutcomeCallable GetAssetCallable(const Model::GetAssetRequest& request) const;

        /**
         * An Async wrapper for GetAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssetAsync(const Model::GetAssetRequest& request, const GetAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataSetOutcomeCallable GetDataSetCallable(const Model::GetDataSetRequest& request) const;

        /**
         * An Async wrapper for GetDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSetAsync(const Model::GetDataSetRequest& request, const GetDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEventActionOutcomeCallable GetEventActionCallable(const Model::GetEventActionRequest& request) const;

        /**
         * An Async wrapper for GetEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventActionAsync(const Model::GetEventActionRequest& request, const GetEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRevisionOutcomeCallable GetRevisionCallable(const Model::GetRevisionRequest& request) const;

        /**
         * An Async wrapper for GetRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRevisionAsync(const Model::GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataSetRevisionsOutcomeCallable ListDataSetRevisionsCallable(const Model::ListDataSetRevisionsRequest& request) const;

        /**
         * An Async wrapper for ListDataSetRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetRevisionsAsync(const Model::ListDataSetRevisionsRequest& request, const ListDataSetRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataSetsOutcomeCallable ListDataSetsCallable(const Model::ListDataSetsRequest& request) const;

        /**
         * An Async wrapper for ListDataSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataSetsAsync(const Model::ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation lists your event actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListEventActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventActionsOutcome ListEventActions(const Model::ListEventActionsRequest& request) const;

        /**
         * A Callable wrapper for ListEventActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventActionsOutcomeCallable ListEventActionsCallable(const Model::ListEventActionsRequest& request) const;

        /**
         * An Async wrapper for ListEventActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventActionsAsync(const Model::ListEventActionsRequest& request, const ListEventActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRevisionAssetsOutcomeCallable ListRevisionAssetsCallable(const Model::ListRevisionAssetsRequest& request) const;

        /**
         * An Async wrapper for ListRevisionAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRevisionAssetsAsync(const Model::ListRevisionAssetsRequest& request, const ListRevisionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation lists the tags on the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RevokeRevisionOutcomeCallable RevokeRevisionCallable(const Model::RevokeRevisionRequest& request) const;

        /**
         * An Async wrapper for RevokeRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeRevisionAsync(const Model::RevokeRevisionRequest& request, const RevokeRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SendApiAssetOutcomeCallable SendApiAssetCallable(const Model::SendApiAssetRequest& request) const;

        /**
         * An Async wrapper for SendApiAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendApiAssetAsync(const Model::SendApiAssetRequest& request, const SendApiAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation starts a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/StartJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobOutcome StartJob(const Model::StartJobRequest& request) const;

        /**
         * A Callable wrapper for StartJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobOutcomeCallable StartJobCallable(const Model::StartJobRequest& request) const;

        /**
         * An Async wrapper for StartJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobAsync(const Model::StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssetOutcome UpdateAsset(const Model::UpdateAssetRequest& request) const;

        /**
         * A Callable wrapper for UpdateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssetOutcomeCallable UpdateAssetCallable(const Model::UpdateAssetRequest& request) const;

        /**
         * An Async wrapper for UpdateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssetAsync(const Model::UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSetOutcome UpdateDataSet(const Model::UpdateDataSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSetOutcomeCallable UpdateDataSetCallable(const Model::UpdateDataSetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSetAsync(const Model::UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates the event action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateEventAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventActionOutcome UpdateEventAction(const Model::UpdateEventActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventActionOutcomeCallable UpdateEventActionCallable(const Model::UpdateEventActionRequest& request) const;

        /**
         * An Async wrapper for UpdateEventAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventActionAsync(const Model::UpdateEventActionRequest& request, const UpdateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates a revision.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/UpdateRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevisionOutcome UpdateRevision(const Model::UpdateRevisionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRevisionOutcomeCallable UpdateRevisionCallable(const Model::UpdateRevisionRequest& request) const;

        /**
         * An Async wrapper for UpdateRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRevisionAsync(const Model::UpdateRevisionRequest& request, const UpdateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DataExchange
} // namespace Aws
