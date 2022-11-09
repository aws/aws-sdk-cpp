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
#include <aws/batch/model/CreateJobQueueResult.h>
#include <aws/batch/model/CreateSchedulingPolicyResult.h>
#include <aws/batch/model/DeleteComputeEnvironmentResult.h>
#include <aws/batch/model/DeleteJobQueueResult.h>
#include <aws/batch/model/DeleteSchedulingPolicyResult.h>
#include <aws/batch/model/DeregisterJobDefinitionResult.h>
#include <aws/batch/model/DescribeComputeEnvironmentsResult.h>
#include <aws/batch/model/DescribeJobDefinitionsResult.h>
#include <aws/batch/model/DescribeJobQueuesResult.h>
#include <aws/batch/model/DescribeJobsResult.h>
#include <aws/batch/model/DescribeSchedulingPoliciesResult.h>
#include <aws/batch/model/ListJobsResult.h>
#include <aws/batch/model/ListSchedulingPoliciesResult.h>
#include <aws/batch/model/ListTagsForResourceResult.h>
#include <aws/batch/model/RegisterJobDefinitionResult.h>
#include <aws/batch/model/SubmitJobResult.h>
#include <aws/batch/model/TagResourceResult.h>
#include <aws/batch/model/TerminateJobResult.h>
#include <aws/batch/model/UntagResourceResult.h>
#include <aws/batch/model/UpdateComputeEnvironmentResult.h>
#include <aws/batch/model/UpdateJobQueueResult.h>
#include <aws/batch/model/UpdateSchedulingPolicyResult.h>
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
    using BatchClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BatchEndpointProviderBase = Aws::Batch::Endpoint::BatchEndpointProviderBase;
    using BatchEndpointProvider = Aws::Batch::Endpoint::BatchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BatchClient header */
      class CancelJobRequest;
      class CreateComputeEnvironmentRequest;
      class CreateJobQueueRequest;
      class CreateSchedulingPolicyRequest;
      class DeleteComputeEnvironmentRequest;
      class DeleteJobQueueRequest;
      class DeleteSchedulingPolicyRequest;
      class DeregisterJobDefinitionRequest;
      class DescribeComputeEnvironmentsRequest;
      class DescribeJobDefinitionsRequest;
      class DescribeJobQueuesRequest;
      class DescribeJobsRequest;
      class DescribeSchedulingPoliciesRequest;
      class ListJobsRequest;
      class ListSchedulingPoliciesRequest;
      class ListTagsForResourceRequest;
      class RegisterJobDefinitionRequest;
      class SubmitJobRequest;
      class TagResourceRequest;
      class TerminateJobRequest;
      class UntagResourceRequest;
      class UpdateComputeEnvironmentRequest;
      class UpdateJobQueueRequest;
      class UpdateSchedulingPolicyRequest;
      /* End of service model forward declarations required in BatchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobResult, BatchError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateComputeEnvironmentResult, BatchError> CreateComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateJobQueueResult, BatchError> CreateJobQueueOutcome;
      typedef Aws::Utils::Outcome<CreateSchedulingPolicyResult, BatchError> CreateSchedulingPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteComputeEnvironmentResult, BatchError> DeleteComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteJobQueueResult, BatchError> DeleteJobQueueOutcome;
      typedef Aws::Utils::Outcome<DeleteSchedulingPolicyResult, BatchError> DeleteSchedulingPolicyOutcome;
      typedef Aws::Utils::Outcome<DeregisterJobDefinitionResult, BatchError> DeregisterJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeComputeEnvironmentsResult, BatchError> DescribeComputeEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobDefinitionsResult, BatchError> DescribeJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobQueuesResult, BatchError> DescribeJobQueuesOutcome;
      typedef Aws::Utils::Outcome<DescribeJobsResult, BatchError> DescribeJobsOutcome;
      typedef Aws::Utils::Outcome<DescribeSchedulingPoliciesResult, BatchError> DescribeSchedulingPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, BatchError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListSchedulingPoliciesResult, BatchError> ListSchedulingPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BatchError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterJobDefinitionResult, BatchError> RegisterJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<SubmitJobResult, BatchError> SubmitJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BatchError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateJobResult, BatchError> TerminateJobOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BatchError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateComputeEnvironmentResult, BatchError> UpdateComputeEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateJobQueueResult, BatchError> UpdateJobQueueOutcome;
      typedef Aws::Utils::Outcome<UpdateSchedulingPolicyResult, BatchError> UpdateSchedulingPolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateComputeEnvironmentOutcome> CreateComputeEnvironmentOutcomeCallable;
      typedef std::future<CreateJobQueueOutcome> CreateJobQueueOutcomeCallable;
      typedef std::future<CreateSchedulingPolicyOutcome> CreateSchedulingPolicyOutcomeCallable;
      typedef std::future<DeleteComputeEnvironmentOutcome> DeleteComputeEnvironmentOutcomeCallable;
      typedef std::future<DeleteJobQueueOutcome> DeleteJobQueueOutcomeCallable;
      typedef std::future<DeleteSchedulingPolicyOutcome> DeleteSchedulingPolicyOutcomeCallable;
      typedef std::future<DeregisterJobDefinitionOutcome> DeregisterJobDefinitionOutcomeCallable;
      typedef std::future<DescribeComputeEnvironmentsOutcome> DescribeComputeEnvironmentsOutcomeCallable;
      typedef std::future<DescribeJobDefinitionsOutcome> DescribeJobDefinitionsOutcomeCallable;
      typedef std::future<DescribeJobQueuesOutcome> DescribeJobQueuesOutcomeCallable;
      typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
      typedef std::future<DescribeSchedulingPoliciesOutcome> DescribeSchedulingPoliciesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListSchedulingPoliciesOutcome> ListSchedulingPoliciesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterJobDefinitionOutcome> RegisterJobDefinitionOutcomeCallable;
      typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateComputeEnvironmentOutcome> UpdateComputeEnvironmentOutcomeCallable;
      typedef std::future<UpdateJobQueueOutcome> UpdateJobQueueOutcomeCallable;
      typedef std::future<UpdateSchedulingPolicyOutcome> UpdateSchedulingPolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BatchClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BatchClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateComputeEnvironmentRequest&, const Model::CreateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateJobQueueRequest&, const Model::CreateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::CreateSchedulingPolicyRequest&, const Model::CreateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteComputeEnvironmentRequest&, const Model::DeleteComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteJobQueueRequest&, const Model::DeleteJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeleteSchedulingPolicyRequest&, const Model::DeleteSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchedulingPolicyResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DeregisterJobDefinitionRequest&, const Model::DeregisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeComputeEnvironmentsRequest&, const Model::DescribeComputeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComputeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobDefinitionsRequest&, const Model::DescribeJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobQueuesRequest&, const Model::DescribeJobQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobQueuesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::DescribeSchedulingPoliciesRequest&, const Model::DescribeSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListSchedulingPoliciesRequest&, const Model::ListSchedulingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchedulingPoliciesResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::RegisterJobDefinitionRequest&, const Model::RegisterJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::SubmitJobRequest&, const Model::SubmitJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::TerminateJobRequest&, const Model::TerminateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateJobResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateComputeEnvironmentRequest&, const Model::UpdateComputeEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComputeEnvironmentResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateJobQueueRequest&, const Model::UpdateJobQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobQueueResponseReceivedHandler;
    typedef std::function<void(const BatchClient*, const Model::UpdateSchedulingPolicyRequest&, const Model::UpdateSchedulingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchedulingPolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Batch
} // namespace Aws
