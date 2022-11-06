/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/emr-containers/EMRContainersErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EMRContainersClient header */
#include <aws/emr-containers/model/CancelJobRunResult.h>
#include <aws/emr-containers/model/CreateJobTemplateResult.h>
#include <aws/emr-containers/model/CreateManagedEndpointResult.h>
#include <aws/emr-containers/model/CreateVirtualClusterResult.h>
#include <aws/emr-containers/model/DeleteJobTemplateResult.h>
#include <aws/emr-containers/model/DeleteManagedEndpointResult.h>
#include <aws/emr-containers/model/DeleteVirtualClusterResult.h>
#include <aws/emr-containers/model/DescribeJobRunResult.h>
#include <aws/emr-containers/model/DescribeJobTemplateResult.h>
#include <aws/emr-containers/model/DescribeManagedEndpointResult.h>
#include <aws/emr-containers/model/DescribeVirtualClusterResult.h>
#include <aws/emr-containers/model/ListJobRunsResult.h>
#include <aws/emr-containers/model/ListJobTemplatesResult.h>
#include <aws/emr-containers/model/ListManagedEndpointsResult.h>
#include <aws/emr-containers/model/ListTagsForResourceResult.h>
#include <aws/emr-containers/model/ListVirtualClustersResult.h>
#include <aws/emr-containers/model/StartJobRunResult.h>
#include <aws/emr-containers/model/TagResourceResult.h>
#include <aws/emr-containers/model/UntagResourceResult.h>
/* End of service model headers required in EMRContainersClient header */

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

  namespace EMRContainers
  {
    using EMRContainersClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EMRContainersEndpointProviderBase = Aws::EMRContainers::Endpoint::EMRContainersEndpointProviderBase;
    using EMRContainersEndpointProvider = Aws::EMRContainers::Endpoint::EMRContainersEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EMRContainersClient header */
      class CancelJobRunRequest;
      class CreateJobTemplateRequest;
      class CreateManagedEndpointRequest;
      class CreateVirtualClusterRequest;
      class DeleteJobTemplateRequest;
      class DeleteManagedEndpointRequest;
      class DeleteVirtualClusterRequest;
      class DescribeJobRunRequest;
      class DescribeJobTemplateRequest;
      class DescribeManagedEndpointRequest;
      class DescribeVirtualClusterRequest;
      class ListJobRunsRequest;
      class ListJobTemplatesRequest;
      class ListManagedEndpointsRequest;
      class ListTagsForResourceRequest;
      class ListVirtualClustersRequest;
      class StartJobRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in EMRContainersClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobRunResult, EMRContainersError> CancelJobRunOutcome;
      typedef Aws::Utils::Outcome<CreateJobTemplateResult, EMRContainersError> CreateJobTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateManagedEndpointResult, EMRContainersError> CreateManagedEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateVirtualClusterResult, EMRContainersError> CreateVirtualClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteJobTemplateResult, EMRContainersError> DeleteJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteManagedEndpointResult, EMRContainersError> DeleteManagedEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteVirtualClusterResult, EMRContainersError> DeleteVirtualClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeJobRunResult, EMRContainersError> DescribeJobRunOutcome;
      typedef Aws::Utils::Outcome<DescribeJobTemplateResult, EMRContainersError> DescribeJobTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeManagedEndpointResult, EMRContainersError> DescribeManagedEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeVirtualClusterResult, EMRContainersError> DescribeVirtualClusterOutcome;
      typedef Aws::Utils::Outcome<ListJobRunsResult, EMRContainersError> ListJobRunsOutcome;
      typedef Aws::Utils::Outcome<ListJobTemplatesResult, EMRContainersError> ListJobTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListManagedEndpointsResult, EMRContainersError> ListManagedEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EMRContainersError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVirtualClustersResult, EMRContainersError> ListVirtualClustersOutcome;
      typedef Aws::Utils::Outcome<StartJobRunResult, EMRContainersError> StartJobRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EMRContainersError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EMRContainersError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobRunOutcome> CancelJobRunOutcomeCallable;
      typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
      typedef std::future<CreateManagedEndpointOutcome> CreateManagedEndpointOutcomeCallable;
      typedef std::future<CreateVirtualClusterOutcome> CreateVirtualClusterOutcomeCallable;
      typedef std::future<DeleteJobTemplateOutcome> DeleteJobTemplateOutcomeCallable;
      typedef std::future<DeleteManagedEndpointOutcome> DeleteManagedEndpointOutcomeCallable;
      typedef std::future<DeleteVirtualClusterOutcome> DeleteVirtualClusterOutcomeCallable;
      typedef std::future<DescribeJobRunOutcome> DescribeJobRunOutcomeCallable;
      typedef std::future<DescribeJobTemplateOutcome> DescribeJobTemplateOutcomeCallable;
      typedef std::future<DescribeManagedEndpointOutcome> DescribeManagedEndpointOutcomeCallable;
      typedef std::future<DescribeVirtualClusterOutcome> DescribeVirtualClusterOutcomeCallable;
      typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
      typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
      typedef std::future<ListManagedEndpointsOutcome> ListManagedEndpointsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVirtualClustersOutcome> ListVirtualClustersOutcomeCallable;
      typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EMRContainersClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EMRContainersClient*, const Model::CancelJobRunRequest&, const Model::CancelJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::CreateJobTemplateRequest&, const Model::CreateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::CreateManagedEndpointRequest&, const Model::CreateManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::CreateVirtualClusterRequest&, const Model::CreateVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DeleteJobTemplateRequest&, const Model::DeleteJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTemplateResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DeleteManagedEndpointRequest&, const Model::DeleteManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DeleteVirtualClusterRequest&, const Model::DeleteVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeJobRunRequest&, const Model::DescribeJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeJobTemplateRequest&, const Model::DescribeJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobTemplateResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeManagedEndpointRequest&, const Model::DescribeManagedEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedEndpointResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::DescribeVirtualClusterRequest&, const Model::DescribeVirtualClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualClusterResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListJobTemplatesRequest&, const Model::ListJobTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobTemplatesResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListManagedEndpointsRequest&, const Model::ListManagedEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedEndpointsResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::ListVirtualClustersRequest&, const Model::ListVirtualClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualClustersResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRContainersClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EMRContainers
} // namespace Aws
