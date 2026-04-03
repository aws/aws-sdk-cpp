/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in BedrockDataAutomationClient header */
#include <aws/bedrock-data-automation/model/CopyBlueprintStageResult.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionResult.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationLibraryResult.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintResult.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationLibraryResult.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/GetBlueprintOptimizationStatusResult.h>
#include <aws/bedrock-data-automation/model/GetBlueprintResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryEntityResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryIngestionJobResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/InvokeBlueprintOptimizationAsyncResult.h>
#include <aws/bedrock-data-automation/model/InvokeDataAutomationLibraryIngestionJobResult.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryEntitiesResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryIngestionJobsResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsResult.h>
#include <aws/bedrock-data-automation/model/ListTagsForResourceResult.h>
#include <aws/bedrock-data-automation/model/TagResourceResult.h>
#include <aws/bedrock-data-automation/model/UntagResourceResult.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationLibraryResult.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectResult.h>
/* End of service model headers required in BedrockDataAutomationClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace BedrockDataAutomation {
using BedrockDataAutomationEndpointProviderBase = Aws::BedrockDataAutomation::Endpoint::BedrockDataAutomationEndpointProviderBase;
using BedrockDataAutomationEndpointProvider = Aws::BedrockDataAutomation::Endpoint::BedrockDataAutomationEndpointProvider;

namespace Model {
/* Service model forward declarations required in BedrockDataAutomationClient header */
class CopyBlueprintStageRequest;
class CreateBlueprintRequest;
class CreateBlueprintVersionRequest;
class CreateDataAutomationLibraryRequest;
class CreateDataAutomationProjectRequest;
class DeleteBlueprintRequest;
class DeleteDataAutomationLibraryRequest;
class DeleteDataAutomationProjectRequest;
class GetBlueprintRequest;
class GetBlueprintOptimizationStatusRequest;
class GetDataAutomationLibraryRequest;
class GetDataAutomationLibraryEntityRequest;
class GetDataAutomationLibraryIngestionJobRequest;
class GetDataAutomationProjectRequest;
class InvokeBlueprintOptimizationAsyncRequest;
class InvokeDataAutomationLibraryIngestionJobRequest;
class ListBlueprintsRequest;
class ListDataAutomationLibrariesRequest;
class ListDataAutomationLibraryEntitiesRequest;
class ListDataAutomationLibraryIngestionJobsRequest;
class ListDataAutomationProjectsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateBlueprintRequest;
class UpdateDataAutomationLibraryRequest;
class UpdateDataAutomationProjectRequest;
/* End of service model forward declarations required in BedrockDataAutomationClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CopyBlueprintStageResult, BedrockDataAutomationError> CopyBlueprintStageOutcome;
typedef Aws::Utils::Outcome<CreateBlueprintResult, BedrockDataAutomationError> CreateBlueprintOutcome;
typedef Aws::Utils::Outcome<CreateBlueprintVersionResult, BedrockDataAutomationError> CreateBlueprintVersionOutcome;
typedef Aws::Utils::Outcome<CreateDataAutomationLibraryResult, BedrockDataAutomationError> CreateDataAutomationLibraryOutcome;
typedef Aws::Utils::Outcome<CreateDataAutomationProjectResult, BedrockDataAutomationError> CreateDataAutomationProjectOutcome;
typedef Aws::Utils::Outcome<DeleteBlueprintResult, BedrockDataAutomationError> DeleteBlueprintOutcome;
typedef Aws::Utils::Outcome<DeleteDataAutomationLibraryResult, BedrockDataAutomationError> DeleteDataAutomationLibraryOutcome;
typedef Aws::Utils::Outcome<DeleteDataAutomationProjectResult, BedrockDataAutomationError> DeleteDataAutomationProjectOutcome;
typedef Aws::Utils::Outcome<GetBlueprintResult, BedrockDataAutomationError> GetBlueprintOutcome;
typedef Aws::Utils::Outcome<GetBlueprintOptimizationStatusResult, BedrockDataAutomationError> GetBlueprintOptimizationStatusOutcome;
typedef Aws::Utils::Outcome<GetDataAutomationLibraryResult, BedrockDataAutomationError> GetDataAutomationLibraryOutcome;
typedef Aws::Utils::Outcome<GetDataAutomationLibraryEntityResult, BedrockDataAutomationError> GetDataAutomationLibraryEntityOutcome;
typedef Aws::Utils::Outcome<GetDataAutomationLibraryIngestionJobResult, BedrockDataAutomationError>
    GetDataAutomationLibraryIngestionJobOutcome;
typedef Aws::Utils::Outcome<GetDataAutomationProjectResult, BedrockDataAutomationError> GetDataAutomationProjectOutcome;
typedef Aws::Utils::Outcome<InvokeBlueprintOptimizationAsyncResult, BedrockDataAutomationError> InvokeBlueprintOptimizationAsyncOutcome;
typedef Aws::Utils::Outcome<InvokeDataAutomationLibraryIngestionJobResult, BedrockDataAutomationError>
    InvokeDataAutomationLibraryIngestionJobOutcome;
typedef Aws::Utils::Outcome<ListBlueprintsResult, BedrockDataAutomationError> ListBlueprintsOutcome;
typedef Aws::Utils::Outcome<ListDataAutomationLibrariesResult, BedrockDataAutomationError> ListDataAutomationLibrariesOutcome;
typedef Aws::Utils::Outcome<ListDataAutomationLibraryEntitiesResult, BedrockDataAutomationError> ListDataAutomationLibraryEntitiesOutcome;
typedef Aws::Utils::Outcome<ListDataAutomationLibraryIngestionJobsResult, BedrockDataAutomationError>
    ListDataAutomationLibraryIngestionJobsOutcome;
typedef Aws::Utils::Outcome<ListDataAutomationProjectsResult, BedrockDataAutomationError> ListDataAutomationProjectsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockDataAutomationError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, BedrockDataAutomationError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, BedrockDataAutomationError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateBlueprintResult, BedrockDataAutomationError> UpdateBlueprintOutcome;
typedef Aws::Utils::Outcome<UpdateDataAutomationLibraryResult, BedrockDataAutomationError> UpdateDataAutomationLibraryOutcome;
typedef Aws::Utils::Outcome<UpdateDataAutomationProjectResult, BedrockDataAutomationError> UpdateDataAutomationProjectOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CopyBlueprintStageOutcome> CopyBlueprintStageOutcomeCallable;
typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
typedef std::future<CreateBlueprintVersionOutcome> CreateBlueprintVersionOutcomeCallable;
typedef std::future<CreateDataAutomationLibraryOutcome> CreateDataAutomationLibraryOutcomeCallable;
typedef std::future<CreateDataAutomationProjectOutcome> CreateDataAutomationProjectOutcomeCallable;
typedef std::future<DeleteBlueprintOutcome> DeleteBlueprintOutcomeCallable;
typedef std::future<DeleteDataAutomationLibraryOutcome> DeleteDataAutomationLibraryOutcomeCallable;
typedef std::future<DeleteDataAutomationProjectOutcome> DeleteDataAutomationProjectOutcomeCallable;
typedef std::future<GetBlueprintOutcome> GetBlueprintOutcomeCallable;
typedef std::future<GetBlueprintOptimizationStatusOutcome> GetBlueprintOptimizationStatusOutcomeCallable;
typedef std::future<GetDataAutomationLibraryOutcome> GetDataAutomationLibraryOutcomeCallable;
typedef std::future<GetDataAutomationLibraryEntityOutcome> GetDataAutomationLibraryEntityOutcomeCallable;
typedef std::future<GetDataAutomationLibraryIngestionJobOutcome> GetDataAutomationLibraryIngestionJobOutcomeCallable;
typedef std::future<GetDataAutomationProjectOutcome> GetDataAutomationProjectOutcomeCallable;
typedef std::future<InvokeBlueprintOptimizationAsyncOutcome> InvokeBlueprintOptimizationAsyncOutcomeCallable;
typedef std::future<InvokeDataAutomationLibraryIngestionJobOutcome> InvokeDataAutomationLibraryIngestionJobOutcomeCallable;
typedef std::future<ListBlueprintsOutcome> ListBlueprintsOutcomeCallable;
typedef std::future<ListDataAutomationLibrariesOutcome> ListDataAutomationLibrariesOutcomeCallable;
typedef std::future<ListDataAutomationLibraryEntitiesOutcome> ListDataAutomationLibraryEntitiesOutcomeCallable;
typedef std::future<ListDataAutomationLibraryIngestionJobsOutcome> ListDataAutomationLibraryIngestionJobsOutcomeCallable;
typedef std::future<ListDataAutomationProjectsOutcome> ListDataAutomationProjectsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateBlueprintOutcome> UpdateBlueprintOutcomeCallable;
typedef std::future<UpdateDataAutomationLibraryOutcome> UpdateDataAutomationLibraryOutcomeCallable;
typedef std::future<UpdateDataAutomationProjectOutcome> UpdateDataAutomationProjectOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class BedrockDataAutomationClient;

/* Service model async handlers definitions */
typedef std::function<void(const BedrockDataAutomationClient*, const Model::CopyBlueprintStageRequest&,
                           const Model::CopyBlueprintStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CopyBlueprintStageResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateBlueprintRequest&, const Model::CreateBlueprintOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBlueprintResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateBlueprintVersionRequest&,
                           const Model::CreateBlueprintVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBlueprintVersionResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateDataAutomationLibraryRequest&,
                           const Model::CreateDataAutomationLibraryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDataAutomationLibraryResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateDataAutomationProjectRequest&,
                           const Model::CreateDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDataAutomationProjectResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::DeleteBlueprintRequest&, const Model::DeleteBlueprintOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBlueprintResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::DeleteDataAutomationLibraryRequest&,
                           const Model::DeleteDataAutomationLibraryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDataAutomationLibraryResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::DeleteDataAutomationProjectRequest&,
                           const Model::DeleteDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDataAutomationProjectResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetBlueprintRequest&, const Model::GetBlueprintOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBlueprintResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetBlueprintOptimizationStatusRequest&,
                           const Model::GetBlueprintOptimizationStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBlueprintOptimizationStatusResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetDataAutomationLibraryRequest&,
                           const Model::GetDataAutomationLibraryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataAutomationLibraryResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetDataAutomationLibraryEntityRequest&,
                           const Model::GetDataAutomationLibraryEntityOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataAutomationLibraryEntityResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetDataAutomationLibraryIngestionJobRequest&,
                           const Model::GetDataAutomationLibraryIngestionJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataAutomationLibraryIngestionJobResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetDataAutomationProjectRequest&,
                           const Model::GetDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataAutomationProjectResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::InvokeBlueprintOptimizationAsyncRequest&,
                           const Model::InvokeBlueprintOptimizationAsyncOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeBlueprintOptimizationAsyncResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::InvokeDataAutomationLibraryIngestionJobRequest&,
                           const Model::InvokeDataAutomationLibraryIngestionJobOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeDataAutomationLibraryIngestionJobResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListBlueprintsRequest&, const Model::ListBlueprintsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBlueprintsResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListDataAutomationLibrariesRequest&,
                           const Model::ListDataAutomationLibrariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataAutomationLibrariesResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListDataAutomationLibraryEntitiesRequest&,
                           const Model::ListDataAutomationLibraryEntitiesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataAutomationLibraryEntitiesResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListDataAutomationLibraryIngestionJobsRequest&,
                           const Model::ListDataAutomationLibraryIngestionJobsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataAutomationLibraryIngestionJobsResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListDataAutomationProjectsRequest&,
                           const Model::ListDataAutomationProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDataAutomationProjectsResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::UpdateBlueprintRequest&, const Model::UpdateBlueprintOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBlueprintResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::UpdateDataAutomationLibraryRequest&,
                           const Model::UpdateDataAutomationLibraryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDataAutomationLibraryResponseReceivedHandler;
typedef std::function<void(const BedrockDataAutomationClient*, const Model::UpdateDataAutomationProjectRequest&,
                           const Model::UpdateDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDataAutomationProjectResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace BedrockDataAutomation
}  // namespace Aws
