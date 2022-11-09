/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/m2/MainframeModernizationErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/m2/MainframeModernizationEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MainframeModernizationClient header */
#include <aws/m2/model/CancelBatchJobExecutionResult.h>
#include <aws/m2/model/CreateApplicationResult.h>
#include <aws/m2/model/CreateDataSetImportTaskResult.h>
#include <aws/m2/model/CreateDeploymentResult.h>
#include <aws/m2/model/CreateEnvironmentResult.h>
#include <aws/m2/model/DeleteApplicationResult.h>
#include <aws/m2/model/DeleteApplicationFromEnvironmentResult.h>
#include <aws/m2/model/DeleteEnvironmentResult.h>
#include <aws/m2/model/GetApplicationResult.h>
#include <aws/m2/model/GetApplicationVersionResult.h>
#include <aws/m2/model/GetBatchJobExecutionResult.h>
#include <aws/m2/model/GetDataSetDetailsResult.h>
#include <aws/m2/model/GetDataSetImportTaskResult.h>
#include <aws/m2/model/GetDeploymentResult.h>
#include <aws/m2/model/GetEnvironmentResult.h>
#include <aws/m2/model/ListApplicationVersionsResult.h>
#include <aws/m2/model/ListApplicationsResult.h>
#include <aws/m2/model/ListBatchJobDefinitionsResult.h>
#include <aws/m2/model/ListBatchJobExecutionsResult.h>
#include <aws/m2/model/ListDataSetImportHistoryResult.h>
#include <aws/m2/model/ListDataSetsResult.h>
#include <aws/m2/model/ListDeploymentsResult.h>
#include <aws/m2/model/ListEngineVersionsResult.h>
#include <aws/m2/model/ListEnvironmentsResult.h>
#include <aws/m2/model/ListTagsForResourceResult.h>
#include <aws/m2/model/StartApplicationResult.h>
#include <aws/m2/model/StartBatchJobResult.h>
#include <aws/m2/model/StopApplicationResult.h>
#include <aws/m2/model/TagResourceResult.h>
#include <aws/m2/model/UntagResourceResult.h>
#include <aws/m2/model/UpdateApplicationResult.h>
#include <aws/m2/model/UpdateEnvironmentResult.h>
/* End of service model headers required in MainframeModernizationClient header */

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

  namespace MainframeModernization
  {
    using MainframeModernizationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MainframeModernizationEndpointProviderBase = Aws::MainframeModernization::Endpoint::MainframeModernizationEndpointProviderBase;
    using MainframeModernizationEndpointProvider = Aws::MainframeModernization::Endpoint::MainframeModernizationEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MainframeModernizationClient header */
      class CancelBatchJobExecutionRequest;
      class CreateApplicationRequest;
      class CreateDataSetImportTaskRequest;
      class CreateDeploymentRequest;
      class CreateEnvironmentRequest;
      class DeleteApplicationRequest;
      class DeleteApplicationFromEnvironmentRequest;
      class DeleteEnvironmentRequest;
      class GetApplicationRequest;
      class GetApplicationVersionRequest;
      class GetBatchJobExecutionRequest;
      class GetDataSetDetailsRequest;
      class GetDataSetImportTaskRequest;
      class GetDeploymentRequest;
      class GetEnvironmentRequest;
      class ListApplicationVersionsRequest;
      class ListApplicationsRequest;
      class ListBatchJobDefinitionsRequest;
      class ListBatchJobExecutionsRequest;
      class ListDataSetImportHistoryRequest;
      class ListDataSetsRequest;
      class ListDeploymentsRequest;
      class ListEngineVersionsRequest;
      class ListEnvironmentsRequest;
      class ListTagsForResourceRequest;
      class StartApplicationRequest;
      class StartBatchJobRequest;
      class StopApplicationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateEnvironmentRequest;
      /* End of service model forward declarations required in MainframeModernizationClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelBatchJobExecutionResult, MainframeModernizationError> CancelBatchJobExecutionOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, MainframeModernizationError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateDataSetImportTaskResult, MainframeModernizationError> CreateDataSetImportTaskOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, MainframeModernizationError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, MainframeModernizationError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, MainframeModernizationError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationFromEnvironmentResult, MainframeModernizationError> DeleteApplicationFromEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, MainframeModernizationError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, MainframeModernizationError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationVersionResult, MainframeModernizationError> GetApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<GetBatchJobExecutionResult, MainframeModernizationError> GetBatchJobExecutionOutcome;
      typedef Aws::Utils::Outcome<GetDataSetDetailsResult, MainframeModernizationError> GetDataSetDetailsOutcome;
      typedef Aws::Utils::Outcome<GetDataSetImportTaskResult, MainframeModernizationError> GetDataSetImportTaskOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, MainframeModernizationError> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, MainframeModernizationError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<ListApplicationVersionsResult, MainframeModernizationError> ListApplicationVersionsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, MainframeModernizationError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListBatchJobDefinitionsResult, MainframeModernizationError> ListBatchJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListBatchJobExecutionsResult, MainframeModernizationError> ListBatchJobExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListDataSetImportHistoryResult, MainframeModernizationError> ListDataSetImportHistoryOutcome;
      typedef Aws::Utils::Outcome<ListDataSetsResult, MainframeModernizationError> ListDataSetsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, MainframeModernizationError> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListEngineVersionsResult, MainframeModernizationError> ListEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, MainframeModernizationError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MainframeModernizationError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartApplicationResult, MainframeModernizationError> StartApplicationOutcome;
      typedef Aws::Utils::Outcome<StartBatchJobResult, MainframeModernizationError> StartBatchJobOutcome;
      typedef Aws::Utils::Outcome<StopApplicationResult, MainframeModernizationError> StopApplicationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MainframeModernizationError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MainframeModernizationError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, MainframeModernizationError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, MainframeModernizationError> UpdateEnvironmentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelBatchJobExecutionOutcome> CancelBatchJobExecutionOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateDataSetImportTaskOutcome> CreateDataSetImportTaskOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationFromEnvironmentOutcome> DeleteApplicationFromEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetApplicationVersionOutcome> GetApplicationVersionOutcomeCallable;
      typedef std::future<GetBatchJobExecutionOutcome> GetBatchJobExecutionOutcomeCallable;
      typedef std::future<GetDataSetDetailsOutcome> GetDataSetDetailsOutcomeCallable;
      typedef std::future<GetDataSetImportTaskOutcome> GetDataSetImportTaskOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListBatchJobDefinitionsOutcome> ListBatchJobDefinitionsOutcomeCallable;
      typedef std::future<ListBatchJobExecutionsOutcome> ListBatchJobExecutionsOutcomeCallable;
      typedef std::future<ListDataSetImportHistoryOutcome> ListDataSetImportHistoryOutcomeCallable;
      typedef std::future<ListDataSetsOutcome> ListDataSetsOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListEngineVersionsOutcome> ListEngineVersionsOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
      typedef std::future<StartBatchJobOutcome> StartBatchJobOutcomeCallable;
      typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MainframeModernizationClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MainframeModernizationClient*, const Model::CancelBatchJobExecutionRequest&, const Model::CancelBatchJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBatchJobExecutionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateDataSetImportTaskRequest&, const Model::CreateDataSetImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSetImportTaskResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteApplicationFromEnvironmentRequest&, const Model::DeleteApplicationFromEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationFromEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetApplicationVersionRequest&, const Model::GetApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetBatchJobExecutionRequest&, const Model::GetBatchJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchJobExecutionResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDataSetDetailsRequest&, const Model::GetDataSetDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSetDetailsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDataSetImportTaskRequest&, const Model::GetDataSetImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSetImportTaskResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListBatchJobDefinitionsRequest&, const Model::ListBatchJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListBatchJobExecutionsRequest&, const Model::ListBatchJobExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchJobExecutionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDataSetImportHistoryRequest&, const Model::ListDataSetImportHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetImportHistoryResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDataSetsRequest&, const Model::ListDataSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSetsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListEngineVersionsRequest&, const Model::ListEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StartBatchJobRequest&, const Model::StartBatchJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBatchJobResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const MainframeModernizationClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MainframeModernization
} // namespace Aws
