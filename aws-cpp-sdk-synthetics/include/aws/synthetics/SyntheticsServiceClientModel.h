/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/synthetics/SyntheticsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/synthetics/SyntheticsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SyntheticsClient header */
#include <aws/synthetics/model/AssociateResourceResult.h>
#include <aws/synthetics/model/CreateCanaryResult.h>
#include <aws/synthetics/model/CreateGroupResult.h>
#include <aws/synthetics/model/DeleteCanaryResult.h>
#include <aws/synthetics/model/DeleteGroupResult.h>
#include <aws/synthetics/model/DescribeCanariesResult.h>
#include <aws/synthetics/model/DescribeCanariesLastRunResult.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsResult.h>
#include <aws/synthetics/model/DisassociateResourceResult.h>
#include <aws/synthetics/model/GetCanaryResult.h>
#include <aws/synthetics/model/GetCanaryRunsResult.h>
#include <aws/synthetics/model/GetGroupResult.h>
#include <aws/synthetics/model/ListAssociatedGroupsResult.h>
#include <aws/synthetics/model/ListGroupResourcesResult.h>
#include <aws/synthetics/model/ListGroupsResult.h>
#include <aws/synthetics/model/ListTagsForResourceResult.h>
#include <aws/synthetics/model/StartCanaryResult.h>
#include <aws/synthetics/model/StopCanaryResult.h>
#include <aws/synthetics/model/TagResourceResult.h>
#include <aws/synthetics/model/UntagResourceResult.h>
#include <aws/synthetics/model/UpdateCanaryResult.h>
/* End of service model headers required in SyntheticsClient header */

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

  namespace Synthetics
  {
    using SyntheticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SyntheticsEndpointProviderBase = Aws::Synthetics::Endpoint::SyntheticsEndpointProviderBase;
    using SyntheticsEndpointProvider = Aws::Synthetics::Endpoint::SyntheticsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SyntheticsClient header */
      class AssociateResourceRequest;
      class CreateCanaryRequest;
      class CreateGroupRequest;
      class DeleteCanaryRequest;
      class DeleteGroupRequest;
      class DescribeCanariesRequest;
      class DescribeCanariesLastRunRequest;
      class DescribeRuntimeVersionsRequest;
      class DisassociateResourceRequest;
      class GetCanaryRequest;
      class GetCanaryRunsRequest;
      class GetGroupRequest;
      class ListAssociatedGroupsRequest;
      class ListGroupResourcesRequest;
      class ListGroupsRequest;
      class ListTagsForResourceRequest;
      class StartCanaryRequest;
      class StopCanaryRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCanaryRequest;
      /* End of service model forward declarations required in SyntheticsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateResourceResult, SyntheticsError> AssociateResourceOutcome;
      typedef Aws::Utils::Outcome<CreateCanaryResult, SyntheticsError> CreateCanaryOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, SyntheticsError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteCanaryResult, SyntheticsError> DeleteCanaryOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, SyntheticsError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeCanariesResult, SyntheticsError> DescribeCanariesOutcome;
      typedef Aws::Utils::Outcome<DescribeCanariesLastRunResult, SyntheticsError> DescribeCanariesLastRunOutcome;
      typedef Aws::Utils::Outcome<DescribeRuntimeVersionsResult, SyntheticsError> DescribeRuntimeVersionsOutcome;
      typedef Aws::Utils::Outcome<DisassociateResourceResult, SyntheticsError> DisassociateResourceOutcome;
      typedef Aws::Utils::Outcome<GetCanaryResult, SyntheticsError> GetCanaryOutcome;
      typedef Aws::Utils::Outcome<GetCanaryRunsResult, SyntheticsError> GetCanaryRunsOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, SyntheticsError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedGroupsResult, SyntheticsError> ListAssociatedGroupsOutcome;
      typedef Aws::Utils::Outcome<ListGroupResourcesResult, SyntheticsError> ListGroupResourcesOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, SyntheticsError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SyntheticsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartCanaryResult, SyntheticsError> StartCanaryOutcome;
      typedef Aws::Utils::Outcome<StopCanaryResult, SyntheticsError> StopCanaryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SyntheticsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SyntheticsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCanaryResult, SyntheticsError> UpdateCanaryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateResourceOutcome> AssociateResourceOutcomeCallable;
      typedef std::future<CreateCanaryOutcome> CreateCanaryOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<DeleteCanaryOutcome> DeleteCanaryOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DescribeCanariesOutcome> DescribeCanariesOutcomeCallable;
      typedef std::future<DescribeCanariesLastRunOutcome> DescribeCanariesLastRunOutcomeCallable;
      typedef std::future<DescribeRuntimeVersionsOutcome> DescribeRuntimeVersionsOutcomeCallable;
      typedef std::future<DisassociateResourceOutcome> DisassociateResourceOutcomeCallable;
      typedef std::future<GetCanaryOutcome> GetCanaryOutcomeCallable;
      typedef std::future<GetCanaryRunsOutcome> GetCanaryRunsOutcomeCallable;
      typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
      typedef std::future<ListAssociatedGroupsOutcome> ListAssociatedGroupsOutcomeCallable;
      typedef std::future<ListGroupResourcesOutcome> ListGroupResourcesOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartCanaryOutcome> StartCanaryOutcomeCallable;
      typedef std::future<StopCanaryOutcome> StopCanaryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCanaryOutcome> UpdateCanaryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SyntheticsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SyntheticsClient*, const Model::AssociateResourceRequest&, const Model::AssociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::CreateCanaryRequest&, const Model::CreateCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DeleteCanaryRequest&, const Model::DeleteCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeCanariesRequest&, const Model::DescribeCanariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCanariesResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeCanariesLastRunRequest&, const Model::DescribeCanariesLastRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCanariesLastRunResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DescribeRuntimeVersionsRequest&, const Model::DescribeRuntimeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRuntimeVersionsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::DisassociateResourceRequest&, const Model::DisassociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::GetCanaryRequest&, const Model::GetCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::GetCanaryRunsRequest&, const Model::GetCanaryRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCanaryRunsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::ListAssociatedGroupsRequest&, const Model::ListAssociatedGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedGroupsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::ListGroupResourcesRequest&, const Model::ListGroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupResourcesResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::StartCanaryRequest&, const Model::StartCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::StopCanaryRequest&, const Model::StopCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCanaryResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SyntheticsClient*, const Model::UpdateCanaryRequest&, const Model::UpdateCanaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCanaryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Synthetics
} // namespace Aws
