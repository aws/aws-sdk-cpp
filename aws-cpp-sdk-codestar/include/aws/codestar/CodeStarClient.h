/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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

        typedef Aws::Utils::Outcome<AssociateTeamMemberResult, Aws::Client::AWSError<CodeStarErrors>> AssociateTeamMemberOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, Aws::Client::AWSError<CodeStarErrors>> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<CreateUserProfileResult, Aws::Client::AWSError<CodeStarErrors>> CreateUserProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, Aws::Client::AWSError<CodeStarErrors>> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteUserProfileResult, Aws::Client::AWSError<CodeStarErrors>> DeleteUserProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, Aws::Client::AWSError<CodeStarErrors>> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<DescribeUserProfileResult, Aws::Client::AWSError<CodeStarErrors>> DescribeUserProfileOutcome;
        typedef Aws::Utils::Outcome<DisassociateTeamMemberResult, Aws::Client::AWSError<CodeStarErrors>> DisassociateTeamMemberOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, Aws::Client::AWSError<CodeStarErrors>> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesResult, Aws::Client::AWSError<CodeStarErrors>> ListResourcesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForProjectResult, Aws::Client::AWSError<CodeStarErrors>> ListTagsForProjectOutcome;
        typedef Aws::Utils::Outcome<ListTeamMembersResult, Aws::Client::AWSError<CodeStarErrors>> ListTeamMembersOutcome;
        typedef Aws::Utils::Outcome<ListUserProfilesResult, Aws::Client::AWSError<CodeStarErrors>> ListUserProfilesOutcome;
        typedef Aws::Utils::Outcome<TagProjectResult, Aws::Client::AWSError<CodeStarErrors>> TagProjectOutcome;
        typedef Aws::Utils::Outcome<UntagProjectResult, Aws::Client::AWSError<CodeStarErrors>> UntagProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, Aws::Client::AWSError<CodeStarErrors>> UpdateProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateTeamMemberResult, Aws::Client::AWSError<CodeStarErrors>> UpdateTeamMemberOutcome;
        typedef Aws::Utils::Outcome<UpdateUserProfileResult, Aws::Client::AWSError<CodeStarErrors>> UpdateUserProfileOutcome;

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
} // namespace Model

  class CodeStarClient;

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

  /**
   * <fullname>AWS CodeStar</fullname> <p>This is the API reference for AWS CodeStar.
   * This reference provides descriptions of the operations and data types for the
   * AWS CodeStar API along with usage examples.</p> <p>You can use the AWS CodeStar
   * API to work with:</p> <p>Projects and their resources, by calling the
   * following:</p> <ul> <li> <p> <code>DeleteProject</code>, which deletes a
   * project.</p> </li> <li> <p> <code>DescribeProject</code>, which lists the
   * attributes of a project.</p> </li> <li> <p> <code>ListProjects</code>, which
   * lists all projects associated with your AWS account.</p> </li> <li> <p>
   * <code>ListResources</code>, which lists the resources associated with a
   * project.</p> </li> <li> <p> <code>ListTagsForProject</code>, which lists the
   * tags associated with a project.</p> </li> <li> <p> <code>TagProject</code>,
   * which adds tags to a project.</p> </li> <li> <p> <code>UntagProject</code>,
   * which removes tags from a project.</p> </li> <li> <p>
   * <code>UpdateProject</code>, which updates the attributes of a project.</p> </li>
   * </ul> <p>Teams and team members, by calling the following:</p> <ul> <li> <p>
   * <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
   * project.</p> </li> <li> <p> <code>DisassociateTeamMember</code>, which removes
   * an IAM user from the team for a project.</p> </li> <li> <p>
   * <code>ListTeamMembers</code>, which lists all the IAM users in the team for a
   * project, including their roles and attributes.</p> </li> <li> <p>
   * <code>UpdateTeamMember</code>, which updates a team member's attributes in a
   * project.</p> </li> </ul> <p>Users, by calling the following:</p> <ul> <li> <p>
   * <code>CreateUserProfile</code>, which creates a user profile that contains data
   * associated with the user across all projects.</p> </li> <li> <p>
   * <code>DeleteUserProfile</code>, which deletes all user profile information
   * across all projects.</p> </li> <li> <p> <code>DescribeUserProfile</code>, which
   * describes the profile of a user.</p> </li> <li> <p>
   * <code>ListUserProfiles</code>, which lists all user profiles.</p> </li> <li> <p>
   * <code>UpdateUserProfile</code>, which updates the profile for a user.</p> </li>
   * </ul>
   */
  class AWS_CODESTAR_API CodeStarClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeStarClient();

        inline virtual const char* GetServiceClientName() const override { return "CodeStar"; }


        /**
         * <p>Adds an IAM user to the team for an AWS CodeStar project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/AssociateTeamMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTeamMemberOutcome AssociateTeamMember(const Model::AssociateTeamMemberRequest& request) const;

        /**
         * <p>Adds an IAM user to the team for an AWS CodeStar project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/AssociateTeamMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTeamMemberOutcomeCallable AssociateTeamMemberCallable(const Model::AssociateTeamMemberRequest& request) const;

        /**
         * <p>Adds an IAM user to the team for an AWS CodeStar project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/AssociateTeamMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTeamMemberAsync(const Model::AssociateTeamMemberRequest& request, const AssociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project, including project resources. This action creates a project
         * based on a submitted project request. A set of source code files and a toolchain
         * template file can be included with the project request. If these are not
         * provided, an empty project is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project, including project resources. This action creates a project
         * based on a submitted project request. A set of source code files and a toolchain
         * template file can be included with the project request. If these are not
         * provided, an empty project is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project, including project resources. This action creates a project
         * based on a submitted project request. A set of source code files and a toolchain
         * template file can be included with the project request. If these are not
         * provided, an empty project is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a profile for a user that includes user preferences, such as the
         * display name and email address assocciated with the user, in AWS CodeStar. The
         * user profile is not project-specific. Information in the user profile is
         * displayed wherever the user's information appears to other users in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a profile for a user that includes user preferences, such as the
         * display name and email address assocciated with the user, in AWS CodeStar. The
         * user profile is not project-specific. Information in the user profile is
         * displayed wherever the user's information appears to other users in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a profile for a user that includes user preferences, such as the
         * display name and email address assocciated with the user, in AWS CodeStar. The
         * user profile is not project-specific. Information in the user profile is
         * displayed wherever the user's information appears to other users in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a project, including project resources. Does not delete users
         * associated with the project, but does delete the IAM roles that allowed access
         * to the project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project, including project resources. Does not delete users
         * associated with the project, but does delete the IAM roles that allowed access
         * to the project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project, including project resources. Does not delete users
         * associated with the project, but does delete the IAM roles that allowed access
         * to the project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user profile in AWS CodeStar, including all personal preference
         * data associated with that profile, such as display name and email address. It
         * does not delete the history of that user, for example the history of commits
         * made by that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile in AWS CodeStar, including all personal preference
         * data associated with that profile, such as display name and email address. It
         * does not delete the history of that user, for example the history of commits
         * made by that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile in AWS CodeStar, including all personal preference
         * data associated with that profile, such as display name and email address. It
         * does not delete the history of that user, for example the history of commits
         * made by that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a project and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Describes a project and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Describes a project and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a user in AWS CodeStar and the user attributes across all
         * projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfileOutcome DescribeUserProfile(const Model::DescribeUserProfileRequest& request) const;

        /**
         * <p>Describes a user in AWS CodeStar and the user attributes across all
         * projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfileOutcomeCallable DescribeUserProfileCallable(const Model::DescribeUserProfileRequest& request) const;

        /**
         * <p>Describes a user in AWS CodeStar and the user attributes across all
         * projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserProfileAsync(const Model::DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user from a project. Removing a user from a project also removes
         * the IAM policies from that user that allowed access to the project and its
         * resources. Disassociating a team member does not remove that user's profile from
         * AWS CodeStar. It does not remove the user from IAM.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DisassociateTeamMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTeamMemberOutcome DisassociateTeamMember(const Model::DisassociateTeamMemberRequest& request) const;

        /**
         * <p>Removes a user from a project. Removing a user from a project also removes
         * the IAM policies from that user that allowed access to the project and its
         * resources. Disassociating a team member does not remove that user's profile from
         * AWS CodeStar. It does not remove the user from IAM.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DisassociateTeamMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTeamMemberOutcomeCallable DisassociateTeamMemberCallable(const Model::DisassociateTeamMemberRequest& request) const;

        /**
         * <p>Removes a user from a project. Removing a user from a project also removes
         * the IAM policies from that user that allowed access to the project and its
         * resources. Disassociating a team member does not remove that user's profile from
         * AWS CodeStar. It does not remove the user from IAM.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DisassociateTeamMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTeamMemberAsync(const Model::DisassociateTeamMemberRequest& request, const DisassociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all projects in AWS CodeStar associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Lists all projects in AWS CodeStar associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Lists all projects in AWS CodeStar associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists resources associated with a project in AWS CodeStar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists resources associated with a project in AWS CodeStar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * <p>Lists resources associated with a project in AWS CodeStar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTagsForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForProjectOutcome ListTagsForProject(const Model::ListTagsForProjectRequest& request) const;

        /**
         * <p>Gets the tags for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTagsForProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForProjectOutcomeCallable ListTagsForProjectCallable(const Model::ListTagsForProjectRequest& request) const;

        /**
         * <p>Gets the tags for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTagsForProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForProjectAsync(const Model::ListTagsForProjectRequest& request, const ListTagsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all team members associated with a project.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTeamMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTeamMembersOutcome ListTeamMembers(const Model::ListTeamMembersRequest& request) const;

        /**
         * <p>Lists all team members associated with a project.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTeamMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTeamMembersOutcomeCallable ListTeamMembersCallable(const Model::ListTeamMembersRequest& request) const;

        /**
         * <p>Lists all team members associated with a project.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTeamMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTeamMembersAsync(const Model::ListTeamMembersRequest& request, const ListTeamMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the user profiles configured for your AWS account in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserProfilesOutcome ListUserProfiles(const Model::ListUserProfilesRequest& request) const;

        /**
         * <p>Lists all the user profiles configured for your AWS account in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListUserProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserProfilesOutcomeCallable ListUserProfilesCallable(const Model::ListUserProfilesRequest& request) const;

        /**
         * <p>Lists all the user profiles configured for your AWS account in AWS
         * CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListUserProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserProfilesAsync(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/TagProject">AWS
         * API Reference</a></p>
         */
        virtual Model::TagProjectOutcome TagProject(const Model::TagProjectRequest& request) const;

        /**
         * <p>Adds tags to a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/TagProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagProjectOutcomeCallable TagProjectCallable(const Model::TagProjectRequest& request) const;

        /**
         * <p>Adds tags to a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/TagProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagProjectAsync(const Model::TagProjectRequest& request, const TagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UntagProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagProjectOutcome UntagProject(const Model::UntagProjectRequest& request) const;

        /**
         * <p>Removes tags from a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UntagProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagProjectOutcomeCallable UntagProjectCallable(const Model::UntagProjectRequest& request) const;

        /**
         * <p>Removes tags from a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UntagProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagProjectAsync(const Model::UntagProjectRequest& request, const UntagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a project in AWS CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates a project in AWS CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates a project in AWS CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a team member's attributes in an AWS CodeStar project. For example,
         * you can change a team member's role in the project, or change whether they have
         * remote access to project resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateTeamMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTeamMemberOutcome UpdateTeamMember(const Model::UpdateTeamMemberRequest& request) const;

        /**
         * <p>Updates a team member's attributes in an AWS CodeStar project. For example,
         * you can change a team member's role in the project, or change whether they have
         * remote access to project resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateTeamMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTeamMemberOutcomeCallable UpdateTeamMemberCallable(const Model::UpdateTeamMemberRequest& request) const;

        /**
         * <p>Updates a team member's attributes in an AWS CodeStar project. For example,
         * you can change a team member's role in the project, or change whether they have
         * remote access to project resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateTeamMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTeamMemberAsync(const Model::UpdateTeamMemberRequest& request, const UpdateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user's profile in AWS CodeStar. The user profile is not
         * project-specific. Information in the user profile is displayed wherever the
         * user's information appears to other users in AWS CodeStar. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a user's profile in AWS CodeStar. The user profile is not
         * project-specific. Information in the user profile is displayed wherever the
         * user's information appears to other users in AWS CodeStar. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a user's profile in AWS CodeStar. The user profile is not
         * project-specific. Information in the user profile is displayed wherever the
         * user's information appears to other users in AWS CodeStar. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateTeamMemberAsyncHelper(const Model::AssociateTeamMemberRequest& request, const AssociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserProfileAsyncHelper(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserProfileAsyncHelper(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserProfileAsyncHelper(const Model::DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTeamMemberAsyncHelper(const Model::DisassociateTeamMemberRequest& request, const DisassociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesAsyncHelper(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForProjectAsyncHelper(const Model::ListTagsForProjectRequest& request, const ListTagsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTeamMembersAsyncHelper(const Model::ListTeamMembersRequest& request, const ListTeamMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserProfilesAsyncHelper(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagProjectAsyncHelper(const Model::TagProjectRequest& request, const TagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagProjectAsyncHelper(const Model::UntagProjectRequest& request, const UntagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTeamMemberAsyncHelper(const Model::UpdateTeamMemberRequest& request, const UpdateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserProfileAsyncHelper(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeStar
} // namespace Aws
