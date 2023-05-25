/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codestar/CodeStarErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codestar/CodeStarEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeStarClient header */
#include <aws/codestar/model/AssociateTeamMemberResult.h>
#include <aws/codestar/model/CreateProjectResult.h>
#include <aws/codestar/model/CreateUserProfileResult.h>
#include <aws/codestar/model/DeleteProjectResult.h>
#include <aws/codestar/model/DeleteUserProfileResult.h>
#include <aws/codestar/model/DescribeProjectResult.h>
#include <aws/codestar/model/DescribeUserProfileResult.h>
#include <aws/codestar/model/DisassociateTeamMemberResult.h>
#include <aws/codestar/model/ListProjectsResult.h>
#include <aws/codestar/model/ListResourcesResult.h>
#include <aws/codestar/model/ListTagsForProjectResult.h>
#include <aws/codestar/model/ListTeamMembersResult.h>
#include <aws/codestar/model/ListUserProfilesResult.h>
#include <aws/codestar/model/TagProjectResult.h>
#include <aws/codestar/model/UntagProjectResult.h>
#include <aws/codestar/model/UpdateProjectResult.h>
#include <aws/codestar/model/UpdateTeamMemberResult.h>
#include <aws/codestar/model/UpdateUserProfileResult.h>
/* End of service model headers required in CodeStarClient header */

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

  namespace CodeStar
  {
    using CodeStarClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeStarEndpointProviderBase = Aws::CodeStar::Endpoint::CodeStarEndpointProviderBase;
    using CodeStarEndpointProvider = Aws::CodeStar::Endpoint::CodeStarEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeStarClient header */
      class AssociateTeamMemberRequest;
      class CreateProjectRequest;
      class CreateUserProfileRequest;
      class DeleteProjectRequest;
      class DeleteUserProfileRequest;
      class DescribeProjectRequest;
      class DescribeUserProfileRequest;
      class DisassociateTeamMemberRequest;
      class ListProjectsRequest;
      class ListResourcesRequest;
      class ListTagsForProjectRequest;
      class ListTeamMembersRequest;
      class ListUserProfilesRequest;
      class TagProjectRequest;
      class UntagProjectRequest;
      class UpdateProjectRequest;
      class UpdateTeamMemberRequest;
      class UpdateUserProfileRequest;
      /* End of service model forward declarations required in CodeStarClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateTeamMemberResult, CodeStarError> AssociateTeamMemberOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, CodeStarError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateUserProfileResult, CodeStarError> CreateUserProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, CodeStarError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteUserProfileResult, CodeStarError> DeleteUserProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectResult, CodeStarError> DescribeProjectOutcome;
      typedef Aws::Utils::Outcome<DescribeUserProfileResult, CodeStarError> DescribeUserProfileOutcome;
      typedef Aws::Utils::Outcome<DisassociateTeamMemberResult, CodeStarError> DisassociateTeamMemberOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, CodeStarError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesResult, CodeStarError> ListResourcesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForProjectResult, CodeStarError> ListTagsForProjectOutcome;
      typedef Aws::Utils::Outcome<ListTeamMembersResult, CodeStarError> ListTeamMembersOutcome;
      typedef Aws::Utils::Outcome<ListUserProfilesResult, CodeStarError> ListUserProfilesOutcome;
      typedef Aws::Utils::Outcome<TagProjectResult, CodeStarError> TagProjectOutcome;
      typedef Aws::Utils::Outcome<UntagProjectResult, CodeStarError> UntagProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, CodeStarError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateTeamMemberResult, CodeStarError> UpdateTeamMemberOutcome;
      typedef Aws::Utils::Outcome<UpdateUserProfileResult, CodeStarError> UpdateUserProfileOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateTeamMemberOutcome> AssociateTeamMemberOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteUserProfileOutcome> DeleteUserProfileOutcomeCallable;
      typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
      typedef std::future<DescribeUserProfileOutcome> DescribeUserProfileOutcomeCallable;
      typedef std::future<DisassociateTeamMemberOutcome> DisassociateTeamMemberOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
      typedef std::future<ListTagsForProjectOutcome> ListTagsForProjectOutcomeCallable;
      typedef std::future<ListTeamMembersOutcome> ListTeamMembersOutcomeCallable;
      typedef std::future<ListUserProfilesOutcome> ListUserProfilesOutcomeCallable;
      typedef std::future<TagProjectOutcome> TagProjectOutcomeCallable;
      typedef std::future<UntagProjectOutcome> UntagProjectOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateTeamMemberOutcome> UpdateTeamMemberOutcomeCallable;
      typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeStarClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeStarClient*, const Model::AssociateTeamMemberRequest&, const Model::AssociateTeamMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTeamMemberResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserProfileResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::DescribeUserProfileRequest&, const Model::DescribeUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserProfileResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::DisassociateTeamMemberRequest&, const Model::DisassociateTeamMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTeamMemberResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::ListTagsForProjectRequest&, const Model::ListTagsForProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::ListTeamMembersRequest&, const Model::ListTeamMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTeamMembersResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::ListUserProfilesRequest&, const Model::ListUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserProfilesResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::TagProjectRequest&, const Model::TagProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::UntagProjectRequest&, const Model::UntagProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::UpdateTeamMemberRequest&, const Model::UpdateTeamMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTeamMemberResponseReceivedHandler;
    typedef std::function<void(const CodeStarClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeStar
} // namespace Aws
