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
#include <aws/mediastore/model/DescribeContainerResult.h>
#include <aws/mediastore/model/GetContainerPolicyResult.h>
#include <aws/mediastore/model/ListContainersResult.h>
#include <aws/mediastore/model/PutContainerPolicyResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class DescribeContainerRequest;
        class GetContainerPolicyRequest;
        class ListContainersRequest;
        class PutContainerPolicyRequest;

        typedef Aws::Utils::Outcome<CreateContainerResult, Aws::Client::AWSError<MediaStoreErrors>> CreateContainerOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteContainerOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> DeleteContainerPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeContainerResult, Aws::Client::AWSError<MediaStoreErrors>> DescribeContainerOutcome;
        typedef Aws::Utils::Outcome<GetContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> GetContainerPolicyOutcome;
        typedef Aws::Utils::Outcome<ListContainersResult, Aws::Client::AWSError<MediaStoreErrors>> ListContainersOutcome;
        typedef Aws::Utils::Outcome<PutContainerPolicyResult, Aws::Client::AWSError<MediaStoreErrors>> PutContainerPolicyOutcome;

        typedef std::future<CreateContainerOutcome> CreateContainerOutcomeCallable;
        typedef std::future<DeleteContainerOutcome> DeleteContainerOutcomeCallable;
        typedef std::future<DeleteContainerPolicyOutcome> DeleteContainerPolicyOutcomeCallable;
        typedef std::future<DescribeContainerOutcome> DescribeContainerOutcomeCallable;
        typedef std::future<GetContainerPolicyOutcome> GetContainerPolicyOutcomeCallable;
        typedef std::future<ListContainersOutcome> ListContainersOutcomeCallable;
        typedef std::future<PutContainerPolicyOutcome> PutContainerPolicyOutcomeCallable;
} // namespace Model

  class MediaStoreClient;

    typedef std::function<void(const MediaStoreClient*, const Model::CreateContainerRequest&, const Model::CreateContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerRequest&, const Model::DeleteContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerPolicyRequest&, const Model::DeleteContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DescribeContainerRequest&, const Model::DescribeContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetContainerPolicyRequest&, const Model::GetContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::ListContainersRequest&, const Model::ListContainersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainersResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutContainerPolicyRequest&, const Model::PutContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContainerPolicyResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "mediastore"; }


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
         * <p>Retrieves the properties of the requested container. This returns a single
         * <code>Container</code> object based on <code>ContainerName</code>. To return all
         * <code>Container</code> objects that are associated with a specified AWS account,
         * use <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContainerOutcome DescribeContainer(const Model::DescribeContainerRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested container. This returns a single
         * <code>Container</code> object based on <code>ContainerName</code>. To return all
         * <code>Container</code> objects that are associated with a specified AWS account,
         * use <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/DescribeContainer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContainerOutcomeCallable DescribeContainerCallable(const Model::DescribeContainerRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested container. This returns a single
         * <code>Container</code> object based on <code>ContainerName</code>. To return all
         * <code>Container</code> objects that are associated with a specified AWS account,
         * use <a>ListContainers</a>.</p><p><h3>See Also:</h3>   <a
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


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateContainerAsyncHelper(const Model::CreateContainerRequest& request, const CreateContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerAsyncHelper(const Model::DeleteContainerRequest& request, const DeleteContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerPolicyAsyncHelper(const Model::DeleteContainerPolicyRequest& request, const DeleteContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContainerAsyncHelper(const Model::DescribeContainerRequest& request, const DescribeContainerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerPolicyAsyncHelper(const Model::GetContainerPolicyRequest& request, const GetContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContainersAsyncHelper(const Model::ListContainersRequest& request, const ListContainersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutContainerPolicyAsyncHelper(const Model::PutContainerPolicyRequest& request, const PutContainerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaStore
} // namespace Aws
