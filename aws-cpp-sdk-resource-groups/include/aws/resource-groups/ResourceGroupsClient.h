/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-groups/ResourceGroupsServiceClientModel.h>

namespace Aws
{
namespace ResourceGroups
{
  /**
   * <fullname>AWS Resource Groups</fullname> <p>AWS Resource Groups lets you
   * organize AWS resources such as Amazon EC2 instances, Amazon Relational Database
   * Service databases, and Amazon S3 buckets into groups using criteria that you
   * define as tags. A resource group is a collection of resources that match the
   * resource types specified in a query, and share one or more tags or portions of
   * tags. You can create a group of resources based on their roles in your cloud
   * infrastructure, lifecycle stages, regions, application layers, or virtually any
   * criteria. Resource Groups enable you to automate management tasks, such as those
   * in AWS Systems Manager Automation documents, on tag-related resources in AWS
   * Systems Manager. Groups of tagged resources also let you quickly view a custom
   * console in AWS Systems Manager that shows AWS Config compliance and other
   * monitoring data about member resources.</p> <p>To create a resource group, build
   * a resource query, and specify tags that identify the criteria that members of
   * the group have in common. Tags are key-value pairs.</p> <p>For more information
   * about Resource Groups, see the <a
   * href="https://docs.aws.amazon.com/ARG/latest/userguide/welcome.html">AWS
   * Resource Groups User Guide</a>.</p> <p>AWS Resource Groups uses a REST-compliant
   * API that you can use to perform the following types of operations.</p> <ul> <li>
   * <p>Create, Read, Update, and Delete (CRUD) operations on resource groups and
   * resource query entities</p> </li> <li> <p>Applying, editing, and removing tags
   * from resource groups</p> </li> <li> <p>Resolving resource group member ARNs so
   * they can be returned as search results</p> </li> <li> <p>Getting data about
   * resources that are members of a group</p> </li> <li> <p>Searching AWS resources
   * based on a resource query</p> </li> </ul>
   */
  class AWS_RESOURCEGROUPS_API ResourceGroupsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration(),
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ResourceGroupsEndpointProviderBase> endpointProvider = Aws::MakeShared<ResourceGroupsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ResourceGroups::ResourceGroupsClientConfiguration& clientConfiguration = Aws::ResourceGroups::ResourceGroupsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ResourceGroupsClient();

        /**
         * <p>Creates a resource group with the specified name and description. You can
         * optionally include a resource query, or a service configuration. For more
         * information about constructing a resource query, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
         * a tag-based group in Resource Groups</a>. For more information about service
         * configurations, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
         * configurations for resource groups</a>.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p> <code>resource-groups:CreateGroup</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource group. Deleting a resource group does not
         * delete any resources that are members of the group; it only deletes the group
         * structure.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:DeleteGroup</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specified resource group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:GetGroup</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the service configuration associated with the specified resource
         * group. For details about the service configuration syntax, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
         * configurations for resource groups</a>.</p> <p> <b>Minimum permissions</b> </p>
         * <p>To run this command, you must have the following permissions:</p> <ul> <li>
         * <p> <code>resource-groups:GetGroupConfiguration</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupConfigurationOutcome GetGroupConfiguration(const Model::GetGroupConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetGroupConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupConfigurationOutcomeCallable GetGroupConfigurationCallable(const Model::GetGroupConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetGroupConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupConfigurationAsync(const Model::GetGroupConfigurationRequest& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource query associated with the specified resource group.
         * For more information about resource queries, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
         * a tag-based group in Resource Groups</a>.</p> <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p> <code>resource-groups:GetGroupQuery</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupQueryOutcome GetGroupQuery(const Model::GetGroupQueryRequest& request) const;

        /**
         * A Callable wrapper for GetGroupQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupQueryOutcomeCallable GetGroupQueryCallable(const Model::GetGroupQueryRequest& request) const;

        /**
         * An Async wrapper for GetGroupQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupQueryAsync(const Model::GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are associated with a resource group, specified
         * by an ARN.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command, you
         * must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:GetTags</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified resources to the specified group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:GroupResources</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GroupResourcesOutcome GroupResources(const Model::GroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for GroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GroupResourcesOutcomeCallable GroupResourcesCallable(const Model::GroupResourcesRequest& request) const;

        /**
         * An Async wrapper for GroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GroupResourcesAsync(const Model::GroupResourcesRequest& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ARNs of the resources that are members of a specified
         * resource group.</p> <p> <b>Minimum permissions</b> </p> <p>To run this command,
         * you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:ListGroupResources</code> </p> </li> <li> <p>
         * <code>cloudformation:DescribeStacks</code> </p> </li> <li> <p>
         * <code>cloudformation:ListStackResources</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupResourcesOutcome ListGroupResources(const Model::ListGroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupResourcesOutcomeCallable ListGroupResourcesCallable(const Model::ListGroupResourcesRequest& request) const;

        /**
         * An Async wrapper for ListGroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupResourcesAsync(const Model::ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing resource groups in your account.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p> <code>resource-groups:ListGroups</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a service configuration to the specified group. This occurs
         * asynchronously, and can take time to complete. You can use
         * <a>GetGroupConfiguration</a> to check the status of the update.</p> <p>
         * <b>Minimum permissions</b> </p> <p>To run this command, you must have the
         * following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:PutGroupConfiguration</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/PutGroupConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGroupConfigurationOutcome PutGroupConfiguration(const Model::PutGroupConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutGroupConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutGroupConfigurationOutcomeCallable PutGroupConfigurationCallable(const Model::PutGroupConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutGroupConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutGroupConfigurationAsync(const Model::PutGroupConfigurationRequest& request, const PutGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches the specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p> <p> <b>Minimum permissions</b> </p> <p>To run
         * this command, you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:SearchResources</code> </p> </li> <li> <p>
         * <code>cloudformation:DescribeStacks</code> </p> </li> <li> <p>
         * <code>cloudformation:ListStackResources</code> </p> </li> <li> <p>
         * <code>tag:GetResources</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request) const;

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p>  <p>Do not store personally identifiable information
         * (PII) or other confidential or sensitive information in tags. We use tags to
         * provide you with billing and administration services. Tags are not intended to
         * be used for private or sensitive data.</p>  <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:Tag</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         */
        virtual Model::TagOutcome Tag(const Model::TagRequest& request) const;

