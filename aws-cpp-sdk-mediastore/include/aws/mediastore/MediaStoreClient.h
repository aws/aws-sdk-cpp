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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediastore/model/CreateContainerResult.h>
#include <aws/mediastore/model/DeleteContainerResult.h>
#include <aws/mediastore/model/DeleteContainerPolicyResult.h>
#include <aws/mediastore/model/DeleteCorsPolicyResult.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyResult.h>
#include <aws/mediastore/model/DescribeContainerResult.h>
#include <aws/mediastore/model/GetContainerPolicyResult.h>
#include <aws/mediastore/model/GetCorsPolicyResult.h>
#include <aws/mediastore/model/GetLifecyclePolicyResult.h>
#include <aws/mediastore/model/ListContainersResult.h>
#include <aws/mediastore/model/ListTagsForResourceResult.h>
#include <aws/mediastore/model/PutContainerPolicyResult.h>
#include <aws/mediastore/model/PutCorsPolicyResult.h>
#include <aws/mediastore/model/PutLifecyclePolicyResult.h>
#include <aws/mediastore/model/StartAccessLoggingResult.h>
#include <aws/mediastore/model/StopAccessLoggingResult.h>
#include <aws/mediastore/model/TagResourceResult.h>
#include <aws/mediastore/model/UntagResourceResult.h>
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

namespace MediaStore
{

namespace Model
{
        class CreateContainerRequest;
        class DeleteContainerRequest;
        class DeleteContainerPolicyRequest;
        class DeleteCorsPolicyRequest;
        class DeleteLifecyclePolicyRequest;
        class DescribeContainerRequest;
        class GetContainerPolicyRequest;
        class GetCorsPolicyRequest;
        class GetLifecyclePolicyRequest;
        class ListContainersRequest;
        class ListTagsForResourceRequest;
        class PutContainerPolicyRequest;
        class PutCorsPolicyRequest;
        class PutLifecyclePolicyRequest;
        class StartAccessLoggingRequest;
        class StopAccessLoggingRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateContainerResult, Aws::Client::AWSError<MediaStoreErrors>> CreateContainerOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteContainerOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteContainerPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteCorsPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteCorsPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeContainerResult, Aws::Client::AWSError<MediaStoreErrors>> DescribeContainerOutcome;
        typedef Aws::Utils::Outcome<GetContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> GetContainerPolicyOutcome;
        typedef Aws::Utils::Outcome<GetCorsPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> GetCorsPolicyOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, Aws::Client::AWSError<MediaStoreErrors>> GetLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<ListContainersResult, Aws::Client::AWSError<MediaStoreErrors>> ListContainersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<MediaStoreErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> PutContainerPolicyOutcome;
        typedef Aws::Utils::Outcome<PutCorsPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> PutCorsPolicyOutcome;
        typedef Aws::Utils::Outcome<PutLifecyclePolicyResult, Aws::Client::AWSError<MediaStoreErrors>> PutLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<StartAccessLoggingResult, Aws::Client::AWSError<MediaStoreErrors>> StartAccessLoggingOutcome;
        typedef Aws::Utils::Outcome<StopAccessLoggingResult, Aws::Client::AWSError<MediaStoreErrors>> StopAccessLoggingOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<MediaStoreErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<MediaStoreErrors>> UntagResourceOutcome;

        typedef std::future<CreateContainerOutcome> CreateContainerOutcomeCallable;
        typedef std::future<DeleteContainerOutcome> DeleteContainerOutcomeCallable;
        typedef std::future<DeleteContainerPolicyOutcome> DeleteContainerPolicyOutcomeCallable;
        typedef std::future<DeleteCorsPolicyOutcome> DeleteCorsPolicyOutcomeCallable;
        typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
        typedef std::future<DescribeContainerOutcome> DescribeContainerOutcomeCallable;
        typedef std::future<GetContainerPolicyOutcome> GetContainerPolicyOutcomeCallable;
        typedef std::future<GetCorsPolicyOutcome> GetCorsPolicyOutcomeCallable;
        typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
        typedef std::future<ListContainersOutcome> ListContainersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutContainerPolicyOutcome> PutContainerPolicyOutcomeCallable;
        typedef std::future<PutCorsPolicyOutcome> PutCorsPolicyOutcomeCallable;
        typedef std::future<PutLifecyclePolicyOutcome> PutLifecyclePolicyOutcomeCallable;
        typedef std::future<StartAccessLoggingOutcome> StartAccessLoggingOutcomeCallable;
        typedef std::future<StopAccessLoggingOutcome> StopAccessLoggingOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class MediaStoreClient;

