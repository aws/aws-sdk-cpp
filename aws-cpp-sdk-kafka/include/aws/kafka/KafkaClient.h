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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/CreateClusterResult.h>
#include <aws/kafka/model/CreateConfigurationResult.h>
#include <aws/kafka/model/DeleteClusterResult.h>
#include <aws/kafka/model/DescribeClusterResult.h>
#include <aws/kafka/model/DescribeConfigurationResult.h>
#include <aws/kafka/model/DescribeConfigurationRevisionResult.h>
#include <aws/kafka/model/GetBootstrapBrokersResult.h>
#include <aws/kafka/model/ListClustersResult.h>
#include <aws/kafka/model/ListConfigurationsResult.h>
#include <aws/kafka/model/ListNodesResult.h>
#include <aws/kafka/model/ListTagsForResourceResult.h>
#include <aws/core/NoResult.h>
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

namespace Kafka
{

namespace Model
{
        class CreateClusterRequest;
        class CreateConfigurationRequest;
        class DeleteClusterRequest;
        class DescribeClusterRequest;
        class DescribeConfigurationRequest;
        class DescribeConfigurationRevisionRequest;
        class GetBootstrapBrokersRequest;
        class ListClustersRequest;
        class ListConfigurationsRequest;
        class ListNodesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateClusterResult, Aws::Client::AWSError<KafkaErrors>> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationResult, Aws::Client::AWSError<KafkaErrors>> CreateConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, Aws::Client::AWSError<KafkaErrors>> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, Aws::Client::AWSError<KafkaErrors>> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationResult, Aws::Client::AWSError<KafkaErrors>> DescribeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRevisionResult, Aws::Client::AWSError<KafkaErrors>> DescribeConfigurationRevisionOutcome;
        typedef Aws::Utils::Outcome<GetBootstrapBrokersResult, Aws::Client::AWSError<KafkaErrors>> GetBootstrapBrokersOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, Aws::Client::AWSError<KafkaErrors>> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationsResult, Aws::Client::AWSError<KafkaErrors>> ListConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListNodesResult, Aws::Client::AWSError<KafkaErrors>> ListNodesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<KafkaErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<KafkaErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<KafkaErrors>> UntagResourceOutcome;

        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeConfigurationOutcome> DescribeConfigurationOutcomeCallable;
        typedef std::future<DescribeConfigurationRevisionOutcome> DescribeConfigurationRevisionOutcomeCallable;
        typedef std::future<GetBootstrapBrokersOutcome> GetBootstrapBrokersOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
        typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class KafkaClient;

    typedef std::function<void(const KafkaClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::CreateConfigurationRequest&, const Model::CreateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeConfigurationRequest&, const Model::DescribeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeConfigurationRevisionRequest&, const Model::DescribeConfigurationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRevisionResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::GetBootstrapBrokersRequest&, const Model::GetBootstrapBrokersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBootstrapBrokersResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>The operations for managing an Amazon MSK cluster.</p>
   */
  class AWS_KAFKA_API KafkaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KafkaClient();

        inline virtual const char* GetServiceClientName() const override { return "Kafka"; }


        /**
         * <p>Creates a new MSK cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new MSK cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * <p>Creates a new MSK cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new MSK configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;

        /**
         * <p>Creates a new MSK configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const Model::CreateConfigurationRequest& request) const;

        /**
         * <p>Creates a new MSK configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the MSK cluster specified by the Amazon Resource Name (ARN) in the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the MSK cluster specified by the Amazon Resource Name (ARN) in the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * <p>Deletes the MSK cluster specified by the Amazon Resource Name (ARN) in the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the MSK cluster whose Amazon Resource Name (ARN) is
         * specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns a description of the MSK cluster whose Amazon Resource Name (ARN) is
         * specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * <p>Returns a description of the MSK cluster whose Amazon Resource Name (ARN) is
         * specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of this MSK configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;

        /**
         * <p>Returns a description of this MSK configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const Model::DescribeConfigurationRequest& request) const;

        /**
         * <p>Returns a description of this MSK configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAsync(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of this revision of the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * <p>Returns a description of this revision of the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * <p>Returns a description of this revision of the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRevisionAsync(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of brokers that a client application can use to
         * bootstrap.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetBootstrapBrokers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBootstrapBrokersOutcome GetBootstrapBrokers(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * <p>A list of brokers that a client application can use to
         * bootstrap.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetBootstrapBrokers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBootstrapBrokersOutcomeCallable GetBootstrapBrokersCallable(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * <p>A list of brokers that a client application can use to
         * bootstrap.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetBootstrapBrokers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBootstrapBrokersAsync(const Model::GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of clusters in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of clusters in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * <p>Returns a list of clusters in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all the MSK configurations in this Region for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of all the MSK configurations in this Region for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of all the MSK configurations in this Region for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationsAsync(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the broker nodes in the cluster.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns a list of the broker nodes in the cluster.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * <p>Returns a list of the broker nodes in the cluster.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tag a resource with given tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tag a resource with given tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tag a resource with given tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags of a resource by given tag keys.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags of a resource by given tag keys.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags of a resource by given tag keys.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationAsyncHelper(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationAsyncHelper(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRevisionAsyncHelper(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBootstrapBrokersAsyncHelper(const Model::GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationsAsyncHelper(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNodesAsyncHelper(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Kafka
} // namespace Aws
