/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codestar/CodeStarServiceClientModel.h>

namespace Aws
{
namespace CodeStar
{
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
  class AWS_CODESTAR_API CodeStarClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeStarClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::CodeStar::CodeStarClientConfiguration& clientConfiguration = Aws::CodeStar::CodeStarClientConfiguration(),
                       std::shared_ptr<CodeStarEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<CodeStarEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarEndpointProvider>(ALLOCATION_TAG),
                       const Aws::CodeStar::CodeStarClientConfiguration& clientConfiguration = Aws::CodeStar::CodeStarClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<CodeStarEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarEndpointProvider>(ALLOCATION_TAG),
                       const Aws::CodeStar::CodeStarClientConfiguration& clientConfiguration = Aws::CodeStar::CodeStarClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeStarClient();

        /**
         * <p>Adds an IAM user to the team for an AWS CodeStar project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/AssociateTeamMember">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTeamMemberOutcome AssociateTeamMember(const Model::AssociateTeamMemberRequest& request) const;

        /**
         * A Callable wrapper for AssociateTeamMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTeamMemberOutcomeCallable AssociateTeamMemberCallable(const Model::AssociateTeamMemberRequest& request) const;

        /**
         * An Async wrapper for AssociateTeamMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * An Async wrapper for CreateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a project and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfileOutcomeCallable DescribeUserProfileCallable(const Model::DescribeUserProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateTeamMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTeamMemberOutcomeCallable DisassociateTeamMemberCallable(const Model::DisassociateTeamMemberRequest& request) const;

        /**
         * An Async wrapper for DisassociateTeamMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ListTagsForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForProjectOutcome ListTagsForProject(const Model::ListTagsForProjectRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForProjectOutcomeCallable ListTagsForProjectCallable(const Model::ListTagsForProjectRequest& request) const;

        /**
         * An Async wrapper for ListTagsForProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTeamMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTeamMembersOutcomeCallable ListTeamMembersCallable(const Model::ListTeamMembersRequest& request) const;

        /**
         * An Async wrapper for ListTeamMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListUserProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserProfilesOutcomeCallable ListUserProfilesCallable(const Model::ListUserProfilesRequest& request) const;

        /**
         * An Async wrapper for ListUserProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserProfilesAsync(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/TagProject">AWS
         * API Reference</a></p>
         */
        virtual Model::TagProjectOutcome TagProject(const Model::TagProjectRequest& request) const;

        /**
         * A Callable wrapper for TagProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagProjectOutcomeCallable TagProjectCallable(const Model::TagProjectRequest& request) const;

        /**
         * An Async wrapper for TagProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagProjectAsync(const Model::TagProjectRequest& request, const TagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UntagProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagProjectOutcome UntagProject(const Model::UntagProjectRequest& request) const;

        /**
         * A Callable wrapper for UntagProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagProjectOutcomeCallable UntagProjectCallable(const Model::UntagProjectRequest& request) const;

        /**
         * An Async wrapper for UntagProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagProjectAsync(const Model::UntagProjectRequest& request, const UntagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a project in AWS CodeStar.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateTeamMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTeamMemberOutcomeCallable UpdateTeamMemberCallable(const Model::UpdateTeamMemberRequest& request) const;

        /**
         * An Async wrapper for UpdateTeamMember that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeStarEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeStarClient>;
      void init(const CodeStarClientConfiguration& clientConfiguration);

      CodeStarClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeStarEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeStar
} // namespace Aws
