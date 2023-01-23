/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloud9/Cloud9Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloud9/Cloud9EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Cloud9Client header */
#include <aws/cloud9/model/CreateEnvironmentEC2Result.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DeleteEnvironmentResult.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsResult.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusResult.h>
#include <aws/cloud9/model/DescribeEnvironmentsResult.h>
#include <aws/cloud9/model/ListEnvironmentsResult.h>
#include <aws/cloud9/model/ListTagsForResourceResult.h>
#include <aws/cloud9/model/TagResourceResult.h>
#include <aws/cloud9/model/UntagResourceResult.h>
#include <aws/cloud9/model/UpdateEnvironmentResult.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipResult.h>
/* End of service model headers required in Cloud9Client header */

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

  namespace Cloud9
  {
    using Cloud9ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Cloud9EndpointProviderBase = Aws::Cloud9::Endpoint::Cloud9EndpointProviderBase;
    using Cloud9EndpointProvider = Aws::Cloud9::Endpoint::Cloud9EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Cloud9Client header */
      class CreateEnvironmentEC2Request;
      class CreateEnvironmentMembershipRequest;
      class DeleteEnvironmentRequest;
      class DeleteEnvironmentMembershipRequest;
      class DescribeEnvironmentMembershipsRequest;
      class DescribeEnvironmentStatusRequest;
      class DescribeEnvironmentsRequest;
      class ListEnvironmentsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEnvironmentRequest;
      class UpdateEnvironmentMembershipRequest;
      /* End of service model forward declarations required in Cloud9Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEnvironmentEC2Result, Cloud9Error> CreateEnvironmentEC2Outcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentMembershipResult, Cloud9Error> CreateEnvironmentMembershipOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, Cloud9Error> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentMembershipResult, Cloud9Error> DeleteEnvironmentMembershipOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentMembershipsResult, Cloud9Error> DescribeEnvironmentMembershipsOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentStatusResult, Cloud9Error> DescribeEnvironmentStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentsResult, Cloud9Error> DescribeEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, Cloud9Error> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Cloud9Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Cloud9Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Cloud9Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, Cloud9Error> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentMembershipResult, Cloud9Error> UpdateEnvironmentMembershipOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEnvironmentEC2Outcome> CreateEnvironmentEC2OutcomeCallable;
      typedef std::future<CreateEnvironmentMembershipOutcome> CreateEnvironmentMembershipOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentMembershipOutcome> DeleteEnvironmentMembershipOutcomeCallable;
      typedef std::future<DescribeEnvironmentMembershipsOutcome> DescribeEnvironmentMembershipsOutcomeCallable;
      typedef std::future<DescribeEnvironmentStatusOutcome> DescribeEnvironmentStatusOutcomeCallable;
      typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateEnvironmentMembershipOutcome> UpdateEnvironmentMembershipOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Cloud9Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Cloud9Client*, const Model::CreateEnvironmentEC2Request&, const Model::CreateEnvironmentEC2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentEC2ResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::CreateEnvironmentMembershipRequest&, const Model::CreateEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentMembershipResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DeleteEnvironmentMembershipRequest&, const Model::DeleteEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentMembershipResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentMembershipsRequest&, const Model::DescribeEnvironmentMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentMembershipsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentStatusRequest&, const Model::DescribeEnvironmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentStatusResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::DescribeEnvironmentsRequest&, const Model::DescribeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const Cloud9Client*, const Model::UpdateEnvironmentMembershipRequest&, const Model::UpdateEnvironmentMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentMembershipResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Cloud9
} // namespace Aws
