/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lookoutvision/LookoutforVisionErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lookoutvision/LookoutforVisionEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LookoutforVisionClient header */
#include <aws/lookoutvision/model/CreateDatasetResult.h>
#include <aws/lookoutvision/model/CreateModelResult.h>
#include <aws/lookoutvision/model/CreateProjectResult.h>
#include <aws/lookoutvision/model/DeleteDatasetResult.h>
#include <aws/lookoutvision/model/DeleteModelResult.h>
#include <aws/lookoutvision/model/DeleteProjectResult.h>
#include <aws/lookoutvision/model/DescribeDatasetResult.h>
#include <aws/lookoutvision/model/DescribeModelResult.h>
#include <aws/lookoutvision/model/DescribeModelPackagingJobResult.h>
#include <aws/lookoutvision/model/DescribeProjectResult.h>
#include <aws/lookoutvision/model/DetectAnomaliesResult.h>
#include <aws/lookoutvision/model/ListDatasetEntriesResult.h>
#include <aws/lookoutvision/model/ListModelPackagingJobsResult.h>
#include <aws/lookoutvision/model/ListModelsResult.h>
#include <aws/lookoutvision/model/ListProjectsResult.h>
#include <aws/lookoutvision/model/ListTagsForResourceResult.h>
#include <aws/lookoutvision/model/StartModelResult.h>
#include <aws/lookoutvision/model/StartModelPackagingJobResult.h>
#include <aws/lookoutvision/model/StopModelResult.h>
#include <aws/lookoutvision/model/TagResourceResult.h>
#include <aws/lookoutvision/model/UntagResourceResult.h>
#include <aws/lookoutvision/model/UpdateDatasetEntriesResult.h>
/* End of service model headers required in LookoutforVisionClient header */

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

  namespace LookoutforVision
  {
    using LookoutforVisionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LookoutforVisionEndpointProviderBase = Aws::LookoutforVision::Endpoint::LookoutforVisionEndpointProviderBase;
    using LookoutforVisionEndpointProvider = Aws::LookoutforVision::Endpoint::LookoutforVisionEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LookoutforVisionClient header */
      class CreateDatasetRequest;
      class CreateModelRequest;
      class CreateProjectRequest;
      class DeleteDatasetRequest;
      class DeleteModelRequest;
      class DeleteProjectRequest;
      class DescribeDatasetRequest;
      class DescribeModelRequest;
      class DescribeModelPackagingJobRequest;
      class DescribeProjectRequest;
      class DetectAnomaliesRequest;
      class ListDatasetEntriesRequest;
      class ListModelPackagingJobsRequest;
      class ListModelsRequest;
      class ListProjectsRequest;
      class ListTagsForResourceRequest;
      class StartModelRequest;
      class StartModelPackagingJobRequest;
      class StopModelRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDatasetEntriesRequest;
      /* End of service model forward declarations required in LookoutforVisionClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDatasetResult, LookoutforVisionError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, LookoutforVisionError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, LookoutforVisionError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteDatasetResult, LookoutforVisionError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<DeleteModelResult, LookoutforVisionError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, LookoutforVisionError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, LookoutforVisionError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeModelResult, LookoutforVisionError> DescribeModelOutcome;
      typedef Aws::Utils::Outcome<DescribeModelPackagingJobResult, LookoutforVisionError> DescribeModelPackagingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectResult, LookoutforVisionError> DescribeProjectOutcome;
      typedef Aws::Utils::Outcome<DetectAnomaliesResult, LookoutforVisionError> DetectAnomaliesOutcome;
      typedef Aws::Utils::Outcome<ListDatasetEntriesResult, LookoutforVisionError> ListDatasetEntriesOutcome;
      typedef Aws::Utils::Outcome<ListModelPackagingJobsResult, LookoutforVisionError> ListModelPackagingJobsOutcome;
      typedef Aws::Utils::Outcome<ListModelsResult, LookoutforVisionError> ListModelsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, LookoutforVisionError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutforVisionError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartModelResult, LookoutforVisionError> StartModelOutcome;
      typedef Aws::Utils::Outcome<StartModelPackagingJobResult, LookoutforVisionError> StartModelPackagingJobOutcome;
      typedef Aws::Utils::Outcome<StopModelResult, LookoutforVisionError> StopModelOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LookoutforVisionError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LookoutforVisionError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDatasetEntriesResult, LookoutforVisionError> UpdateDatasetEntriesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
      typedef std::future<DescribeModelPackagingJobOutcome> DescribeModelPackagingJobOutcomeCallable;
      typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
      typedef std::future<DetectAnomaliesOutcome> DetectAnomaliesOutcomeCallable;
      typedef std::future<ListDatasetEntriesOutcome> ListDatasetEntriesOutcomeCallable;
      typedef std::future<ListModelPackagingJobsOutcome> ListModelPackagingJobsOutcomeCallable;
      typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartModelOutcome> StartModelOutcomeCallable;
      typedef std::future<StartModelPackagingJobOutcome> StartModelPackagingJobOutcomeCallable;
      typedef std::future<StopModelOutcome> StopModelOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDatasetEntriesOutcome> UpdateDatasetEntriesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LookoutforVisionClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeModelPackagingJobRequest&, const Model::DescribeModelPackagingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelPackagingJobResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DetectAnomaliesRequest&, const Model::DetectAnomaliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectAnomaliesResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListDatasetEntriesRequest&, const Model::ListDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetEntriesResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListModelPackagingJobsRequest&, const Model::ListModelPackagingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelPackagingJobsResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::StartModelRequest&, const Model::StartModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::StartModelPackagingJobRequest&, const Model::StartModelPackagingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartModelPackagingJobResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::StopModelRequest&, const Model::StopModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::UpdateDatasetEntriesRequest&, const Model::UpdateDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetEntriesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LookoutforVision
} // namespace Aws
