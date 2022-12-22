/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/omics/OmicsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/omics/OmicsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OmicsClient header */
#include <aws/omics/model/BatchDeleteReadSetResult.h>
#include <aws/omics/model/CancelAnnotationImportJobResult.h>
#include <aws/omics/model/CancelVariantImportJobResult.h>
#include <aws/omics/model/CreateAnnotationStoreResult.h>
#include <aws/omics/model/CreateReferenceStoreResult.h>
#include <aws/omics/model/CreateRunGroupResult.h>
#include <aws/omics/model/CreateSequenceStoreResult.h>
#include <aws/omics/model/CreateVariantStoreResult.h>
#include <aws/omics/model/CreateWorkflowResult.h>
#include <aws/omics/model/DeleteAnnotationStoreResult.h>
#include <aws/omics/model/DeleteReferenceResult.h>
#include <aws/omics/model/DeleteReferenceStoreResult.h>
#include <aws/omics/model/DeleteSequenceStoreResult.h>
#include <aws/omics/model/DeleteVariantStoreResult.h>
#include <aws/omics/model/GetAnnotationImportJobResult.h>
#include <aws/omics/model/GetAnnotationStoreResult.h>
#include <aws/omics/model/GetReadSetResult.h>
#include <aws/omics/model/GetReadSetActivationJobResult.h>
#include <aws/omics/model/GetReadSetExportJobResult.h>
#include <aws/omics/model/GetReadSetImportJobResult.h>
#include <aws/omics/model/GetReadSetMetadataResult.h>
#include <aws/omics/model/GetReferenceResult.h>
#include <aws/omics/model/GetReferenceImportJobResult.h>
#include <aws/omics/model/GetReferenceMetadataResult.h>
#include <aws/omics/model/GetReferenceStoreResult.h>
#include <aws/omics/model/GetRunResult.h>
#include <aws/omics/model/GetRunGroupResult.h>
#include <aws/omics/model/GetRunTaskResult.h>
#include <aws/omics/model/GetSequenceStoreResult.h>
#include <aws/omics/model/GetVariantImportJobResult.h>
#include <aws/omics/model/GetVariantStoreResult.h>
#include <aws/omics/model/GetWorkflowResult.h>
#include <aws/omics/model/ListAnnotationImportJobsResult.h>
#include <aws/omics/model/ListAnnotationStoresResult.h>
#include <aws/omics/model/ListReadSetActivationJobsResult.h>
#include <aws/omics/model/ListReadSetExportJobsResult.h>
#include <aws/omics/model/ListReadSetImportJobsResult.h>
#include <aws/omics/model/ListReadSetsResult.h>
#include <aws/omics/model/ListReferenceImportJobsResult.h>
#include <aws/omics/model/ListReferenceStoresResult.h>
#include <aws/omics/model/ListReferencesResult.h>
#include <aws/omics/model/ListRunGroupsResult.h>
#include <aws/omics/model/ListRunTasksResult.h>
#include <aws/omics/model/ListRunsResult.h>
#include <aws/omics/model/ListSequenceStoresResult.h>
#include <aws/omics/model/ListTagsForResourceResult.h>
#include <aws/omics/model/ListVariantImportJobsResult.h>
#include <aws/omics/model/ListVariantStoresResult.h>
#include <aws/omics/model/ListWorkflowsResult.h>
#include <aws/omics/model/StartAnnotationImportJobResult.h>
#include <aws/omics/model/StartReadSetActivationJobResult.h>
#include <aws/omics/model/StartReadSetExportJobResult.h>
#include <aws/omics/model/StartReadSetImportJobResult.h>
#include <aws/omics/model/StartReferenceImportJobResult.h>
#include <aws/omics/model/StartRunResult.h>
#include <aws/omics/model/StartVariantImportJobResult.h>
#include <aws/omics/model/TagResourceResult.h>
#include <aws/omics/model/UntagResourceResult.h>
#include <aws/omics/model/UpdateAnnotationStoreResult.h>
#include <aws/omics/model/UpdateVariantStoreResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in OmicsClient header */

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

  namespace Omics
  {
    using OmicsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OmicsEndpointProviderBase = Aws::Omics::Endpoint::OmicsEndpointProviderBase;
    using OmicsEndpointProvider = Aws::Omics::Endpoint::OmicsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OmicsClient header */
      class BatchDeleteReadSetRequest;
      class CancelAnnotationImportJobRequest;
      class CancelRunRequest;
      class CancelVariantImportJobRequest;
      class CreateAnnotationStoreRequest;
      class CreateReferenceStoreRequest;
      class CreateRunGroupRequest;
      class CreateSequenceStoreRequest;
      class CreateVariantStoreRequest;
      class CreateWorkflowRequest;
      class DeleteAnnotationStoreRequest;
      class DeleteReferenceRequest;
      class DeleteReferenceStoreRequest;
      class DeleteRunRequest;
      class DeleteRunGroupRequest;
      class DeleteSequenceStoreRequest;
      class DeleteVariantStoreRequest;
      class DeleteWorkflowRequest;
      class GetAnnotationImportJobRequest;
      class GetAnnotationStoreRequest;
      class GetReadSetRequest;
      class GetReadSetActivationJobRequest;
      class GetReadSetExportJobRequest;
      class GetReadSetImportJobRequest;
      class GetReadSetMetadataRequest;
      class GetReferenceRequest;
      class GetReferenceImportJobRequest;
      class GetReferenceMetadataRequest;
      class GetReferenceStoreRequest;
      class GetRunRequest;
      class GetRunGroupRequest;
      class GetRunTaskRequest;
      class GetSequenceStoreRequest;
      class GetVariantImportJobRequest;
      class GetVariantStoreRequest;
      class GetWorkflowRequest;
      class ListAnnotationImportJobsRequest;
      class ListAnnotationStoresRequest;
      class ListReadSetActivationJobsRequest;
      class ListReadSetExportJobsRequest;
      class ListReadSetImportJobsRequest;
      class ListReadSetsRequest;
      class ListReferenceImportJobsRequest;
      class ListReferenceStoresRequest;
      class ListReferencesRequest;
      class ListRunGroupsRequest;
      class ListRunTasksRequest;
      class ListRunsRequest;
      class ListSequenceStoresRequest;
      class ListTagsForResourceRequest;
      class ListVariantImportJobsRequest;
      class ListVariantStoresRequest;
      class ListWorkflowsRequest;
      class StartAnnotationImportJobRequest;
      class StartReadSetActivationJobRequest;
      class StartReadSetExportJobRequest;
      class StartReadSetImportJobRequest;
      class StartReferenceImportJobRequest;
      class StartRunRequest;
      class StartVariantImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAnnotationStoreRequest;
      class UpdateRunGroupRequest;
      class UpdateVariantStoreRequest;
      class UpdateWorkflowRequest;
      /* End of service model forward declarations required in OmicsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteReadSetResult, OmicsError> BatchDeleteReadSetOutcome;
      typedef Aws::Utils::Outcome<CancelAnnotationImportJobResult, OmicsError> CancelAnnotationImportJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> CancelRunOutcome;
      typedef Aws::Utils::Outcome<CancelVariantImportJobResult, OmicsError> CancelVariantImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateAnnotationStoreResult, OmicsError> CreateAnnotationStoreOutcome;
      typedef Aws::Utils::Outcome<CreateReferenceStoreResult, OmicsError> CreateReferenceStoreOutcome;
      typedef Aws::Utils::Outcome<CreateRunGroupResult, OmicsError> CreateRunGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSequenceStoreResult, OmicsError> CreateSequenceStoreOutcome;
      typedef Aws::Utils::Outcome<CreateVariantStoreResult, OmicsError> CreateVariantStoreOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowResult, OmicsError> CreateWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteAnnotationStoreResult, OmicsError> DeleteAnnotationStoreOutcome;
      typedef Aws::Utils::Outcome<DeleteReferenceResult, OmicsError> DeleteReferenceOutcome;
      typedef Aws::Utils::Outcome<DeleteReferenceStoreResult, OmicsError> DeleteReferenceStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> DeleteRunOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> DeleteRunGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSequenceStoreResult, OmicsError> DeleteSequenceStoreOutcome;
      typedef Aws::Utils::Outcome<DeleteVariantStoreResult, OmicsError> DeleteVariantStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetAnnotationImportJobResult, OmicsError> GetAnnotationImportJobOutcome;
      typedef Aws::Utils::Outcome<GetAnnotationStoreResult, OmicsError> GetAnnotationStoreOutcome;
      typedef Aws::Utils::Outcome<GetReadSetResult, OmicsError> GetReadSetOutcome;
      typedef Aws::Utils::Outcome<GetReadSetActivationJobResult, OmicsError> GetReadSetActivationJobOutcome;
      typedef Aws::Utils::Outcome<GetReadSetExportJobResult, OmicsError> GetReadSetExportJobOutcome;
      typedef Aws::Utils::Outcome<GetReadSetImportJobResult, OmicsError> GetReadSetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetReadSetMetadataResult, OmicsError> GetReadSetMetadataOutcome;
      typedef Aws::Utils::Outcome<GetReferenceResult, OmicsError> GetReferenceOutcome;
      typedef Aws::Utils::Outcome<GetReferenceImportJobResult, OmicsError> GetReferenceImportJobOutcome;
      typedef Aws::Utils::Outcome<GetReferenceMetadataResult, OmicsError> GetReferenceMetadataOutcome;
      typedef Aws::Utils::Outcome<GetReferenceStoreResult, OmicsError> GetReferenceStoreOutcome;
      typedef Aws::Utils::Outcome<GetRunResult, OmicsError> GetRunOutcome;
      typedef Aws::Utils::Outcome<GetRunGroupResult, OmicsError> GetRunGroupOutcome;
      typedef Aws::Utils::Outcome<GetRunTaskResult, OmicsError> GetRunTaskOutcome;
      typedef Aws::Utils::Outcome<GetSequenceStoreResult, OmicsError> GetSequenceStoreOutcome;
      typedef Aws::Utils::Outcome<GetVariantImportJobResult, OmicsError> GetVariantImportJobOutcome;
      typedef Aws::Utils::Outcome<GetVariantStoreResult, OmicsError> GetVariantStoreOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, OmicsError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<ListAnnotationImportJobsResult, OmicsError> ListAnnotationImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListAnnotationStoresResult, OmicsError> ListAnnotationStoresOutcome;
      typedef Aws::Utils::Outcome<ListReadSetActivationJobsResult, OmicsError> ListReadSetActivationJobsOutcome;
      typedef Aws::Utils::Outcome<ListReadSetExportJobsResult, OmicsError> ListReadSetExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListReadSetImportJobsResult, OmicsError> ListReadSetImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListReadSetsResult, OmicsError> ListReadSetsOutcome;
      typedef Aws::Utils::Outcome<ListReferenceImportJobsResult, OmicsError> ListReferenceImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListReferenceStoresResult, OmicsError> ListReferenceStoresOutcome;
      typedef Aws::Utils::Outcome<ListReferencesResult, OmicsError> ListReferencesOutcome;
      typedef Aws::Utils::Outcome<ListRunGroupsResult, OmicsError> ListRunGroupsOutcome;
      typedef Aws::Utils::Outcome<ListRunTasksResult, OmicsError> ListRunTasksOutcome;
      typedef Aws::Utils::Outcome<ListRunsResult, OmicsError> ListRunsOutcome;
      typedef Aws::Utils::Outcome<ListSequenceStoresResult, OmicsError> ListSequenceStoresOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OmicsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVariantImportJobsResult, OmicsError> ListVariantImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListVariantStoresResult, OmicsError> ListVariantStoresOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, OmicsError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<StartAnnotationImportJobResult, OmicsError> StartAnnotationImportJobOutcome;
      typedef Aws::Utils::Outcome<StartReadSetActivationJobResult, OmicsError> StartReadSetActivationJobOutcome;
      typedef Aws::Utils::Outcome<StartReadSetExportJobResult, OmicsError> StartReadSetExportJobOutcome;
      typedef Aws::Utils::Outcome<StartReadSetImportJobResult, OmicsError> StartReadSetImportJobOutcome;
      typedef Aws::Utils::Outcome<StartReferenceImportJobResult, OmicsError> StartReferenceImportJobOutcome;
      typedef Aws::Utils::Outcome<StartRunResult, OmicsError> StartRunOutcome;
      typedef Aws::Utils::Outcome<StartVariantImportJobResult, OmicsError> StartVariantImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OmicsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OmicsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAnnotationStoreResult, OmicsError> UpdateAnnotationStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> UpdateRunGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateVariantStoreResult, OmicsError> UpdateVariantStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OmicsError> UpdateWorkflowOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteReadSetOutcome> BatchDeleteReadSetOutcomeCallable;
      typedef std::future<CancelAnnotationImportJobOutcome> CancelAnnotationImportJobOutcomeCallable;
      typedef std::future<CancelRunOutcome> CancelRunOutcomeCallable;
      typedef std::future<CancelVariantImportJobOutcome> CancelVariantImportJobOutcomeCallable;
      typedef std::future<CreateAnnotationStoreOutcome> CreateAnnotationStoreOutcomeCallable;
      typedef std::future<CreateReferenceStoreOutcome> CreateReferenceStoreOutcomeCallable;
      typedef std::future<CreateRunGroupOutcome> CreateRunGroupOutcomeCallable;
      typedef std::future<CreateSequenceStoreOutcome> CreateSequenceStoreOutcomeCallable;
      typedef std::future<CreateVariantStoreOutcome> CreateVariantStoreOutcomeCallable;
      typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
      typedef std::future<DeleteAnnotationStoreOutcome> DeleteAnnotationStoreOutcomeCallable;
      typedef std::future<DeleteReferenceOutcome> DeleteReferenceOutcomeCallable;
      typedef std::future<DeleteReferenceStoreOutcome> DeleteReferenceStoreOutcomeCallable;
      typedef std::future<DeleteRunOutcome> DeleteRunOutcomeCallable;
      typedef std::future<DeleteRunGroupOutcome> DeleteRunGroupOutcomeCallable;
      typedef std::future<DeleteSequenceStoreOutcome> DeleteSequenceStoreOutcomeCallable;
      typedef std::future<DeleteVariantStoreOutcome> DeleteVariantStoreOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<GetAnnotationImportJobOutcome> GetAnnotationImportJobOutcomeCallable;
      typedef std::future<GetAnnotationStoreOutcome> GetAnnotationStoreOutcomeCallable;
      typedef std::future<GetReadSetOutcome> GetReadSetOutcomeCallable;
      typedef std::future<GetReadSetActivationJobOutcome> GetReadSetActivationJobOutcomeCallable;
      typedef std::future<GetReadSetExportJobOutcome> GetReadSetExportJobOutcomeCallable;
      typedef std::future<GetReadSetImportJobOutcome> GetReadSetImportJobOutcomeCallable;
      typedef std::future<GetReadSetMetadataOutcome> GetReadSetMetadataOutcomeCallable;
      typedef std::future<GetReferenceOutcome> GetReferenceOutcomeCallable;
      typedef std::future<GetReferenceImportJobOutcome> GetReferenceImportJobOutcomeCallable;
      typedef std::future<GetReferenceMetadataOutcome> GetReferenceMetadataOutcomeCallable;
      typedef std::future<GetReferenceStoreOutcome> GetReferenceStoreOutcomeCallable;
      typedef std::future<GetRunOutcome> GetRunOutcomeCallable;
      typedef std::future<GetRunGroupOutcome> GetRunGroupOutcomeCallable;
      typedef std::future<GetRunTaskOutcome> GetRunTaskOutcomeCallable;
      typedef std::future<GetSequenceStoreOutcome> GetSequenceStoreOutcomeCallable;
      typedef std::future<GetVariantImportJobOutcome> GetVariantImportJobOutcomeCallable;
      typedef std::future<GetVariantStoreOutcome> GetVariantStoreOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<ListAnnotationImportJobsOutcome> ListAnnotationImportJobsOutcomeCallable;
      typedef std::future<ListAnnotationStoresOutcome> ListAnnotationStoresOutcomeCallable;
      typedef std::future<ListReadSetActivationJobsOutcome> ListReadSetActivationJobsOutcomeCallable;
      typedef std::future<ListReadSetExportJobsOutcome> ListReadSetExportJobsOutcomeCallable;
      typedef std::future<ListReadSetImportJobsOutcome> ListReadSetImportJobsOutcomeCallable;
      typedef std::future<ListReadSetsOutcome> ListReadSetsOutcomeCallable;
      typedef std::future<ListReferenceImportJobsOutcome> ListReferenceImportJobsOutcomeCallable;
      typedef std::future<ListReferenceStoresOutcome> ListReferenceStoresOutcomeCallable;
      typedef std::future<ListReferencesOutcome> ListReferencesOutcomeCallable;
      typedef std::future<ListRunGroupsOutcome> ListRunGroupsOutcomeCallable;
      typedef std::future<ListRunTasksOutcome> ListRunTasksOutcomeCallable;
      typedef std::future<ListRunsOutcome> ListRunsOutcomeCallable;
      typedef std::future<ListSequenceStoresOutcome> ListSequenceStoresOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVariantImportJobsOutcome> ListVariantImportJobsOutcomeCallable;
      typedef std::future<ListVariantStoresOutcome> ListVariantStoresOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<StartAnnotationImportJobOutcome> StartAnnotationImportJobOutcomeCallable;
      typedef std::future<StartReadSetActivationJobOutcome> StartReadSetActivationJobOutcomeCallable;
      typedef std::future<StartReadSetExportJobOutcome> StartReadSetExportJobOutcomeCallable;
      typedef std::future<StartReadSetImportJobOutcome> StartReadSetImportJobOutcomeCallable;
      typedef std::future<StartReferenceImportJobOutcome> StartReferenceImportJobOutcomeCallable;
      typedef std::future<StartRunOutcome> StartRunOutcomeCallable;
      typedef std::future<StartVariantImportJobOutcome> StartVariantImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAnnotationStoreOutcome> UpdateAnnotationStoreOutcomeCallable;
      typedef std::future<UpdateRunGroupOutcome> UpdateRunGroupOutcomeCallable;
      typedef std::future<UpdateVariantStoreOutcome> UpdateVariantStoreOutcomeCallable;
      typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OmicsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OmicsClient*, const Model::BatchDeleteReadSetRequest&, const Model::BatchDeleteReadSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteReadSetResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CancelAnnotationImportJobRequest&, const Model::CancelAnnotationImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelAnnotationImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CancelRunRequest&, const Model::CancelRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelRunResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CancelVariantImportJobRequest&, const Model::CancelVariantImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelVariantImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateAnnotationStoreRequest&, const Model::CreateAnnotationStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnnotationStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateReferenceStoreRequest&, const Model::CreateReferenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReferenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateRunGroupRequest&, const Model::CreateRunGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRunGroupResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateSequenceStoreRequest&, const Model::CreateSequenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSequenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateVariantStoreRequest&, const Model::CreateVariantStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVariantStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteAnnotationStoreRequest&, const Model::DeleteAnnotationStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnnotationStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteReferenceRequest&, const Model::DeleteReferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReferenceResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteReferenceStoreRequest&, const Model::DeleteReferenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReferenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteRunRequest&, const Model::DeleteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRunResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteRunGroupRequest&, const Model::DeleteRunGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRunGroupResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteSequenceStoreRequest&, const Model::DeleteSequenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSequenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteVariantStoreRequest&, const Model::DeleteVariantStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVariantStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetAnnotationImportJobRequest&, const Model::GetAnnotationImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnnotationImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetAnnotationStoreRequest&, const Model::GetAnnotationStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnnotationStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReadSetRequest&, Model::GetReadSetOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadSetResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReadSetActivationJobRequest&, const Model::GetReadSetActivationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadSetActivationJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReadSetExportJobRequest&, const Model::GetReadSetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadSetExportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReadSetImportJobRequest&, const Model::GetReadSetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadSetImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReadSetMetadataRequest&, const Model::GetReadSetMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReadSetMetadataResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReferenceRequest&, Model::GetReferenceOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReferenceResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReferenceImportJobRequest&, const Model::GetReferenceImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReferenceImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReferenceMetadataRequest&, const Model::GetReferenceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReferenceMetadataResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetReferenceStoreRequest&, const Model::GetReferenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReferenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetRunRequest&, const Model::GetRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRunResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetRunGroupRequest&, const Model::GetRunGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRunGroupResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetRunTaskRequest&, const Model::GetRunTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRunTaskResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetSequenceStoreRequest&, const Model::GetSequenceStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSequenceStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetVariantImportJobRequest&, const Model::GetVariantImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVariantImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetVariantStoreRequest&, const Model::GetVariantStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVariantStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListAnnotationImportJobsRequest&, const Model::ListAnnotationImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnnotationImportJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListAnnotationStoresRequest&, const Model::ListAnnotationStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnnotationStoresResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReadSetActivationJobsRequest&, const Model::ListReadSetActivationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadSetActivationJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReadSetExportJobsRequest&, const Model::ListReadSetExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadSetExportJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReadSetImportJobsRequest&, const Model::ListReadSetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadSetImportJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReadSetsRequest&, const Model::ListReadSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReadSetsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReferenceImportJobsRequest&, const Model::ListReferenceImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReferenceImportJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReferenceStoresRequest&, const Model::ListReferenceStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReferenceStoresResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListReferencesRequest&, const Model::ListReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReferencesResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListRunGroupsRequest&, const Model::ListRunGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunGroupsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListRunTasksRequest&, const Model::ListRunTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunTasksResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListRunsRequest&, const Model::ListRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListSequenceStoresRequest&, const Model::ListSequenceStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSequenceStoresResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListVariantImportJobsRequest&, const Model::ListVariantImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVariantImportJobsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListVariantStoresRequest&, const Model::ListVariantStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVariantStoresResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartAnnotationImportJobRequest&, const Model::StartAnnotationImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAnnotationImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartReadSetActivationJobRequest&, const Model::StartReadSetActivationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReadSetActivationJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartReadSetExportJobRequest&, const Model::StartReadSetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReadSetExportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartReadSetImportJobRequest&, const Model::StartReadSetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReadSetImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartReferenceImportJobRequest&, const Model::StartReferenceImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReferenceImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartRunRequest&, const Model::StartRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRunResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::StartVariantImportJobRequest&, const Model::StartVariantImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartVariantImportJobResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::UpdateAnnotationStoreRequest&, const Model::UpdateAnnotationStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnnotationStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::UpdateRunGroupRequest&, const Model::UpdateRunGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRunGroupResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::UpdateVariantStoreRequest&, const Model::UpdateVariantStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVariantStoreResponseReceivedHandler;
    typedef std::function<void(const OmicsClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Omics
} // namespace Aws