        /**
         * A Callable wrapper for Tag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagOutcomeCallable TagCallable(const Model::TagRequest& request) const;

        /**
         * An Async wrapper for Tag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagAsync(const Model::TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified resources from the specified group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:UngroupResources</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UngroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UngroupResourcesOutcome UngroupResources(const Model::UngroupResourcesRequest& request) const;

        /**
         * A Callable wrapper for UngroupResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UngroupResourcesOutcomeCallable UngroupResourcesCallable(const Model::UngroupResourcesRequest& request) const;

        /**
         * An Async wrapper for UngroupResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UngroupResourcesAsync(const Model::UngroupResourcesRequest& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from a specified resource group.</p> <p> <b>Minimum
         * permissions</b> </p> <p>To run this command, you must have the following
         * permissions:</p> <ul> <li> <p> <code>resource-groups:Untag</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagOutcome Untag(const Model::UntagRequest& request) const;

        /**
         * A Callable wrapper for Untag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagOutcomeCallable UntagCallable(const Model::UntagRequest& request) const;

        /**
         * An Async wrapper for Untag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagAsync(const Model::UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description for an existing group. You cannot update the name of
         * a resource group.</p> <p> <b>Minimum permissions</b> </p> <p>To run this
         * command, you must have the following permissions:</p> <ul> <li> <p>
         * <code>resource-groups:UpdateGroup</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource query of a group. For more information about resource
         * queries, see <a
         * href="https://docs.aws.amazon.com/ARG/latest/userguide/gettingstarted-query.html#gettingstarted-query-cli-tag">Create
         * a tag-based group in Resource Groups</a>.</p> <p> <b>Minimum permissions</b>
         * </p> <p>To run this command, you must have the following permissions:</p> <ul>
         * <li> <p> <code>resource-groups:UpdateGroupQuery</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupQueryOutcome UpdateGroupQuery(const Model::UpdateGroupQueryRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroupQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupQueryOutcomeCallable UpdateGroupQueryCallable(const Model::UpdateGroupQueryRequest& request) const;

        /**
         * An Async wrapper for UpdateGroupQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupQueryAsync(const Model::UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResourceGroupsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResourceGroupsClient>;
      void init(const ResourceGroupsClientConfiguration& clientConfiguration);

      ResourceGroupsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResourceGroupsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResourceGroups
} // namespace Aws
