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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-groups/model/CreateGroupResult.h>
#include <aws/resource-groups/model/DeleteGroupResult.h>
#include <aws/resource-groups/model/GetGroupResult.h>
#include <aws/resource-groups/model/GetGroupQueryResult.h>
#include <aws/resource-groups/model/GetTagsResult.h>
#include <aws/resource-groups/model/ListGroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupsResult.h>
#include <aws/resource-groups/model/SearchResourcesResult.h>
#include <aws/resource-groups/model/TagResult.h>
#include <aws/resource-groups/model/UntagResult.h>
#include <aws/resource-groups/model/UpdateGroupResult.h>
#include <aws/resource-groups/model/UpdateGroupQueryResult.h>
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

namespace ResourceGroups
{

namespace Model
{
        class CreateGroupRequest;
        class DeleteGroupRequest;
        class GetGroupRequest;
        class GetGroupQueryRequest;
        class GetTagsRequest;
        class ListGroupResourcesRequest;
        class ListGroupsRequest;
        class SearchResourcesRequest;
        class TagRequest;
        class UntagRequest;
        class UpdateGroupRequest;
        class UpdateGroupQueryRequest;

        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<ResourceGroupsErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<ResourceGroupsErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, Aws::Client::AWSError<ResourceGroupsErrors>> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupQueryResult, Aws::Client::AWSError<ResourceGroupsErrors>> GetGroupQueryOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, Aws::Client::AWSError<ResourceGroupsErrors>> GetTagsOutcome;
        typedef Aws::Utils::Outcome<ListGroupResourcesResult, Aws::Client::AWSError<ResourceGroupsErrors>> ListGroupResourcesOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<ResourceGroupsErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<SearchResourcesResult, Aws::Client::AWSError<ResourceGroupsErrors>> SearchResourcesOutcome;
        typedef Aws::Utils::Outcome<TagResult, Aws::Client::AWSError<ResourceGroupsErrors>> TagOutcome;
        typedef Aws::Utils::Outcome<UntagResult, Aws::Client::AWSError<ResourceGroupsErrors>> UntagOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<ResourceGroupsErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupQueryResult, Aws::Client::AWSError<ResourceGroupsErrors>> UpdateGroupQueryOutcome;

        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetGroupQueryOutcome> GetGroupQueryOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
        typedef std::future<ListGroupResourcesOutcome> ListGroupResourcesOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
        typedef std::future<TagOutcome> TagOutcomeCallable;
        typedef std::future<UntagOutcome> UntagOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateGroupQueryOutcome> UpdateGroupQueryOutcomeCallable;
} // namespace Model

  class ResourceGroupsClient;

    typedef std::function<void(const ResourceGroupsClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupQueryRequest&, const Model::GetGroupQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupQueryResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupResourcesRequest&, const Model::ListGroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::SearchResourcesRequest&, const Model::SearchResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::TagRequest&, const Model::TagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UntagRequest&, const Model::UntagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UpdateGroupQueryRequest&, const Model::UpdateGroupQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupQueryResponseReceivedHandler;

  /**
   * <fullname>AWS Resource Groups</fullname> <p>AWS Resource Groups lets you
   * organize AWS resources such as Amazon EC2 instances, Amazon Relational Database
   * Service databases, and Amazon S3 buckets into groups using criteria that you
   * define as tags. A resource group is a collection of resources that match the
   * resource types specified in a query, and share one or more tags or portions of
   * tags. You can create a group of resources based on their roles in your cloud
   * infrastructure, lifecycle stages, regions, application layers, or virtually any
   * criteria. Resource groups enable you to automate management tasks, such as those
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
  class AWS_RESOURCEGROUPS_API ResourceGroupsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ResourceGroupsClient();

        inline virtual const char* GetServiceClientName() const override { return "Resource Groups"; }


        /**
         * <p>Creates a group with a specified name, description, and resource
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group with a specified name, description, and resource
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a group with a specified name, description, and resource
         * query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified resource group. Deleting a resource group does not delete
         * resources that are members of the group; it only deletes the group
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a specified resource group. Deleting a resource group does not delete
         * resources that are members of the group; it only deletes the group
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes a specified resource group. Deleting a resource group does not delete
         * resources that are members of the group; it only deletes the group
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specified resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * <p>Returns information about a specified resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * <p>Returns information about a specified resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource query associated with the specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupQueryOutcome GetGroupQuery(const Model::GetGroupQueryRequest& request) const;

        /**
         * <p>Returns the resource query associated with the specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupQueryOutcomeCallable GetGroupQueryCallable(const Model::GetGroupQueryRequest& request) const;

        /**
         * <p>Returns the resource query associated with the specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupQueryAsync(const Model::GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are associated with a resource group, specified
         * by an ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * <p>Returns a list of tags that are associated with a resource group, specified
         * by an ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * <p>Returns a list of tags that are associated with a resource group, specified
         * by an ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ARNs of resources that are members of a specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupResourcesOutcome ListGroupResources(const Model::ListGroupResourcesRequest& request) const;

        /**
         * <p>Returns a list of ARNs of resources that are members of a specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupResourcesOutcomeCallable ListGroupResourcesCallable(const Model::ListGroupResourcesRequest& request) const;

        /**
         * <p>Returns a list of ARNs of resources that are members of a specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupResourcesAsync(const Model::ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing resource groups in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Returns a list of existing resource groups in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * <p>Returns a list of existing resource groups in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches a specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches a specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches a specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         */
        virtual Model::TagOutcome Tag(const Model::TagRequest& request) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagOutcomeCallable TagCallable(const Model::TagRequest& request) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagAsync(const Model::TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagOutcome Untag(const Model::UntagRequest& request) const;

        /**
         * <p>Deletes specified tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagOutcomeCallable UntagCallable(const Model::UntagRequest& request) const;

        /**
         * <p>Deletes specified tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagAsync(const Model::UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing group with a new or changed description. You cannot
         * update the name of a resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates an existing group with a new or changed description. You cannot
         * update the name of a resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates an existing group with a new or changed description. You cannot
         * update the name of a resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource query of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupQueryOutcome UpdateGroupQuery(const Model::UpdateGroupQueryRequest& request) const;

        /**
         * <p>Updates the resource query of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroupQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupQueryOutcomeCallable UpdateGroupQueryCallable(const Model::UpdateGroupQueryRequest& request) const;

        /**
         * <p>Updates the resource query of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroupQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupQueryAsync(const Model::UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupQueryAsyncHelper(const Model::GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupResourcesAsyncHelper(const Model::ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchResourcesAsyncHelper(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagAsyncHelper(const Model::TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagAsyncHelper(const Model::UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupQueryAsyncHelper(const Model::UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ResourceGroups
} // namespace Aws
