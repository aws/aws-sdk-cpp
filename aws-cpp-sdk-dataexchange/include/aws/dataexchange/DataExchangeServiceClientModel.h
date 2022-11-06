/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dataexchange/DataExchangeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dataexchange/DataExchangeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DataExchangeClient header */
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
/* End of service model headers required in DataExchangeClient header */

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
    using DataExchangeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DataExchangeEndpointProviderBase = Aws::DataExchange::Endpoint::DataExchangeEndpointProviderBase;
    using DataExchangeEndpointProvider = Aws::DataExchange::Endpoint::DataExchangeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DataExchangeClient header */
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
      /* End of service model forward declarations required in DataExchangeClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DataExchangeClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace DataExchange
} // namespace Aws
