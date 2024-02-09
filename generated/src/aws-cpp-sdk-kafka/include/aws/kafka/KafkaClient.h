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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KafkaClientConfiguration ClientConfigurationType;
      typedef KafkaEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Kafka::KafkaClientConfiguration& clientConfiguration = Aws::Kafka::KafkaClientConfiguration(),
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Kafka::KafkaClientConfiguration& clientConfiguration = Aws::Kafka::KafkaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<KafkaEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchAssociateScramSecretRequestT = Model::BatchAssociateScramSecretRequest>
        Model::BatchAssociateScramSecretOutcomeCallable BatchAssociateScramSecretCallable(const BatchAssociateScramSecretRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::BatchAssociateScramSecret, request);
        }

        /**
         * An Async wrapper for BatchAssociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateScramSecretRequestT = Model::BatchAssociateScramSecretRequest>
        void BatchAssociateScramSecretAsync(const BatchAssociateScramSecretRequestT& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::BatchAssociateScramSecret, request, handler, context);
        }

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
        template<typename BatchDisassociateScramSecretRequestT = Model::BatchDisassociateScramSecretRequest>
        Model::BatchDisassociateScramSecretOutcomeCallable BatchDisassociateScramSecretCallable(const BatchDisassociateScramSecretRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::BatchDisassociateScramSecret, request);
        }

        /**
         * An Async wrapper for BatchDisassociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateScramSecretRequestT = Model::BatchDisassociateScramSecretRequest>
        void BatchDisassociateScramSecretAsync(const BatchDisassociateScramSecretRequestT& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::BatchDisassociateScramSecret, request, handler, context);
        }

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
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::CreateCluster, request, handler, context);
        }

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
        template<typename CreateClusterV2RequestT = Model::CreateClusterV2Request>
        Model::CreateClusterV2OutcomeCallable CreateClusterV2Callable(const CreateClusterV2RequestT& request) const
        {
            return SubmitCallable(&KafkaClient::CreateClusterV2, request);
        }

        /**
         * An Async wrapper for CreateClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterV2RequestT = Model::CreateClusterV2Request>
        void CreateClusterV2Async(const CreateClusterV2RequestT& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::CreateClusterV2, request, handler, context);
        }

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
        template<typename CreateConfigurationRequestT = Model::CreateConfigurationRequest>
        Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const CreateConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::CreateConfiguration, request);
        }

        /**
         * An Async wrapper for CreateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationRequestT = Model::CreateConfigurationRequest>
        void CreateConfigurationAsync(const CreateConfigurationRequestT& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::CreateConfiguration, request, handler, context);
        }

        /**
         * <p>Creates the replicator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateReplicator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicatorOutcome CreateReplicator(const Model::CreateReplicatorRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicatorRequestT = Model::CreateReplicatorRequest>
        Model::CreateReplicatorOutcomeCallable CreateReplicatorCallable(const CreateReplicatorRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::CreateReplicator, request);
        }

        /**
         * An Async wrapper for CreateReplicator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicatorRequestT = Model::CreateReplicatorRequest>
        void CreateReplicatorAsync(const CreateReplicatorRequestT& request, const CreateReplicatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::CreateReplicator, request, handler, context);
        }

        /**
         * 
            <p>Creates a new MSK VPC connection.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateVpcConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcConnectionOutcome CreateVpcConnection(const Model::CreateVpcConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcConnectionRequestT = Model::CreateVpcConnectionRequest>
        Model::CreateVpcConnectionOutcomeCallable CreateVpcConnectionCallable(const CreateVpcConnectionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::CreateVpcConnection, request);
        }

        /**
         * An Async wrapper for CreateVpcConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcConnectionRequestT = Model::CreateVpcConnectionRequest>
        void CreateVpcConnectionAsync(const CreateVpcConnectionRequestT& request, const CreateVpcConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::CreateVpcConnection, request, handler, context);
        }

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
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DeleteCluster, request, handler, context);
        }

        /**
         * 
            <p>Deletes the MSK cluster policy specified by the Amazon Resource
         * Name (ARN) in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteClusterPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterPolicyOutcome DeleteClusterPolicy(const Model::DeleteClusterPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteClusterPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterPolicyRequestT = Model::DeleteClusterPolicyRequest>
        Model::DeleteClusterPolicyOutcomeCallable DeleteClusterPolicyCallable(const DeleteClusterPolicyRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DeleteClusterPolicy, request);
        }

        /**
         * An Async wrapper for DeleteClusterPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterPolicyRequestT = Model::DeleteClusterPolicyRequest>
        void DeleteClusterPolicyAsync(const DeleteClusterPolicyRequestT& request, const DeleteClusterPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DeleteClusterPolicy, request, handler, context);
        }

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
        template<typename DeleteConfigurationRequestT = Model::DeleteConfigurationRequest>
        Model::DeleteConfigurationOutcomeCallable DeleteConfigurationCallable(const DeleteConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DeleteConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationRequestT = Model::DeleteConfigurationRequest>
        void DeleteConfigurationAsync(const DeleteConfigurationRequestT& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DeleteConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a replicator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteReplicator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicatorOutcome DeleteReplicator(const Model::DeleteReplicatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicatorRequestT = Model::DeleteReplicatorRequest>
        Model::DeleteReplicatorOutcomeCallable DeleteReplicatorCallable(const DeleteReplicatorRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DeleteReplicator, request);
        }

        /**
         * An Async wrapper for DeleteReplicator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicatorRequestT = Model::DeleteReplicatorRequest>
        void DeleteReplicatorAsync(const DeleteReplicatorRequestT& request, const DeleteReplicatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DeleteReplicator, request, handler, context);
        }

        /**
         * 
            <p>Deletes a MSK VPC connection.</p>
         <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteVpcConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcConnectionOutcome DeleteVpcConnection(const Model::DeleteVpcConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcConnectionRequestT = Model::DeleteVpcConnectionRequest>
        Model::DeleteVpcConnectionOutcomeCallable DeleteVpcConnectionCallable(const DeleteVpcConnectionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DeleteVpcConnection, request);
        }

        /**
         * An Async wrapper for DeleteVpcConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcConnectionRequestT = Model::DeleteVpcConnectionRequest>
        void DeleteVpcConnectionAsync(const DeleteVpcConnectionRequestT& request, const DeleteVpcConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DeleteVpcConnection, request, handler, context);
        }

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
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeCluster, request, handler, context);
        }

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
        template<typename DescribeClusterOperationRequestT = Model::DescribeClusterOperationRequest>
        Model::DescribeClusterOperationOutcomeCallable DescribeClusterOperationCallable(const DescribeClusterOperationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeClusterOperation, request);
        }

        /**
         * An Async wrapper for DescribeClusterOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterOperationRequestT = Model::DescribeClusterOperationRequest>
        void DescribeClusterOperationAsync(const DescribeClusterOperationRequestT& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeClusterOperation, request, handler, context);
        }

        /**
         * 
            <p>Returns a description of the cluster operation specified by the
         * ARN.</p>
<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeClusterOperationV2">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOperationV2Outcome DescribeClusterOperationV2(const Model::DescribeClusterOperationV2Request& request) const;

        /**
         * A Callable wrapper for DescribeClusterOperationV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterOperationV2RequestT = Model::DescribeClusterOperationV2Request>
        Model::DescribeClusterOperationV2OutcomeCallable DescribeClusterOperationV2Callable(const DescribeClusterOperationV2RequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeClusterOperationV2, request);
        }

        /**
         * An Async wrapper for DescribeClusterOperationV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterOperationV2RequestT = Model::DescribeClusterOperationV2Request>
        void DescribeClusterOperationV2Async(const DescribeClusterOperationV2RequestT& request, const DescribeClusterOperationV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeClusterOperationV2, request, handler, context);
        }

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
        template<typename DescribeClusterV2RequestT = Model::DescribeClusterV2Request>
        Model::DescribeClusterV2OutcomeCallable DescribeClusterV2Callable(const DescribeClusterV2RequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeClusterV2, request);
        }

        /**
         * An Async wrapper for DescribeClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterV2RequestT = Model::DescribeClusterV2Request>
        void DescribeClusterV2Async(const DescribeClusterV2RequestT& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeClusterV2, request, handler, context);
        }

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
        template<typename DescribeConfigurationRequestT = Model::DescribeConfigurationRequest>
        Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const DescribeConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRequestT = Model::DescribeConfigurationRequest>
        void DescribeConfigurationAsync(const DescribeConfigurationRequestT& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeConfiguration, request, handler, context);
        }

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
        template<typename DescribeConfigurationRevisionRequestT = Model::DescribeConfigurationRevisionRequest>
        Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const DescribeConfigurationRevisionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeConfigurationRevision, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRevisionRequestT = Model::DescribeConfigurationRevisionRequest>
        void DescribeConfigurationRevisionAsync(const DescribeConfigurationRevisionRequestT& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeConfigurationRevision, request, handler, context);
        }

        /**
         * <p>Describes a replicator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeReplicator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicatorOutcome DescribeReplicator(const Model::DescribeReplicatorRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplicatorRequestT = Model::DescribeReplicatorRequest>
        Model::DescribeReplicatorOutcomeCallable DescribeReplicatorCallable(const DescribeReplicatorRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeReplicator, request);
        }

        /**
         * An Async wrapper for DescribeReplicator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicatorRequestT = Model::DescribeReplicatorRequest>
        void DescribeReplicatorAsync(const DescribeReplicatorRequestT& request, const DescribeReplicatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeReplicator, request, handler, context);
        }

        /**
         * 
            <p>Returns a description of this MSK VPC connection.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeVpcConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcConnectionOutcome DescribeVpcConnection(const Model::DescribeVpcConnectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVpcConnectionRequestT = Model::DescribeVpcConnectionRequest>
        Model::DescribeVpcConnectionOutcomeCallable DescribeVpcConnectionCallable(const DescribeVpcConnectionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::DescribeVpcConnection, request);
        }

        /**
         * An Async wrapper for DescribeVpcConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcConnectionRequestT = Model::DescribeVpcConnectionRequest>
        void DescribeVpcConnectionAsync(const DescribeVpcConnectionRequestT& request, const DescribeVpcConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::DescribeVpcConnection, request, handler, context);
        }

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
        template<typename GetBootstrapBrokersRequestT = Model::GetBootstrapBrokersRequest>
        Model::GetBootstrapBrokersOutcomeCallable GetBootstrapBrokersCallable(const GetBootstrapBrokersRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::GetBootstrapBrokers, request);
        }

        /**
         * An Async wrapper for GetBootstrapBrokers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBootstrapBrokersRequestT = Model::GetBootstrapBrokersRequest>
        void GetBootstrapBrokersAsync(const GetBootstrapBrokersRequestT& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::GetBootstrapBrokers, request, handler, context);
        }

        /**
         * 
            <p>Get the MSK cluster policy specified by the Amazon Resource Name
         * (ARN) in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetClusterPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClusterPolicyOutcome GetClusterPolicy(const Model::GetClusterPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetClusterPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterPolicyRequestT = Model::GetClusterPolicyRequest>
        Model::GetClusterPolicyOutcomeCallable GetClusterPolicyCallable(const GetClusterPolicyRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::GetClusterPolicy, request);
        }

        /**
         * An Async wrapper for GetClusterPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterPolicyRequestT = Model::GetClusterPolicyRequest>
        void GetClusterPolicyAsync(const GetClusterPolicyRequestT& request, const GetClusterPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::GetClusterPolicy, request, handler, context);
        }

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
        template<typename GetCompatibleKafkaVersionsRequestT = Model::GetCompatibleKafkaVersionsRequest>
        Model::GetCompatibleKafkaVersionsOutcomeCallable GetCompatibleKafkaVersionsCallable(const GetCompatibleKafkaVersionsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::GetCompatibleKafkaVersions, request);
        }

        /**
         * An Async wrapper for GetCompatibleKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCompatibleKafkaVersionsRequestT = Model::GetCompatibleKafkaVersionsRequest>
        void GetCompatibleKafkaVersionsAsync(const GetCompatibleKafkaVersionsRequestT& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::GetCompatibleKafkaVersions, request, handler, context);
        }

        /**
         * 
            <p>Returns a list of all the VPC connections in this Region.</p>
  
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClientVpcConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClientVpcConnectionsOutcome ListClientVpcConnections(const Model::ListClientVpcConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListClientVpcConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClientVpcConnectionsRequestT = Model::ListClientVpcConnectionsRequest>
        Model::ListClientVpcConnectionsOutcomeCallable ListClientVpcConnectionsCallable(const ListClientVpcConnectionsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListClientVpcConnections, request);
        }

        /**
         * An Async wrapper for ListClientVpcConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClientVpcConnectionsRequestT = Model::ListClientVpcConnectionsRequest>
        void ListClientVpcConnectionsAsync(const ListClientVpcConnectionsRequestT& request, const ListClientVpcConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListClientVpcConnections, request, handler, context);
        }

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
        template<typename ListClusterOperationsRequestT = Model::ListClusterOperationsRequest>
        Model::ListClusterOperationsOutcomeCallable ListClusterOperationsCallable(const ListClusterOperationsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListClusterOperations, request);
        }

        /**
         * An Async wrapper for ListClusterOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClusterOperationsRequestT = Model::ListClusterOperationsRequest>
        void ListClusterOperationsAsync(const ListClusterOperationsRequestT& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListClusterOperations, request, handler, context);
        }

        /**
         * 
            <p>Returns a list of all the operations that have been performed on
         * the specified MSK cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusterOperationsV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterOperationsV2Outcome ListClusterOperationsV2(const Model::ListClusterOperationsV2Request& request) const;

        /**
         * A Callable wrapper for ListClusterOperationsV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClusterOperationsV2RequestT = Model::ListClusterOperationsV2Request>
        Model::ListClusterOperationsV2OutcomeCallable ListClusterOperationsV2Callable(const ListClusterOperationsV2RequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListClusterOperationsV2, request);
        }

        /**
         * An Async wrapper for ListClusterOperationsV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClusterOperationsV2RequestT = Model::ListClusterOperationsV2Request>
        void ListClusterOperationsV2Async(const ListClusterOperationsV2RequestT& request, const ListClusterOperationsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListClusterOperationsV2, request, handler, context);
        }

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
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListClusters, request, handler, context);
        }

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
        template<typename ListClustersV2RequestT = Model::ListClustersV2Request>
        Model::ListClustersV2OutcomeCallable ListClustersV2Callable(const ListClustersV2RequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListClustersV2, request);
        }

        /**
         * An Async wrapper for ListClustersV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersV2RequestT = Model::ListClustersV2Request>
        void ListClustersV2Async(const ListClustersV2RequestT& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListClustersV2, request, handler, context);
        }

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
        template<typename ListConfigurationRevisionsRequestT = Model::ListConfigurationRevisionsRequest>
        Model::ListConfigurationRevisionsOutcomeCallable ListConfigurationRevisionsCallable(const ListConfigurationRevisionsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListConfigurationRevisions, request);
        }

        /**
         * An Async wrapper for ListConfigurationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationRevisionsRequestT = Model::ListConfigurationRevisionsRequest>
        void ListConfigurationRevisionsAsync(const ListConfigurationRevisionsRequestT& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListConfigurationRevisions, request, handler, context);
        }

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
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const ListConfigurationsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListConfigurations, request);
        }

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        void ListConfigurationsAsync(const ListConfigurationsRequestT& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListConfigurations, request, handler, context);
        }

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
        template<typename ListKafkaVersionsRequestT = Model::ListKafkaVersionsRequest>
        Model::ListKafkaVersionsOutcomeCallable ListKafkaVersionsCallable(const ListKafkaVersionsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListKafkaVersions, request);
        }

        /**
         * An Async wrapper for ListKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKafkaVersionsRequestT = Model::ListKafkaVersionsRequest>
        void ListKafkaVersionsAsync(const ListKafkaVersionsRequestT& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListKafkaVersions, request, handler, context);
        }

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
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        Model::ListNodesOutcomeCallable ListNodesCallable(const ListNodesRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListNodes, request);
        }

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        void ListNodesAsync(const ListNodesRequestT& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListNodes, request, handler, context);
        }

        /**
         * <p>Lists the replicators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListReplicators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplicatorsOutcome ListReplicators(const Model::ListReplicatorsRequest& request) const;

        /**
         * A Callable wrapper for ListReplicators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReplicatorsRequestT = Model::ListReplicatorsRequest>
        Model::ListReplicatorsOutcomeCallable ListReplicatorsCallable(const ListReplicatorsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListReplicators, request);
        }

        /**
         * An Async wrapper for ListReplicators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReplicatorsRequestT = Model::ListReplicatorsRequest>
        void ListReplicatorsAsync(const ListReplicatorsRequestT& request, const ListReplicatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListReplicators, request, handler, context);
        }

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
        template<typename ListScramSecretsRequestT = Model::ListScramSecretsRequest>
        Model::ListScramSecretsOutcomeCallable ListScramSecretsCallable(const ListScramSecretsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListScramSecrets, request);
        }

        /**
         * An Async wrapper for ListScramSecrets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScramSecretsRequestT = Model::ListScramSecretsRequest>
        void ListScramSecretsAsync(const ListScramSecretsRequestT& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListScramSecrets, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListTagsForResource, request, handler, context);
        }

        /**
         * 
            <p>Returns a list of all the VPC connections in this Region.</p>
  
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListVpcConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcConnectionsOutcome ListVpcConnections(const Model::ListVpcConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcConnectionsRequestT = Model::ListVpcConnectionsRequest>
        Model::ListVpcConnectionsOutcomeCallable ListVpcConnectionsCallable(const ListVpcConnectionsRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::ListVpcConnections, request);
        }

        /**
         * An Async wrapper for ListVpcConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcConnectionsRequestT = Model::ListVpcConnectionsRequest>
        void ListVpcConnectionsAsync(const ListVpcConnectionsRequestT& request, const ListVpcConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::ListVpcConnections, request, handler, context);
        }

        /**
         * 
            <p>Creates or updates the MSK cluster policy specified by the
         * cluster Amazon Resource Name (ARN) in the request.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/PutClusterPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutClusterPolicyOutcome PutClusterPolicy(const Model::PutClusterPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutClusterPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutClusterPolicyRequestT = Model::PutClusterPolicyRequest>
        Model::PutClusterPolicyOutcomeCallable PutClusterPolicyCallable(const PutClusterPolicyRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::PutClusterPolicy, request);
        }

        /**
         * An Async wrapper for PutClusterPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutClusterPolicyRequestT = Model::PutClusterPolicyRequest>
        void PutClusterPolicyAsync(const PutClusterPolicyRequestT& request, const PutClusterPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::PutClusterPolicy, request, handler, context);
        }

        /**
         * Reboots brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RebootBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;

        /**
         * A Callable wrapper for RebootBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootBrokerRequestT = Model::RebootBrokerRequest>
        Model::RebootBrokerOutcomeCallable RebootBrokerCallable(const RebootBrokerRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::RebootBroker, request);
        }

        /**
         * An Async wrapper for RebootBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootBrokerRequestT = Model::RebootBrokerRequest>
        void RebootBrokerAsync(const RebootBrokerRequestT& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::RebootBroker, request, handler, context);
        }

        /**
         * 
            <p>Returns empty response.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RejectClientVpcConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectClientVpcConnectionOutcome RejectClientVpcConnection(const Model::RejectClientVpcConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectClientVpcConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectClientVpcConnectionRequestT = Model::RejectClientVpcConnectionRequest>
        Model::RejectClientVpcConnectionOutcomeCallable RejectClientVpcConnectionCallable(const RejectClientVpcConnectionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::RejectClientVpcConnection, request);
        }

        /**
         * An Async wrapper for RejectClientVpcConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectClientVpcConnectionRequestT = Model::RejectClientVpcConnectionRequest>
        void RejectClientVpcConnectionAsync(const RejectClientVpcConnectionRequestT& request, const RejectClientVpcConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::RejectClientVpcConnection, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateBrokerCountRequestT = Model::UpdateBrokerCountRequest>
        Model::UpdateBrokerCountOutcomeCallable UpdateBrokerCountCallable(const UpdateBrokerCountRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateBrokerCount, request);
        }

        /**
         * An Async wrapper for UpdateBrokerCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBrokerCountRequestT = Model::UpdateBrokerCountRequest>
        void UpdateBrokerCountAsync(const UpdateBrokerCountRequestT& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateBrokerCount, request, handler, context);
        }

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
        template<typename UpdateBrokerStorageRequestT = Model::UpdateBrokerStorageRequest>
        Model::UpdateBrokerStorageOutcomeCallable UpdateBrokerStorageCallable(const UpdateBrokerStorageRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateBrokerStorage, request);
        }

        /**
         * An Async wrapper for UpdateBrokerStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBrokerStorageRequestT = Model::UpdateBrokerStorageRequest>
        void UpdateBrokerStorageAsync(const UpdateBrokerStorageRequestT& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateBrokerStorage, request, handler, context);
        }

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
        template<typename UpdateBrokerTypeRequestT = Model::UpdateBrokerTypeRequest>
        Model::UpdateBrokerTypeOutcomeCallable UpdateBrokerTypeCallable(const UpdateBrokerTypeRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateBrokerType, request);
        }

        /**
         * An Async wrapper for UpdateBrokerType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBrokerTypeRequestT = Model::UpdateBrokerTypeRequest>
        void UpdateBrokerTypeAsync(const UpdateBrokerTypeRequestT& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateBrokerType, request, handler, context);
        }

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
        template<typename UpdateClusterConfigurationRequestT = Model::UpdateClusterConfigurationRequest>
        Model::UpdateClusterConfigurationOutcomeCallable UpdateClusterConfigurationCallable(const UpdateClusterConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateClusterConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateClusterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterConfigurationRequestT = Model::UpdateClusterConfigurationRequest>
        void UpdateClusterConfigurationAsync(const UpdateClusterConfigurationRequestT& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateClusterConfiguration, request, handler, context);
        }

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
        template<typename UpdateClusterKafkaVersionRequestT = Model::UpdateClusterKafkaVersionRequest>
        Model::UpdateClusterKafkaVersionOutcomeCallable UpdateClusterKafkaVersionCallable(const UpdateClusterKafkaVersionRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateClusterKafkaVersion, request);
        }

        /**
         * An Async wrapper for UpdateClusterKafkaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterKafkaVersionRequestT = Model::UpdateClusterKafkaVersionRequest>
        void UpdateClusterKafkaVersionAsync(const UpdateClusterKafkaVersionRequestT& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateClusterKafkaVersion, request, handler, context);
        }

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
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const UpdateConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        void UpdateConfigurationAsync(const UpdateConfigurationRequestT& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateConfiguration, request, handler, context);
        }

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
        template<typename UpdateConnectivityRequestT = Model::UpdateConnectivityRequest>
        Model::UpdateConnectivityOutcomeCallable UpdateConnectivityCallable(const UpdateConnectivityRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateConnectivity, request);
        }

        /**
         * An Async wrapper for UpdateConnectivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectivityRequestT = Model::UpdateConnectivityRequest>
        void UpdateConnectivityAsync(const UpdateConnectivityRequestT& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateConnectivity, request, handler, context);
        }

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
        template<typename UpdateMonitoringRequestT = Model::UpdateMonitoringRequest>
        Model::UpdateMonitoringOutcomeCallable UpdateMonitoringCallable(const UpdateMonitoringRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateMonitoring, request);
        }

        /**
         * An Async wrapper for UpdateMonitoring that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitoringRequestT = Model::UpdateMonitoringRequest>
        void UpdateMonitoringAsync(const UpdateMonitoringRequestT& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateMonitoring, request, handler, context);
        }

        /**
         * <p>Updates replication info of a replicator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateReplicationInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationInfoOutcome UpdateReplicationInfo(const Model::UpdateReplicationInfoRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReplicationInfoRequestT = Model::UpdateReplicationInfoRequest>
        Model::UpdateReplicationInfoOutcomeCallable UpdateReplicationInfoCallable(const UpdateReplicationInfoRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateReplicationInfo, request);
        }

        /**
         * An Async wrapper for UpdateReplicationInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReplicationInfoRequestT = Model::UpdateReplicationInfoRequest>
        void UpdateReplicationInfoAsync(const UpdateReplicationInfoRequestT& request, const UpdateReplicationInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateReplicationInfo, request, handler, context);
        }

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
        template<typename UpdateSecurityRequestT = Model::UpdateSecurityRequest>
        Model::UpdateSecurityOutcomeCallable UpdateSecurityCallable(const UpdateSecurityRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateSecurity, request);
        }

        /**
         * An Async wrapper for UpdateSecurity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityRequestT = Model::UpdateSecurityRequest>
        void UpdateSecurityAsync(const UpdateSecurityRequestT& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateSecurity, request, handler, context);
        }

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
        template<typename UpdateStorageRequestT = Model::UpdateStorageRequest>
        Model::UpdateStorageOutcomeCallable UpdateStorageCallable(const UpdateStorageRequestT& request) const
        {
            return SubmitCallable(&KafkaClient::UpdateStorage, request);
        }

        /**
         * An Async wrapper for UpdateStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStorageRequestT = Model::UpdateStorageRequest>
        void UpdateStorageAsync(const UpdateStorageRequestT& request, const UpdateStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaClient::UpdateStorage, request, handler, context);
        }


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
