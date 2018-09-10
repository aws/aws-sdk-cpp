﻿/*
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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesResult.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesResult.h>
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

namespace ResourceGroupsTaggingAPI
{

namespace Model
{
        class GetResourcesRequest;
        class GetTagKeysRequest;
        class GetTagValuesRequest;
        class TagResourcesRequest;
        class UntagResourcesRequest;

        typedef Aws::Utils::Outcome<GetResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetResourcesOutcome;
        typedef Aws::Utils::Outcome<GetTagKeysResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetTagKeysOutcome;
        typedef Aws::Utils::Outcome<GetTagValuesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetTagValuesOutcome;
        typedef Aws::Utils::Outcome<TagResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> TagResourcesOutcome;
        typedef Aws::Utils::Outcome<UntagResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> UntagResourcesOutcome;

        typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
        typedef std::future<GetTagKeysOutcome> GetTagKeysOutcomeCallable;
        typedef std::future<GetTagValuesOutcome> GetTagValuesOutcomeCallable;
        typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
        typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
} // namespace Model

  class ResourceGroupsTaggingAPIClient;

    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagKeysRequest&, const Model::GetTagKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagKeysResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagValuesRequest&, const Model::GetTagValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagValuesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::TagResourcesRequest&, const Model::TagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::UntagResourcesRequest&, const Model::UntagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourcesResponseReceivedHandler;

  /**
   * <fullname>Resource Groups Tagging API</fullname> <p>This guide describes the API
   * operations for the resource groups tagging.</p> <p>A tag is a label that you
   * assign to an AWS resource. A tag consists of a key and a value, both of which
   * you define. For example, if you have two Amazon EC2 instances, you might assign
   * both a tag key of "Stack." But the value of "Stack" might be "Testing" for one
   * and "Production" for the other.</p> <p>Tagging can help you organize your
   * resources and enables you to simplify resource management, access management and
   * cost allocation. For more information about tagging, see <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working
   * with Tag Editor</a> and <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/resource-groups.html">Working
   * with Resource Groups</a>. For more information about permissions you need to use
   * the resource groups tagging APIs, see <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
   * Permissions for Resource Groups </a> and <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
   * Permissions for Tagging </a>.</p> <p>You can use the resource groups tagging
   * APIs to complete the following tasks:</p> <ul> <li> <p>Tag and untag supported
   * resources located in the specified region for the AWS account</p> </li> <li>
   * <p>Use tag-based filters to search for resources located in the specified region
   * for the AWS account</p> </li> <li> <p>List all existing tag keys in the
   * specified region for the AWS account</p> </li> <li> <p>List all existing values
   * for the specified key in the specified region for the AWS account</p> </li>
   * </ul> <p>Not all resources can have tags. For a lists of resources that you can
   * tag, see <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported
   * Resources</a> in the <i>AWS Resource Groups and Tag Editor User Guide</i>.</p>
   * <p>To make full use of the resource groups tagging APIs, you might need
   * additional IAM permissions, including permission to access the resources of
   * individual services as well as permission to view and apply tags to those
   * resources. For more information, see <a
   * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
   * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
   * Guide</i>.</p>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsTaggingAPIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ResourceGroupsTaggingAPIClient();

        inline virtual const char* GetServiceClientName() const override { return "tagging"; }


        /**
         * <p>Returns all the tagged resources that are associated with the specified tags
         * (keys and values) located in the specified region for the AWS account. The tags
         * and the resource types that you specify in the request are known as
         * <i>filters</i>. The response includes all tags that are associated with the
         * requested resources. If no filter is provided, this action returns a paginated
         * resource list with the associated tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Returns all the tagged resources that are associated with the specified tags
         * (keys and values) located in the specified region for the AWS account. The tags
         * and the resource types that you specify in the request are known as
         * <i>filters</i>. The response includes all tags that are associated with the
         * requested resources. If no filter is provided, this action returns a paginated
         * resource list with the associated tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Returns all the tagged resources that are associated with the specified tags
         * (keys and values) located in the specified region for the AWS account. The tags
         * and the resource types that you specify in the request are known as
         * <i>filters</i>. The response includes all tags that are associated with the
         * requested resources. If no filter is provided, this action returns a paginated
         * resource list with the associated tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag keys in the specified region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagKeysOutcome GetTagKeys(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys in the specified region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagKeysOutcomeCallable GetTagKeysCallable(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys in the specified region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagKeysAsync(const Model::GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag values for the specified key in the specified region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagValuesOutcome GetTagValues(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key in the specified region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagValuesOutcomeCallable GetTagValuesCallable(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key in the specified region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagValuesAsync(const Model::GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of resources that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported
         * Resources</a> in the <i>AWS Resource Groups and Tag Editor User Guide</i>.</p>
         * </li> <li> <p>Each resource can have up to 50 tags. For other limits, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-restrictions">Tag
         * Restrictions</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
         * </li> <li> <p>You can only tag resources that are located in the specified
         * region for the AWS account.</p> </li> <li> <p>To add tags to a resource, you
         * need the necessary permissions for the service that the resource belongs to as
         * well as permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourcesOutcome TagResources(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of resources that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported
         * Resources</a> in the <i>AWS Resource Groups and Tag Editor User Guide</i>.</p>
         * </li> <li> <p>Each resource can have up to 50 tags. For other limits, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-restrictions">Tag
         * Restrictions</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
         * </li> <li> <p>You can only tag resources that are located in the specified
         * region for the AWS account.</p> </li> <li> <p>To add tags to a resource, you
         * need the necessary permissions for the service that the resource belongs to as
         * well as permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourcesOutcomeCallable TagResourcesCallable(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of resources that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported
         * Resources</a> in the <i>AWS Resource Groups and Tag Editor User Guide</i>.</p>
         * </li> <li> <p>Each resource can have up to 50 tags. For other limits, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-restrictions">Tag
         * Restrictions</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
         * </li> <li> <p>You can only tag resources that are located in the specified
         * region for the AWS account.</p> </li> <li> <p>To add tags to a resource, you
         * need the necessary permissions for the service that the resource belongs to as
         * well as permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourcesOutcome UntagResources(const Model::UntagResourcesRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourcesOutcomeCallable UntagResourcesCallable(const Model::UntagResourcesRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
         * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
         * Guide</i>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void GetResourcesAsyncHelper(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagKeysAsyncHelper(const Model::GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagValuesAsyncHelper(const Model::GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourcesAsyncHelper(const Model::TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourcesAsyncHelper(const Model::UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