    typedef std::function<void(const MediaStoreClient*, const Model::CreateContainerRequest&, const Model::CreateContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerRequest&, const Model::DeleteContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerPolicyRequest&, const Model::DeleteContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteCorsPolicyRequest&, const Model::DeleteCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DescribeContainerRequest&, const Model::DescribeContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetContainerPolicyRequest&, const Model::GetContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetCorsPolicyRequest&, const Model::GetCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::ListContainersRequest&, const Model::ListContainersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainersResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutContainerPolicyRequest&, const Model::PutContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutCorsPolicyRequest&, const Model::PutCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutLifecyclePolicyRequest&, const Model::PutLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::StartAccessLoggingRequest&, const Model::StartAccessLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAccessLoggingResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::StopAccessLoggingRequest&, const Model::StopAccessLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAccessLoggingResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>An AWS Elemental MediaStore container is a namespace that holds folders and
   * objects. You use a container endpoint to create, read, and delete objects. </p>
   */
  class AWS_MEDIASTORE_API MediaStoreClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaStoreClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaStoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaStoreClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaStore"; }


        /**
         * <p>Creates a storage container to hold objects. A container is similar to a
         * bucket in the Amazon S3 service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CreateContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerOutcome CreateContainer(const Model::CreateContainerRequest& request) const;

        /**
         * <p>Creates a storage container to hold objects. A container is similar to a
         * bucket in the Amazon S3 service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CreateContainer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerOutcomeCallable CreateContainerCallable(const Model::CreateContainerRequest& request) const;

        /**
         * <p>Creates a storage container to hold objects. A container is similar to a
         * bucket in the Amazon S3 service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CreateContainer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerAsync(const Model::CreateContainerRequest& request, const CreateContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified container. Before you make a
         * <code>DeleteContainer</code> request, delete any objects in the container or in
         * any folders in the container. You can delete only empty containers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerOutcome DeleteContainer(const Model::DeleteContainerRequest& request) const;

        /**
         * <p>Deletes the specified container. Before you make a
         * <code>DeleteContainer</code> request, delete any objects in the container or in
         * any folders in the container. You can delete only empty containers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerOutcomeCallable DeleteContainerCallable(const Model::DeleteContainerRequest& request) const;

        /**
         * <p>Deletes the specified container. Before you make a
         * <code>DeleteContainer</code> request, delete any objects in the container or in
         * any folders in the container. You can delete only empty containers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerAsync(const Model::DeleteContainerRequest& request, const DeleteContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access policy that is associated with the specified
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerPolicyOutcome DeleteContainerPolicy(const Model::DeleteContainerPolicyRequest& request) const;

        /**
         * <p>Deletes the access policy that is associated with the specified
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainerPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerPolicyOutcomeCallable DeleteContainerPolicyCallable(const Model::DeleteContainerPolicyRequest& request) const;

        /**
         * <p>Deletes the access policy that is associated with the specified
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteContainerPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerPolicyAsync(const Model::DeleteContainerPolicyRequest& request, const DeleteContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
         * container owner has this permission by default and can grant this permission to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCorsPolicyOutcome DeleteCorsPolicy(const Model::DeleteCorsPolicyRequest& request) const;

        /**
         * <p>Deletes the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
         * container owner has this permission by default and can grant this permission to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteCorsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCorsPolicyOutcomeCallable DeleteCorsPolicyCallable(const Model::DeleteCorsPolicyRequest& request) const;

        /**
         * <p>Deletes the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
         * container owner has this permission by default and can grant this permission to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteCorsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCorsPolicyAsync(const Model::DeleteCorsPolicyRequest& request, const DeleteCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an object lifecycle policy from a container. It takes up to 20
         * minutes for the change to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Removes an object lifecycle policy from a container. It takes up to 20
         * minutes for the change to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Removes an object lifecycle policy from a container. It takes up to 20
         * minutes for the change to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties of the requested container. This request is commonly
         * used to retrieve the endpoint of a container. An endpoint is a value assigned by
         * the service when a new container is created. A container's endpoint does not
         * change after it has been assigned. The <code>DescribeContainer</code> request
         * returns a single <code>Container</code> object based on
         * <code>ContainerName</code>. To return all <code>Container</code> objects that
         * are associated with a specified AWS account, use
         * <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContainerOutcome DescribeContainer(const Model::DescribeContainerRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested container. This request is commonly
         * used to retrieve the endpoint of a container. An endpoint is a value assigned by
         * the service when a new container is created. A container's endpoint does not
         * change after it has been assigned. The <code>DescribeContainer</code> request
         * returns a single <code>Container</code> object based on
         * <code>ContainerName</code>. To return all <code>Container</code> objects that
         * are associated with a specified AWS account, use
         * <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContainerOutcomeCallable DescribeContainerCallable(const Model::DescribeContainerRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested container. This request is commonly
         * used to retrieve the endpoint of a container. An endpoint is a value assigned by
         * the service when a new container is created. A container's endpoint does not
         * change after it has been assigned. The <code>DescribeContainer</code> request
         * returns a single <code>Container</code> object based on
         * <code>ContainerName</code>. To return all <code>Container</code> objects that
         * are associated with a specified AWS account, use
         * <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContainerAsync(const Model::DescribeContainerRequest& request, const DescribeContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the access policy for the specified container. For information
         * about the data that is included in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerPolicyOutcome GetContainerPolicy(const Model::GetContainerPolicyRequest& request) const;

        /**
         * <p>Retrieves the access policy for the specified container. For information
         * about the data that is included in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetContainerPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerPolicyOutcomeCallable GetContainerPolicyCallable(const Model::GetContainerPolicyRequest& request) const;

        /**
         * <p>Retrieves the access policy for the specified container. For information
         * about the data that is included in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetContainerPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerPolicyAsync(const Model::GetContainerPolicyRequest& request, const GetContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By
         * default, the container owner has this permission and can grant it to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCorsPolicyOutcome GetCorsPolicy(const Model::GetCorsPolicyRequest& request) const;

        /**
         * <p>Returns the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By
         * default, the container owner has this permission and can grant it to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetCorsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCorsPolicyOutcomeCallable GetCorsPolicyCallable(const Model::GetCorsPolicyRequest& request) const;

        /**
         * <p>Returns the cross-origin resource sharing (CORS) configuration information
         * that is set for the container.</p> <p>To use this operation, you must have
         * permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By
         * default, the container owner has this permission and can grant it to
         * others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetCorsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCorsPolicyAsync(const Model::GetCorsPolicyRequest& request, const GetCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the object lifecycle policy that is assigned to a
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Retrieves the object lifecycle policy that is assigned to a
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Retrieves the object lifecycle policy that is assigned to a
         * container.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyAsync(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the properties of all containers in AWS Elemental MediaStore. </p>
         * <p>You can query to receive all the containers in one response. Or you can
         * include the <code>MaxResults</code> parameter to receive a limited number of
         * containers in each response. In this case, the response includes a token. To get
         * the next set of containers, send the command again, this time with the
         * <code>NextToken</code> parameter (with the returned token as its value). The
         * next set of responses appears, with a token if there are still more containers
         * to receive. </p> <p>See also <a>DescribeContainer</a>, which gets the properties
         * of one container. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListContainers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainersOutcome ListContainers(const Model::ListContainersRequest& request) const;

        /**
         * <p>Lists the properties of all containers in AWS Elemental MediaStore. </p>
         * <p>You can query to receive all the containers in one response. Or you can
         * include the <code>MaxResults</code> parameter to receive a limited number of
         * containers in each response. In this case, the response includes a token. To get
         * the next set of containers, send the command again, this time with the
         * <code>NextToken</code> parameter (with the returned token as its value). The
         * next set of responses appears, with a token if there are still more containers
         * to receive. </p> <p>See also <a>DescribeContainer</a>, which gets the properties
         * of one container. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListContainers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContainersOutcomeCallable ListContainersCallable(const Model::ListContainersRequest& request) const;

        /**
         * <p>Lists the properties of all containers in AWS Elemental MediaStore. </p>
         * <p>You can query to receive all the containers in one response. Or you can
         * include the <code>MaxResults</code> parameter to receive a limited number of
         * containers in each response. In this case, the response includes a token. To get
         * the next set of containers, send the command again, this time with the
         * <code>NextToken</code> parameter (with the returned token as its value). The
         * next set of responses appears, with a token if there are still more containers
         * to receive. </p> <p>See also <a>DescribeContainer</a>, which gets the properties
         * of one container. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListContainers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContainersAsync(const Model::ListContainersRequest& request, const ListContainersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified container.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified container.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified container.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an access policy for the specified container to restrict the users
         * and clients that can access it. For information about the data that is included
         * in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p> <p>For this release of the REST API, you can
         * create only one policy for a container. If you enter
         * <code>PutContainerPolicy</code> twice, the second command modifies the existing
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutContainerPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContainerPolicyOutcome PutContainerPolicy(const Model::PutContainerPolicyRequest& request) const;

        /**
         * <p>Creates an access policy for the specified container to restrict the users
         * and clients that can access it. For information about the data that is included
         * in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p> <p>For this release of the REST API, you can
         * create only one policy for a container. If you enter
         * <code>PutContainerPolicy</code> twice, the second command modifies the existing
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutContainerPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutContainerPolicyOutcomeCallable PutContainerPolicyCallable(const Model::PutContainerPolicyRequest& request) const;

        /**
         * <p>Creates an access policy for the specified container to restrict the users
         * and clients that can access it. For information about the data that is included
         * in an access policy, see the <a
         * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access
         * Management User Guide</a>.</p> <p>For this release of the REST API, you can
         * create only one policy for a container. If you enter
         * <code>PutContainerPolicy</code> twice, the second command modifies the existing
         * policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutContainerPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutContainerPolicyAsync(const Model::PutContainerPolicyRequest& request, const PutContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the cross-origin resource sharing (CORS) configuration on a container so
         * that the container can service cross-origin requests. For example, you might
         * want to enable a request whose origin is http://www.example.com to access your
         * AWS Elemental MediaStore container at my.example.container.com by using the
         * browser's XMLHttpRequest capability.</p> <p>To enable CORS on a container, you
         * attach a CORS policy to the container. In the CORS policy, you configure rules
         * that identify origins and the HTTP methods that can be executed on your
         * container. The policy can contain up to 398,000 characters. You can add up to
         * 100 rules to a CORS policy. If more than one rule applies, the service uses the
         * first applicable rule listed.</p> <p>To learn more about CORS, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/cors-policy.html">Cross-Origin
         * Resource Sharing (CORS) in AWS Elemental MediaStore</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutCorsPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCorsPolicyOutcome PutCorsPolicy(const Model::PutCorsPolicyRequest& request) const;

        /**
         * <p>Sets the cross-origin resource sharing (CORS) configuration on a container so
         * that the container can service cross-origin requests. For example, you might
         * want to enable a request whose origin is http://www.example.com to access your
         * AWS Elemental MediaStore container at my.example.container.com by using the
         * browser's XMLHttpRequest capability.</p> <p>To enable CORS on a container, you
         * attach a CORS policy to the container. In the CORS policy, you configure rules
         * that identify origins and the HTTP methods that can be executed on your
         * container. The policy can contain up to 398,000 characters. You can add up to
         * 100 rules to a CORS policy. If more than one rule applies, the service uses the
         * first applicable rule listed.</p> <p>To learn more about CORS, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/cors-policy.html">Cross-Origin
         * Resource Sharing (CORS) in AWS Elemental MediaStore</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutCorsPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCorsPolicyOutcomeCallable PutCorsPolicyCallable(const Model::PutCorsPolicyRequest& request) const;

        /**
         * <p>Sets the cross-origin resource sharing (CORS) configuration on a container so
         * that the container can service cross-origin requests. For example, you might
         * want to enable a request whose origin is http://www.example.com to access your
         * AWS Elemental MediaStore container at my.example.container.com by using the
         * browser's XMLHttpRequest capability.</p> <p>To enable CORS on a container, you
         * attach a CORS policy to the container. In the CORS policy, you configure rules
         * that identify origins and the HTTP methods that can be executed on your
         * container. The policy can contain up to 398,000 characters. You can add up to
         * 100 rules to a CORS policy. If more than one rule applies, the service uses the
         * first applicable rule listed.</p> <p>To learn more about CORS, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/cors-policy.html">Cross-Origin
         * Resource Sharing (CORS) in AWS Elemental MediaStore</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutCorsPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCorsPolicyAsync(const Model::PutCorsPolicyRequest& request, const PutCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes an object lifecycle policy to a container. If the container already
         * has an object lifecycle policy, the service replaces the existing policy with
         * the new policy. It takes up to 20 minutes for the change to take effect.</p>
         * <p>For information about how to construct an object lifecycle policy, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-object-lifecycle-components.html">Components
         * of an Object Lifecycle Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecyclePolicyOutcome PutLifecyclePolicy(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * <p>Writes an object lifecycle policy to a container. If the container already
         * has an object lifecycle policy, the service replaces the existing policy with
         * the new policy. It takes up to 20 minutes for the change to take effect.</p>
         * <p>For information about how to construct an object lifecycle policy, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-object-lifecycle-components.html">Components
         * of an Object Lifecycle Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecyclePolicyOutcomeCallable PutLifecyclePolicyCallable(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * <p>Writes an object lifecycle policy to a container. If the container already
         * has an object lifecycle policy, the service replaces the existing policy with
         * the new policy. It takes up to 20 minutes for the change to take effect.</p>
         * <p>For information about how to construct an object lifecycle policy, see <a
         * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-object-lifecycle-components.html">Components
         * of an Object Lifecycle Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecyclePolicyAsync(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts access logging on the specified container. When you enable access
         * logging on a container, MediaStore delivers access logs for objects stored in
         * that container to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StartAccessLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAccessLoggingOutcome StartAccessLogging(const Model::StartAccessLoggingRequest& request) const;

        /**
         * <p>Starts access logging on the specified container. When you enable access
         * logging on a container, MediaStore delivers access logs for objects stored in
         * that container to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StartAccessLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAccessLoggingOutcomeCallable StartAccessLoggingCallable(const Model::StartAccessLoggingRequest& request) const;

        /**
         * <p>Starts access logging on the specified container. When you enable access
         * logging on a container, MediaStore delivers access logs for objects stored in
         * that container to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StartAccessLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAccessLoggingAsync(const Model::StartAccessLoggingRequest& request, const StartAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops access logging on the specified container. When you stop access logging
         * on a container, MediaStore stops sending access logs to Amazon CloudWatch Logs.
         * These access logs are not saved and are not retrievable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StopAccessLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAccessLoggingOutcome StopAccessLogging(const Model::StopAccessLoggingRequest& request) const;

        /**
         * <p>Stops access logging on the specified container. When you stop access logging
         * on a container, MediaStore stops sending access logs to Amazon CloudWatch Logs.
         * These access logs are not saved and are not retrievable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StopAccessLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAccessLoggingOutcomeCallable StopAccessLoggingCallable(const Model::StopAccessLoggingRequest& request) const;

        /**
         * <p>Stops access logging on the specified container. When you stop access logging
         * on a container, MediaStore stops sending access logs to Amazon CloudWatch Logs.
         * These access logs are not saved and are not retrievable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/StopAccessLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAccessLoggingAsync(const Model::StopAccessLoggingRequest& request, const StopAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to the specified AWS Elemental MediaStore container. Tags are
         * key:value pairs that you can associate with AWS resources. For example, the tag
         * key might be "customer" and the tag value might be "companyA." You can specify
         * one or more tags to add to each container. You can add up to 50 tags to each
         * container. For more information about tagging, including naming and usage
         * conventions, see <a
         * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
         * in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to the specified AWS Elemental MediaStore container. Tags are
         * key:value pairs that you can associate with AWS resources. For example, the tag
         * key might be "customer" and the tag value might be "companyA." You can specify
         * one or more tags to add to each container. You can add up to 50 tags to each
         * container. For more information about tagging, including naming and usage
         * conventions, see <a
         * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
         * in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to the specified AWS Elemental MediaStore container. Tags are
         * key:value pairs that you can associate with AWS resources. For example, the tag
         * key might be "customer" and the tag value might be "companyA." You can specify
         * one or more tags to add to each container. You can add up to 50 tags to each
         * container. For more information about tagging, including naming and usage
         * conventions, see <a
         * href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging Resources
         * in MediaStore</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the specified container. You can specify one or more tags
         * to remove. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the specified container. You can specify one or more tags
         * to remove. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the specified container. You can specify one or more tags
         * to remove. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateContainerAsyncHelper(const Model::CreateContainerRequest& request, const CreateContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerAsyncHelper(const Model::DeleteContainerRequest& request, const DeleteContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerPolicyAsyncHelper(const Model::DeleteContainerPolicyRequest& request, const DeleteContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCorsPolicyAsyncHelper(const Model::DeleteCorsPolicyRequest& request, const DeleteCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecyclePolicyAsyncHelper(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContainerAsyncHelper(const Model::DescribeContainerRequest& request, const DescribeContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerPolicyAsyncHelper(const Model::GetContainerPolicyRequest& request, const GetContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCorsPolicyAsyncHelper(const Model::GetCorsPolicyRequest& request, const GetCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyAsyncHelper(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContainersAsyncHelper(const Model::ListContainersRequest& request, const ListContainersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutContainerPolicyAsyncHelper(const Model::PutContainerPolicyRequest& request, const PutContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutCorsPolicyAsyncHelper(const Model::PutCorsPolicyRequest& request, const PutCorsPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecyclePolicyAsyncHelper(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAccessLoggingAsyncHelper(const Model::StartAccessLoggingRequest& request, const StartAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAccessLoggingAsyncHelper(const Model::StopAccessLoggingRequest& request, const StopAccessLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaStore
} // namespace Aws
