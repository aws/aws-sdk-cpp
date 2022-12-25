/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/KafkaServiceClientModel.h>

namespace Aws
{
namespace Kafka
{
  /**
   * 
               <p>The operations for managing an Amazon MSK cluster.</p>
      
   *      
   */
  class AWS_KAFKA_API KafkaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KafkaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Kafka::KafkaClientConfiguration& clientConfiguration = Aws::Kafka::KafkaClientConfiguration(),
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Kafka::KafkaClientConfiguration& clientConfiguration = Aws::Kafka::KafkaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Kafka::KafkaClientConfiguration& clientConfiguration = Aws::Kafka::KafkaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KafkaClient();

        /**
         * 
            <p>Associates one or more Scram Secrets with an Amazon MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchAssociateScramSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateScramSecretOutcome BatchAssociateScramSecret(const Model::BatchAssociateScramSecretRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateScramSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateScramSecretOutcomeCallable BatchAssociateScramSecretCallable(const Model::BatchAssociateScramSecretRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateScramSecretAsync(const Model::BatchAssociateScramSecretRequest& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK cluster.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK cluster.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateClusterV2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterV2Outcome CreateClusterV2(const Model::CreateClusterV2Request& request) const;

        /**
         * A Callable wrapper for CreateClusterV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterV2OutcomeCallable CreateClusterV2Callable(const Model::CreateClusterV2Request& request) const;

        /**
         * An Async wrapper for CreateClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterV2Async(const Model::CreateClusterV2Request& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK configuration.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const Model::CreateConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Deletes the MSK cluster specified by the Amazon Resource Name
         * (ARN) in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Deletes an MSK Configuration.</p>
         <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationOutcome DeleteConfiguration(const Model::DeleteConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationOutcomeCallable DeleteConfigurationCallable(const Model::DeleteConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationAsync(const Model::DeleteConfigurationRequest& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the MSK cluster whose Amazon Resource
         * Name (ARN) is specified in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the MSK cluster whose Amazon Resource
         * Name (ARN) is specified in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeClusterV2">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterV2Outcome DescribeClusterV2(const Model::DescribeClusterV2Request& request) const;

        /**
         * A Callable wrapper for DescribeClusterV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterV2OutcomeCallable DescribeClusterV2Callable(const Model::DescribeClusterV2Request& request) const;

        /**
         * An Async wrapper for DescribeClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterV2Async(const Model::DescribeClusterV2Request& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the cluster operation specified by the
         * ARN.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeClusterOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOperationOutcome DescribeClusterOperation(const Model::DescribeClusterOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOperationOutcomeCallable DescribeClusterOperationCallable(const Model::DescribeClusterOperationRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterOperationAsync(const Model::DescribeClusterOperationRequest& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of this MSK configuration.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const Model::DescribeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAsync(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of this revision of the
         * configuration.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRevisionAsync(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Disassociates one or more Scram Secrets from an Amazon MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchDisassociateScramSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateScramSecretOutcome BatchDisassociateScramSecret(const Model::BatchDisassociateScramSecretRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateScramSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateScramSecretOutcomeCallable BatchDisassociateScramSecretCallable(const Model::BatchDisassociateScramSecretRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateScramSecretAsync(const Model::BatchDisassociateScramSecretRequest& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>A list of brokers that a client application can use to
         * bootstrap.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetBootstrapBrokers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBootstrapBrokersOutcome GetBootstrapBrokers(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * A Callable wrapper for GetBootstrapBrokers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBootstrapBrokersOutcomeCallable GetBootstrapBrokersCallable(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * An Async wrapper for GetBootstrapBrokers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBootstrapBrokersAsync(const Model::GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Gets the Apache Kafka versions to which you can update the MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetCompatibleKafkaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleKafkaVersionsOutcome GetCompatibleKafkaVersions(const Model::GetCompatibleKafkaVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCompatibleKafkaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCompatibleKafkaVersionsOutcomeCallable GetCompatibleKafkaVersionsCallable(const Model::GetCompatibleKafkaVersionsRequest& request) const;

        /**
         * An Async wrapper for GetCompatibleKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCompatibleKafkaVersionsAsync(const Model::GetCompatibleKafkaVersionsRequest& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the operations that have been performed on
         * the specified MSK cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusterOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterOperationsOutcome ListClusterOperations(const Model::ListClusterOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListClusterOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClusterOperationsOutcomeCallable ListClusterOperationsCallable(const Model::ListClusterOperationsRequest& request) const;

        /**
         * An Async wrapper for ListClusterOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClusterOperationsAsync(const Model::ListClusterOperationsRequest& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK clusters in the current
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK clusters in the current
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClustersV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersV2Outcome ListClustersV2(const Model::ListClustersV2Request& request) const;

        /**
         * A Callable wrapper for ListClustersV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersV2OutcomeCallable ListClustersV2Callable(const Model::ListClustersV2Request& request) const;

        /**
         * An Async wrapper for ListClustersV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersV2Async(const Model::ListClustersV2Request& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK configurations in this
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationRevisionsOutcome ListConfigurationRevisions(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationRevisionsOutcomeCallable ListConfigurationRevisionsCallable(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationRevisionsAsync(const Model::ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK configurations in this
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationsAsync(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of Apache Kafka versions.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListKafkaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKafkaVersionsOutcome ListKafkaVersions(const Model::ListKafkaVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListKafkaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKafkaVersionsOutcomeCallable ListKafkaVersionsCallable(const Model::ListKafkaVersionsRequest& request) const;

        /**
         * An Async wrapper for ListKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKafkaVersionsAsync(const Model::ListKafkaVersionsRequest& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the broker nodes in the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListNodes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the Scram Secrets associated with an Amazon
         * MSK cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListScramSecrets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScramSecretsOutcome ListScramSecrets(const Model::ListScramSecretsRequest& request) const;

        /**
         * A Callable wrapper for ListScramSecrets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScramSecretsOutcomeCallable ListScramSecretsCallable(const Model::ListScramSecretsRequest& request) const;

        /**
         * An Async wrapper for ListScramSecrets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScramSecretsAsync(const Model::ListScramSecretsRequest& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the tags associated with the specified
         * resource.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Reboots brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RebootBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;

        /**
         * A Callable wrapper for RebootBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootBrokerOutcomeCallable RebootBrokerCallable(const Model::RebootBrokerRequest& request) const;

        /**
         * An Async wrapper for RebootBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootBrokerAsync(const Model::RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Adds tags to the specified MSK resource.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Removes the tags associated with the keys that are provided in
         * the query.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the number of broker nodes in the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerCount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerCountOutcome UpdateBrokerCount(const Model::UpdateBrokerCountRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerCountOutcomeCallable UpdateBrokerCountCallable(const Model::UpdateBrokerCountRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerCountAsync(const Model::UpdateBrokerCountRequest& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates EC2 instance type.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerTypeOutcome UpdateBrokerType(const Model::UpdateBrokerTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerTypeOutcomeCallable UpdateBrokerTypeCallable(const Model::UpdateBrokerTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerTypeAsync(const Model::UpdateBrokerTypeRequest& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the EBS storage associated with MSK brokers.</p>
       
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerStorageOutcome UpdateBrokerStorage(const Model::UpdateBrokerStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerStorageOutcomeCallable UpdateBrokerStorageCallable(const Model::UpdateBrokerStorageRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerStorageAsync(const Model::UpdateBrokerStorageRequest& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates an MSK configuration.</p>
         <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const Model::UpdateConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationAsync(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the cluster's connectivity configuration.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateConnectivity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityOutcome UpdateConnectivity(const Model::UpdateConnectivityRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectivityOutcomeCallable UpdateConnectivityCallable(const Model::UpdateConnectivityRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectivityAsync(const Model::UpdateConnectivityRequest& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the cluster with the configuration that is specified in
         * the request body.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateClusterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterConfigurationOutcome UpdateClusterConfiguration(const Model::UpdateClusterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterConfigurationOutcomeCallable UpdateClusterConfigurationCallable(const Model::UpdateClusterConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateClusterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterConfigurationAsync(const Model::UpdateClusterConfigurationRequest& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the Apache Kafka version for the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateClusterKafkaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterKafkaVersionOutcome UpdateClusterKafkaVersion(const Model::UpdateClusterKafkaVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterKafkaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterKafkaVersionOutcomeCallable UpdateClusterKafkaVersionCallable(const Model::UpdateClusterKafkaVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateClusterKafkaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterKafkaVersionAsync(const Model::UpdateClusterKafkaVersionRequest& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the monitoring settings for the cluster. You can use
         * this operation to specify which Apache Kafka metrics you want Amazon MSK to send
         * to Amazon CloudWatch. You can also specify settings for open monitoring with
         * Prometheus.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateMonitoring">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringOutcome UpdateMonitoring(const Model::UpdateMonitoringRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoring that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMonitoringOutcomeCallable UpdateMonitoringCallable(const Model::UpdateMonitoringRequest& request) const;

        /**
         * An Async wrapper for UpdateMonitoring that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMonitoringAsync(const Model::UpdateMonitoringRequest& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the security settings for the cluster. You can use this
         * operation to specify encryption and authentication on existing clusters.</p>
   
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateSecurity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityOutcome UpdateSecurity(const Model::UpdateSecurityRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityOutcomeCallable UpdateSecurityCallable(const Model::UpdateSecurityRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityAsync(const Model::UpdateSecurityRequest& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates cluster broker volume size (or) sets cluster storage mode to
         * TIERED.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStorageOutcome UpdateStorage(const Model::UpdateStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStorageOutcomeCallable UpdateStorageCallable(const Model::UpdateStorageRequest& request) const;

        /**
         * An Async wrapper for UpdateStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStorageAsync(const Model::UpdateStorageRequest& request, const UpdateStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KafkaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KafkaClient>;
      void init(const KafkaClientConfiguration& clientConfiguration);

      KafkaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KafkaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Kafka
} // namespace Aws
