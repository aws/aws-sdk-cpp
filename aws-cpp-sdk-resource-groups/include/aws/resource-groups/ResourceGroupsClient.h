/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/resource-groups/model/GetGroupConfigurationResult.h>
#include <aws/resource-groups/model/GetGroupQueryResult.h>
#include <aws/resource-groups/model/GetTagsResult.h>
#include <aws/resource-groups/model/GroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupResourcesResult.h>
#include <aws/resource-groups/model/ListGroupsResult.h>
#include <aws/resource-groups/model/SearchResourcesResult.h>
#include <aws/resource-groups/model/TagResult.h>
#include <aws/resource-groups/model/UngroupResourcesResult.h>
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
        class GetGroupConfigurationRequest;
        class GetGroupQueryRequest;
        class GetTagsRequest;
        class GroupResourcesRequest;
        class ListGroupResourcesRequest;
        class ListGroupsRequest;
        class SearchResourcesRequest;
        class TagRequest;
        class UngroupResourcesRequest;
        class UntagRequest;
        class UpdateGroupRequest;
        class UpdateGroupQueryRequest;

        typedef Aws::Utils::Outcome<CreateGroupResult, ResourceGroupsError> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, ResourceGroupsError> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, ResourceGroupsError> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupConfigurationResult, ResourceGroupsError> GetGroupConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetGroupQueryResult, ResourceGroupsError> GetGroupQueryOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, ResourceGroupsError> GetTagsOutcome;
        typedef Aws::Utils::Outcome<GroupResourcesResult, ResourceGroupsError> GroupResourcesOutcome;
        typedef Aws::Utils::Outcome<ListGroupResourcesResult, ResourceGroupsError> ListGroupResourcesOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, ResourceGroupsError> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<SearchResourcesResult, ResourceGroupsError> SearchResourcesOutcome;
        typedef Aws::Utils::Outcome<TagResult, ResourceGroupsError> TagOutcome;
        typedef Aws::Utils::Outcome<UngroupResourcesResult, ResourceGroupsError> UngroupResourcesOutcome;
        typedef Aws::Utils::Outcome<UntagResult, ResourceGroupsError> UntagOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, ResourceGroupsError> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupQueryResult, ResourceGroupsError> UpdateGroupQueryOutcome;

        typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
        typedef std::future<GetGroupConfigurationOutcome> GetGroupConfigurationOutcomeCallable;
        typedef std::future<GetGroupQueryOutcome> GetGroupQueryOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
        typedef std::future<GroupResourcesOutcome> GroupResourcesOutcomeCallable;
        typedef std::future<ListGroupResourcesOutcome> ListGroupResourcesOutcomeCallable;
        typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
        typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
        typedef std::future<TagOutcome> TagOutcomeCallable;
        typedef std::future<UngroupResourcesOutcome> UngroupResourcesOutcomeCallable;
        typedef std::future<UntagOutcome> UntagOutcomeCallable;
        typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
        typedef std::future<UpdateGroupQueryOutcome> UpdateGroupQueryOutcomeCallable;
} // namespace Model

  class ResourceGroupsClient;

    typedef std::function<void(const ResourceGroupsClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupConfigurationRequest&, const Model::GetGroupConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupConfigurationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetGroupQueryRequest&, const Model::GetGroupQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupQueryResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::GroupResourcesRequest&, const Model::GroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupResourcesRequest&, const Model::ListGroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::SearchResourcesRequest&, const Model::SearchResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::TagRequest&, const Model::TagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsClient*, const Model::UngroupResourcesRequest&, const Model::UngroupResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UngroupResourcesResponseReceivedHandler;
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


        /**
         * <p>Creates a resource group with the specified name and description. You can
         * optionally include a resource query, or a service configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a resource group with the specified name and description. You can
         * optionally include a resource query, or a service configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * <p>Creates a resource group with the specified name and description. You can
         * optionally include a resource query, or a service configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource group. Deleting a resource group does not
         * delete any resources that are members of the group; it only deletes the group
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified resource group. Deleting a resource group does not
         * delete any resources that are members of the group; it only deletes the group
         * structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * <p>Deletes the specified resource group. Deleting a resource group does not
         * delete any resources that are members of the group; it only deletes the group
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
         * <p>Returns the service configuration associated with the specified resource
         * group. AWS Resource Groups supports configurations for the following resource
         * group types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> -
         * Amazon EC2 capacity reservation pools. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
         * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupConfigurationOutcome GetGroupConfiguration(const Model::GetGroupConfigurationRequest& request) const;

        /**
         * <p>Returns the service configuration associated with the specified resource
         * group. AWS Resource Groups supports configurations for the following resource
         * group types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> -
         * Amazon EC2 capacity reservation pools. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
         * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupConfigurationOutcomeCallable GetGroupConfigurationCallable(const Model::GetGroupConfigurationRequest& request) const;

        /**
         * <p>Returns the service configuration associated with the specified resource
         * group. AWS Resource Groups supports configurations for the following resource
         * group types:</p> <ul> <li> <p> <code>AWS::EC2::CapacityReservationPool</code> -
         * Amazon EC2 capacity reservation pools. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/capacity-reservations-using.html#create-cr-group">Working
         * with capacity reservation groups</a> in the <i>EC2 Users Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupConfigurationAsync(const Model::GetGroupConfigurationRequest& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource query associated with the specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupQueryOutcome GetGroupQuery(const Model::GetGroupQueryRequest& request) const;

        /**
         * <p>Retrieves the resource query associated with the specified resource
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GetGroupQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupQueryOutcomeCallable GetGroupQueryCallable(const Model::GetGroupQueryRequest& request) const;

        /**
         * <p>Retrieves the resource query associated with the specified resource
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
         * <p>Adds the specified resources to the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GroupResourcesOutcome GroupResources(const Model::GroupResourcesRequest& request) const;

        /**
         * <p>Adds the specified resources to the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GroupResourcesOutcomeCallable GroupResourcesCallable(const Model::GroupResourcesRequest& request) const;

        /**
         * <p>Adds the specified resources to the specified group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GroupResourcesAsync(const Model::GroupResourcesRequest& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ARNs of the resources that are members of a specified
         * resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupResourcesOutcome ListGroupResources(const Model::ListGroupResourcesRequest& request) const;

        /**
         * <p>Returns a list of ARNs of the resources that are members of a specified
         * resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ListGroupResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupResourcesOutcomeCallable ListGroupResourcesCallable(const Model::ListGroupResourcesRequest& request) const;

        /**
         * <p>Returns a list of ARNs of the resources that are members of a specified
         * resource group.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of AWS resource identifiers that matches the specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches the specified query.
         * The query uses the same format as a resource query in a CreateGroup or
         * UpdateGroupQuery operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/SearchResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request) const;

        /**
         * <p>Returns a list of AWS resource identifiers that matches the specified query.
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
         * parameters.</p>  <p>Do not store personally identifiable information
         * (PII) or other confidential or sensitive information in tags. We use tags to
         * provide you with billing and administration services. Tags are not intended to
         * be used for private or sensitive data.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         */
        virtual Model::TagOutcome Tag(const Model::TagRequest& request) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p>  <p>Do not store personally identifiable information
         * (PII) or other confidential or sensitive information in tags. We use tags to
         * provide you with billing and administration services. Tags are not intended to
         * be used for private or sensitive data.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagOutcomeCallable TagCallable(const Model::TagRequest& request) const;

        /**
         * <p>Adds tags to a resource group with the specified ARN. Existing tags on a
         * resource group are not changed if they are not specified in the request
         * parameters.</p>  <p>Do not store personally identifiable information
         * (PII) or other confidential or sensitive information in tags. We use tags to
         * provide you with billing and administration services. Tags are not intended to
         * be used for private or sensitive data.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Tag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagAsync(const Model::TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified resources from the specified group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UngroupResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UngroupResourcesOutcome UngroupResources(const Model::UngroupResourcesRequest& request) const;

        /**
         * <p>Removes the specified resources from the specified group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UngroupResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UngroupResourcesOutcomeCallable UngroupResourcesCallable(const Model::UngroupResourcesRequest& request) const;

        /**
         * <p>Removes the specified resources from the specified group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UngroupResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UngroupResourcesAsync(const Model::UngroupResourcesRequest& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from a specified resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagOutcome Untag(const Model::UntagRequest& request) const;

        /**
         * <p>Deletes tags from a specified resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagOutcomeCallable UntagCallable(const Model::UntagRequest& request) const;

        /**
         * <p>Deletes tags from a specified resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Untag">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagAsync(const Model::UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description for an existing group. You cannot update the name of
         * a resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the description for an existing group. You cannot update the name of
         * a resource group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * <p>Updates the description for an existing group. You cannot update the name of
         * a resource group.</p><p><h3>See Also:</h3>   <a
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
        void GetGroupConfigurationAsyncHelper(const Model::GetGroupConfigurationRequest& request, const GetGroupConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupQueryAsyncHelper(const Model::GetGroupQueryRequest& request, const GetGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GroupResourcesAsyncHelper(const Model::GroupResourcesRequest& request, const GroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupResourcesAsyncHelper(const Model::ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchResourcesAsyncHelper(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagAsyncHelper(const Model::TagRequest& request, const TagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UngroupResourcesAsyncHelper(const Model::UngroupResourcesRequest& request, const UngroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagAsyncHelper(const Model::UntagRequest& request, const UntagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupQueryAsyncHelper(const Model::UpdateGroupQueryRequest& request, const UpdateGroupQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ResourceGroups
} // namespace Aws
