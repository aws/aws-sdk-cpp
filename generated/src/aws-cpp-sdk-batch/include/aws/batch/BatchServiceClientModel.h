/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/batch/BatchErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/batch/BatchEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BatchClient header */
#include <aws/batch/model/CancelJobResult.h>
#include <aws/batch/model/CreateComputeEnvironmentResult.h>
#include <aws/batch/model/CreateConsumableResourceResult.h>
#include <aws/batch/model/CreateJobQueueResult.h>
#include <aws/batch/model/CreateSchedulingPolicyResult.h>
#include <aws/batch/model/CreateServiceEnvironmentResult.h>
#include <aws/batch/model/DeleteComputeEnvironmentResult.h>
#include <aws/batch/model/DeleteConsumableResourceResult.h>
#include <aws/batch/model/DeleteJobQueueResult.h>
#include <aws/batch/model/DeleteSchedulingPolicyResult.h>
#include <aws/batch/model/DeleteServiceEnvironmentResult.h>
#include <aws/batch/model/DeregisterJobDefinitionResult.h>
#include <aws/batch/model/DescribeComputeEnvironmentsResult.h>
#include <aws/batch/model/DescribeConsumableResourceResult.h>
#include <aws/batch/model/DescribeJobDefinitionsResult.h>
#include <aws/batch/model/DescribeJobQueuesResult.h>
#include <aws/batch/model/DescribeJobsResult.h>
#include <aws/batch/model/DescribeSchedulingPoliciesResult.h>
#include <aws/batch/model/DescribeServiceEnvironmentsResult.h>
#include <aws/batch/model/DescribeServiceJobResult.h>
#include <aws/batch/model/GetJobQueueSnapshotResult.h>
#include <aws/batch/model/ListConsumableResourcesResult.h>
#include <aws/batch/model/ListJobsResult.h>
#include <aws/batch/model/ListJobsByConsumableResourceResult.h>
#include <aws/batch/model/ListSchedulingPoliciesResult.h>
#include <aws/batch/model/ListServiceJobsResult.h>
#include <aws/batch/model/ListTagsForResourceResult.h>
#include <aws/batch/model/RegisterJobDefinitionResult.h>
#include <aws/batch/model/SubmitJobResult.h>
#include <aws/batch/model/SubmitServiceJobResult.h>
#include <aws/batch/model/TagResourceResult.h>
#include <aws/batch/model/TerminateJobResult.h>
#include <aws/batch/model/TerminateServiceJobResult.h>
#include <aws/batch/model/UntagResourceResult.h>
#include <aws/batch/model/UpdateComputeEnvironmentResult.h>
#include <aws/batch/model/UpdateConsumableResourceResult.h>
#include <aws/batch/model/UpdateJobQueueResult.h>
#include <aws/batch/model/UpdateSchedulingPolicyResult.h>
#include <aws/batch/model/UpdateServiceEnvironmentResult.h>
#include <aws/batch/model/ListSchedulingPoliciesRequest.h>
#include <aws/batch/model/DescribeServiceEnvironmentsRequest.h>
#include <aws/batch/model/DescribeJobQueuesRequest.h>
#include <aws/batch/model/ListServiceJobsRequest.h>
#include <aws/batch/model/ListConsumableResourcesRequest.h>
#include <aws/batch/model/DescribeJobDefinitionsRequest.h>
#include <aws/batch/model/DescribeComputeEnvironmentsRequest.h>
#include <aws/batch/model/ListJobsRequest.h>
/* End of service model headers required in BatchClient header */

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

  namespace Batch
  {
    using BatchClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BatchEndpointProviderBase = Aws::Batch::Endpoint::BatchEndpointProviderBase;
    using BatchEndpointProvider = Aws::Batch::Endpoint::BatchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BatchClient header */
      class CancelJobRequest;
      class CreateComputeEnvironmentRequest;
      class CreateConsumableResourceRequest;
      class CreateJobQueueRequest;
      class CreateSchedulingPolicyRequest;
      class CreateServiceEnvironmentRequest;
      class DeleteComputeEnvironmentRequest;
      class DeleteConsumableResourceRequest;
      class DeleteJobQueueRequest;
      class DeleteSchedulingPolicyRequest;
      class DeleteServiceEnvironmentRequest;
      class DeregisterJobDefinitionRequest;
      class DescribeComputeEnvironmentsRequest;
      class DescribeConsumableResourceRequest;
      class DescribeJobDefinitionsRequest;
      class DescribeJobQueuesRequest;
      class DescribeJobsRequest;
      class DescribeSchedulingPoliciesRequest;
      class DescribeServiceEnvironmentsRequest;
      class DescribeServiceJobRequest;
      class GetJobQueueSnapshotRequest;
      class ListConsumableResourcesRequest;
      class ListJobsRequest;
      class ListJobsByConsumableResourceRequest;
      class ListSchedulingPoliciesRequest;
      class ListServiceJobsRequest;
      class ListTagsForResourceRequest;
      class RegisterJobDefinitionRequest;
      class SubmitJobRequest;
      class SubmitServiceJobRequest;
      class TagResourceRequest;
      class TerminateJobRequest;
      class TerminateServiceJobRequest;
      class UntagResourceRequest;
      class UpdateComputeEnvironmentRequest;
      class UpdateConsumableResourceRequest;
      class UpdateJobQueueRequest;
      class UpdateSchedulingPolicyRequest;
      class UpdateServiceEnvironmentRequest;
      /* End of service model forward declarations required in BatchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobResult, BatchError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateComputeEnvironmentResult, BatchError> CreateComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateConsumableResourceResult, BatchError> CreateConsumableResourceOutcome;
      typedef Aws::Utils::Outcome<CreateJobQueueResult, BatchError> CreateJobQueueOutcome;
      typedef Aws::Utils::Outcome<CreateSchedulingPolicyResult, BatchError> CreateSchedulingPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateServiceEnvironmentResult, BatchError> CreateServiceEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteComputeEnvironmentResult, BatchError> DeleteComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteConsumableResourceResult, BatchError> DeleteConsumableResourceOutcome;
      typedef Aws::Utils::Outcome<DeleteJobQueueResult, BatchError> DeleteJobQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteSchedulingPolicyResult, BatchError> DeleteSchedulingPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceEnvironmentResult, BatchError> DeleteServiceEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeregisterJobDefinitionResult, BatchError> DeregisterJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeComputeEnvironmentsResult, BatchError> DescribeComputeEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeConsumableResourceResult, BatchError> DescribeConsumableResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeJobDefinitionsResult, BatchError> DescribeJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobQueuesResult, BatchError> DescribeJobQueuesOutcome;
      typedef Aws::Utils::Outcome<DescribeJobsResult, BatchError> DescribeJobsOutcome;
      typedef Aws::Utils::Outcome<DescribeSchedulingPoliciesResult, BatchError> DescribeSchedulingPoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceEnvironmentsResult, BatchError> DescribeServiceEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceJobResult, BatchError> DescribeServiceJobOutcome;
      typedef Aws::Utils::Outcome<GetJobQueueSnapshotResult, BatchError> GetJobQueueSnapshotOutcome;
      typedef Aws::Utils::Outcome<ListConsumableResourcesResult, BatchError> ListConsumableResourcesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, BatchError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListJobsByConsumableResourceResult, BatchError> ListJobsByConsumableResourceOutcome;
      typedef Aws::Utils::Outcome<ListSchedulingPoliciesResult, BatchError> ListSchedulingPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListServiceJobsResult, BatchError> ListServiceJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BatchError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterJobDefinitionResult, BatchError> RegisterJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<SubmitJobResult, BatchError> SubmitJobOutcome;
      typedef Aws::Utils::Outcome<SubmitServiceJobResult, BatchError> SubmitServiceJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BatchError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateJobResult, BatchError> TerminateJobOutcome;
      typedef Aws::Utils::Outcome<TerminateServiceJobResult, BatchError> TerminateServiceJobOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BatchError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateComputeEnvironmentResult, BatchError> UpdateComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateConsumableResourceResult, BatchError> UpdateConsumableResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateJobQueueResult, BatchError> UpdateJobQueueOutcome;
      typedef Aws::Utils::Outcome<UpdateSchedulingPolicyResult, BatchError> UpdateSchedulingPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceEnvironmentResult, BatchError> UpdateServiceEnvironmentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateComputeEnvironmentOutcome> CreateComputeEnvironmentOutcomeCallable;
      typedef std::future<CreateConsumableResourceOutcome> CreateConsumableResourceOutcomeCallable;
      typedef std::future<CreateJobQueueOutcome> CreateJobQueueOutcomeCallable;
      typedef std::future<CreateSchedulingPolicyOutcome> CreateSchedulingPolicyOutcomeCallable;
      typedef std::future<CreateServiceEnvironmentOutcome> CreateServiceEnvironmentOutcomeCallable;
      typedef std::future<DeleteComputeEnvironmentOutcome> DeleteComputeEnvironmentOutcomeCallable;
      typedef std::future<DeleteConsumableResourceOutcome> DeleteConsumableResourceOutcomeCallable;
      typedef std::future<DeleteJobQueueOutcome> DeleteJobQueueOutcomeCallable;
      typedef std::future<DeleteSchedulingPolicyOutcome> DeleteSchedulingPolicyOutcomeCallable;
      typedef std::future<DeleteServiceEnvironmentOutcome> DeleteServiceEnvironmentOutcomeCallable;
      typedef std::future<DeregisterJobDefinitionOutcome> DeregisterJobDefinitionOutcomeCallable;
      typedef std::future<DescribeComputeEnvironmentsOutcome> DescribeComputeEnvironmentsOutcomeCallable;
      typedef std::future<DescribeConsumableResourceOutcome> DescribeConsumableResourceOutcomeCallable;
      typedef std::future<DescribeJobDefinitionsOutcome> DescribeJobDefinitionsOutcomeCallable;
      typedef std::future<DescribeJobQueuesOutcome> DescribeJobQueuesOutcomeCallable;
      typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
      typedef std::future<DescribeSchedulingPoliciesOutcome> DescribeSchedulingPoliciesOutcomeCallable;
      typedef std::future<DescribeServiceEnvironmentsOutcome> DescribeServiceEnvironmentsOutcomeCallable;
      typedef std::future<DescribeServiceJobOutcome> DescribeServiceJobOutcomeCallable;
      typedef std::future<GetJobQueueSnapshotOutcome> GetJobQueueSnapshotOutcomeCallable;
      typedef std::future<ListConsumableResourcesOutcome> ListConsumableResourcesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListJobsByConsumableResourceOutcome> ListJobsByConsumableResourceOutcomeCallable;
      typedef std::future<ListSchedulingPoliciesOutcome> ListSchedulingPoliciesOutcomeCallable;
      typedef std::future<ListServiceJobsOutcome> ListServiceJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterJobDefinitionOutcome> RegisterJobDefinitionOutcomeCallable;
      typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
      typedef std::future<SubmitServiceJobOutcome> SubmitServiceJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
      typedef std::future<TerminateServiceJobOutcome> TerminateServiceJobOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateComputeEnvironmentOutcome> UpdateComputeEnvironmentOutcomeCallable;
      typedef std::future<UpdateConsumableResourceOutcome> UpdateConsumableResourceOutcomeCallable;
      typedef std::future<UpdateJobQueueOutcome> UpdateJobQueueOutcomeCallable;
      typedef std::future<UpdateSchedulingPolicyOutcome> UpdateSchedulingPolicyOutcomeCallable;
      typedef std::future<UpdateServiceEnvironmentOutcome> UpdateServiceEnvironmentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BatchClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BatchClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvironmentRequest&, const Model::CreateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateConsumableResourceRequest&, const Model::CreateConsumableResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConsumableResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateJobQueueRequest&, const Model::CreateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateSchedulingPolicyRequest&, const Model::CreateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateServiceEnvironmentRequest&, const Model::CreateServiceEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvironmentRequest&, const Model::DeleteComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteConsumableResourceRequest&, const Model::DeleteConsumableResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConsumableResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteJobQueueRequest&, const Model::DeleteJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteSchedulingPolicyRequest&, const Model::DeleteSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteServiceEnvironmentRequest&, const Model::DeleteServiceEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeregisterJobDefinitionRequest&, const Model::DeregisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvironmentsRequest&, const Model::DescribeComputeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComputeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeConsumableResourceRequest&, const Model::DescribeConsumableResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConsumableResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobDefinitionsRequest&, const Model::DescribeJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobQueuesRequest&, const Model::DescribeJobQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobQueuesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeSchedulingPoliciesRequest&, const Model::DescribeSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeServiceEnvironmentsRequest&, const Model::DescribeServiceEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeServiceJobRequest&, const Model::DescribeServiceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::GetJobQueueSnapshotRequest&, const Model::GetJobQueueSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobQueueSnapshotResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListConsumableResourcesRequest&, const Model::ListConsumableResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConsumableResourcesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListJobsByConsumableResourceRequest&, const Model::ListJobsByConsumableResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByConsumableResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListSchedulingPoliciesRequest&, const Model::ListSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListServiceJobsRequest&, const Model::ListServiceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::RegisterJobDefinitionRequest&, const Model::RegisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::SubmitJobRequest&, const Model::SubmitJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::SubmitServiceJobRequest&, const Model::SubmitServiceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitServiceJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, const Model::TerminateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TerminateServiceJobRequest&, const Model::TerminateServiceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateServiceJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateComputeEnvironmentRequest&, const Model::UpdateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateConsumableResourceRequest&, const Model::UpdateConsumableResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConsumableResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateJobQueueRequest&, const Model::UpdateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateSchedulingPolicyRequest&, const Model::UpdateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateServiceEnvironmentRequest&, const Model::UpdateServiceEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceEnvironmentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Batch
} // namespace Aws
