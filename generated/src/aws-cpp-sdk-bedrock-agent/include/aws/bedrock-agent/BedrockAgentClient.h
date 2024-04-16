/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>

namespace Aws
{
namespace BedrockAgent
{
  /**
   * <p>Describes the API operations for creating and managing Amazon Bedrock
   * agents.</p>
   */
  class AWS_BEDROCKAGENT_API BedrockAgentClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockAgentClientConfiguration ClientConfigurationType;
      typedef BedrockAgentEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration(),
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockAgentClient();

        /**
         * <p>Associates a knowledge base with an agent. If a knowledge base is associated
         * and its <code>indexState</code> is set to <code>Enabled</code>, the agent
         * queries the knowledge base for information to augment its response to the
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AssociateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAgentKnowledgeBaseOutcome AssociateAgentKnowledgeBase(const Model::AssociateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for AssociateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAgentKnowledgeBaseRequestT = Model::AssociateAgentKnowledgeBaseRequest>
        Model::AssociateAgentKnowledgeBaseOutcomeCallable AssociateAgentKnowledgeBaseCallable(const AssociateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::AssociateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for AssociateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAgentKnowledgeBaseRequestT = Model::AssociateAgentKnowledgeBaseRequest>
        void AssociateAgentKnowledgeBaseAsync(const AssociateAgentKnowledgeBaseRequestT& request, const AssociateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::AssociateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Creates an agent that orchestrates interactions between foundation models,
         * data sources, software applications, user conversations, and APIs to carry out
         * tasks to help customers.</p> <ul> <li> <p>Specify the following fields for
         * security purposes.</p> <ul> <li> <p> <code>agentResourceRoleArn</code> – The
         * Amazon Resource Name (ARN) of the role with permissions to invoke API operations
         * on an agent.</p> </li> <li> <p>(Optional) <code>customerEncryptionKeyArn</code>
         * – The Amazon Resource Name (ARN) of a KMS key to encrypt the creation of the
         * agent.</p> </li> <li> <p>(Optional) <code>idleSessionTTLinSeconds</code> –
         * Specify the number of seconds for which the agent should maintain session
         * information. After this time expires, the subsequent <code>InvokeAgent</code>
         * request begins a new session.</p> </li> </ul> </li> <li> <p>To override the
         * default prompt behavior for agent orchestration and to use advanced prompts,
         * include a <code>promptOverrideConfiguration</code> object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
         * prompts</a>.</p> </li> <li> <p>If you agent fails to be created, the response
         * returns a list of <code>failureReasons</code> alongside a list of
         * <code>recommendedActions</code> for you to troubleshoot.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest& request) const;

        /**
         * A Callable wrapper for CreateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        Model::CreateAgentOutcomeCallable CreateAgentCallable(const CreateAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgent, request);
        }

        /**
         * An Async wrapper for CreateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        void CreateAgentAsync(const CreateAgentRequestT& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgent, request, handler, context);
        }

        /**
         * <p>Creates an action group for an agent. An action group represents the actions
         * that an agent can carry out for the customer by defining the APIs that an agent
         * can call and the logic for calling them.</p> <p>To allow your agent to request
         * the user for additional information when trying to complete a task, add an
         * action group with the <code>parentActionGroupSignature</code> field set to
         * <code>AMAZON.UserInput</code>. You must leave the <code>description</code>,
         * <code>apiSchema</code>, and <code>actionGroupExecutor</code> fields blank for
         * this action group. During orchestration, if your agent determines that it needs
         * to invoke an API in an action group, but doesn't have enough information to
         * complete the API request, it will invoke this action group instead and return an
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Observation.html">Observation</a>
         * reprompting the user for more information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentActionGroupOutcome CreateAgentActionGroup(const Model::CreateAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentActionGroupRequestT = Model::CreateAgentActionGroupRequest>
        Model::CreateAgentActionGroupOutcomeCallable CreateAgentActionGroupCallable(const CreateAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgentActionGroup, request);
        }

        /**
         * An Async wrapper for CreateAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentActionGroupRequestT = Model::CreateAgentActionGroupRequest>
        void CreateAgentActionGroupAsync(const CreateAgentActionGroupRequestT& request, const CreateAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Creates an alias of an agent that can be used to deploy the
         * agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentAliasOutcome CreateAgentAlias(const Model::CreateAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentAliasRequestT = Model::CreateAgentAliasRequest>
        Model::CreateAgentAliasOutcomeCallable CreateAgentAliasCallable(const CreateAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgentAlias, request);
        }

        /**
         * An Async wrapper for CreateAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentAliasRequestT = Model::CreateAgentAliasRequest>
        void CreateAgentAliasAsync(const CreateAgentAliasRequestT& request, const CreateAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgentAlias, request, handler, context);
        }

        /**
         * <p>Sets up a data source to be added to a knowledge base.</p>  <p>You
         * can't change the <code>chunkingConfiguration</code> after you create the data
         * source.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Creates a knowledge base that contains data sources from which information
         * can be queried and used by LLMs. To create a knowledge base, you must first set
         * up your data sources and configure a supported vector store. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup.html">Set
         * up your data for ingestion</a>.</p>  <p>If you prefer to let Amazon
         * Bedrock create and manage a vector store for you in Amazon OpenSearch Service,
         * use the console. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-create">Create
         * a knowledge base</a>.</p>  <ul> <li> <p>Provide the <code>name</code> and
         * an optional <code>description</code>.</p> </li> <li> <p>Provide the Amazon
         * Resource Name (ARN) with permissions to create a knowledge base in the
         * <code>roleArn</code> field.</p> </li> <li> <p>Provide the embedding model to use
         * in the <code>embeddingModelArn</code> field in the
         * <code>knowledgeBaseConfiguration</code> object.</p> </li> <li> <p>Provide the
         * configuration for your vector store in the <code>storageConfiguration</code>
         * object.</p> <ul> <li> <p>For an Amazon OpenSearch Service database, use the
         * <code>opensearchServerlessConfiguration</code> object. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-oss.html">Create
         * a vector store in Amazon OpenSearch Service</a>.</p> </li> <li> <p>For an Amazon
         * Aurora database, use the <code>RdsConfiguration</code> object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-rds.html">Create
         * a vector store in Amazon Aurora</a>.</p> </li> <li> <p>For a Pinecone database,
         * use the <code>pineconeConfiguration</code> object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-pinecone.html">Create
         * a vector store in Pinecone</a>.</p> </li> <li> <p>For a Redis Enterprise Cloud
         * database, use the <code>redisEnterpriseCloudConfiguration</code> object. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-redis.html">Create
         * a vector store in Redis Enterprise Cloud</a>.</p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        Model::CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for CreateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        void CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequestT& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Deletes an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        Model::DeleteAgentOutcomeCallable DeleteAgentCallable(const DeleteAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgent, request);
        }

        /**
         * An Async wrapper for DeleteAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        void DeleteAgentAsync(const DeleteAgentRequestT& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgent, request, handler, context);
        }

        /**
         * <p>Deletes an action group in an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentActionGroupOutcome DeleteAgentActionGroup(const Model::DeleteAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentActionGroupRequestT = Model::DeleteAgentActionGroupRequest>
        Model::DeleteAgentActionGroupOutcomeCallable DeleteAgentActionGroupCallable(const DeleteAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentActionGroup, request);
        }

        /**
         * An Async wrapper for DeleteAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentActionGroupRequestT = Model::DeleteAgentActionGroupRequest>
        void DeleteAgentActionGroupAsync(const DeleteAgentActionGroupRequestT& request, const DeleteAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Deletes an alias of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentAliasOutcome DeleteAgentAlias(const Model::DeleteAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentAliasRequestT = Model::DeleteAgentAliasRequest>
        Model::DeleteAgentAliasOutcomeCallable DeleteAgentAliasCallable(const DeleteAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentAlias, request);
        }

        /**
         * An Async wrapper for DeleteAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentAliasRequestT = Model::DeleteAgentAliasRequest>
        void DeleteAgentAliasAsync(const DeleteAgentAliasRequestT& request, const DeleteAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentAlias, request, handler, context);
        }

        /**
         * <p>Deletes a version of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentVersionOutcome DeleteAgentVersion(const Model::DeleteAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentVersionRequestT = Model::DeleteAgentVersionRequest>
        Model::DeleteAgentVersionOutcomeCallable DeleteAgentVersionCallable(const DeleteAgentVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentVersion, request);
        }

        /**
         * An Async wrapper for DeleteAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentVersionRequestT = Model::DeleteAgentVersionRequest>
        void DeleteAgentVersionAsync(const DeleteAgentVersionRequestT& request, const DeleteAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentVersion, request, handler, context);
        }

        /**
         * <p>Deletes a data source from a knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes a knowledge base. Before deleting a knowledge base, you should
         * disassociate the knowledge base from any agents that it is associated with by
         * making a <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_DisassociateAgentKnowledgeBase.html">DisassociateAgentKnowledgeBase</a>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        Model::DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DeleteKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        void DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequestT& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Disassociates a knowledge base from an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DisassociateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAgentKnowledgeBaseOutcome DisassociateAgentKnowledgeBase(const Model::DisassociateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAgentKnowledgeBaseRequestT = Model::DisassociateAgentKnowledgeBaseRequest>
        Model::DisassociateAgentKnowledgeBaseOutcomeCallable DisassociateAgentKnowledgeBaseCallable(const DisassociateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DisassociateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DisassociateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAgentKnowledgeBaseRequestT = Model::DisassociateAgentKnowledgeBaseRequest>
        void DisassociateAgentKnowledgeBaseAsync(const DisassociateAgentKnowledgeBaseRequestT& request, const DisassociateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DisassociateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Gets information about an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentOutcome GetAgent(const Model::GetAgentRequest& request) const;

        /**
         * A Callable wrapper for GetAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentRequestT = Model::GetAgentRequest>
        Model::GetAgentOutcomeCallable GetAgentCallable(const GetAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgent, request);
        }

        /**
         * An Async wrapper for GetAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentRequestT = Model::GetAgentRequest>
        void GetAgentAsync(const GetAgentRequestT& request, const GetAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgent, request, handler, context);
        }

        /**
         * <p>Gets information about an action group for an agent.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentActionGroupOutcome GetAgentActionGroup(const Model::GetAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for GetAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentActionGroupRequestT = Model::GetAgentActionGroupRequest>
        Model::GetAgentActionGroupOutcomeCallable GetAgentActionGroupCallable(const GetAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentActionGroup, request);
        }

        /**
         * An Async wrapper for GetAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentActionGroupRequestT = Model::GetAgentActionGroupRequest>
        void GetAgentActionGroupAsync(const GetAgentActionGroupRequestT& request, const GetAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Gets information about an alias of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentAliasOutcome GetAgentAlias(const Model::GetAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for GetAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentAliasRequestT = Model::GetAgentAliasRequest>
        Model::GetAgentAliasOutcomeCallable GetAgentAliasCallable(const GetAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentAlias, request);
        }

        /**
         * An Async wrapper for GetAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentAliasRequestT = Model::GetAgentAliasRequest>
        void GetAgentAliasAsync(const GetAgentAliasRequestT& request, const GetAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentAlias, request, handler, context);
        }

        /**
         * <p>Gets information about a knowledge base associated with an
         * agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentKnowledgeBaseOutcome GetAgentKnowledgeBase(const Model::GetAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentKnowledgeBaseRequestT = Model::GetAgentKnowledgeBaseRequest>
        Model::GetAgentKnowledgeBaseOutcomeCallable GetAgentKnowledgeBaseCallable(const GetAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentKnowledgeBaseRequestT = Model::GetAgentKnowledgeBaseRequest>
        void GetAgentKnowledgeBaseAsync(const GetAgentKnowledgeBaseRequestT& request, const GetAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Gets details about a version of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentVersionOutcome GetAgentVersion(const Model::GetAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for GetAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentVersionRequestT = Model::GetAgentVersionRequest>
        Model::GetAgentVersionOutcomeCallable GetAgentVersionCallable(const GetAgentVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentVersion, request);
        }

        /**
         * An Async wrapper for GetAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentVersionRequestT = Model::GetAgentVersionRequest>
        void GetAgentVersionAsync(const GetAgentVersionRequestT& request, const GetAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentVersion, request, handler, context);
        }

        /**
         * <p>Gets information about a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Gets information about a ingestion job, in which a data source is added to a
         * knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngestionJobOutcome GetIngestionJob(const Model::GetIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for GetIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngestionJobRequestT = Model::GetIngestionJobRequest>
        Model::GetIngestionJobOutcomeCallable GetIngestionJobCallable(const GetIngestionJobRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetIngestionJob, request);
        }

        /**
         * An Async wrapper for GetIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngestionJobRequestT = Model::GetIngestionJobRequest>
        void GetIngestionJobAsync(const GetIngestionJobRequestT& request, const GetIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetIngestionJob, request, handler, context);
        }

        /**
         * <p>Gets information about a knoweldge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseOutcome GetKnowledgeBase(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        Model::GetKnowledgeBaseOutcomeCallable GetKnowledgeBaseCallable(const GetKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        void GetKnowledgeBaseAsync(const GetKnowledgeBaseRequestT& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Lists the action groups for an agent and information about each
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentActionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentActionGroupsOutcome ListAgentActionGroups(const Model::ListAgentActionGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentActionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentActionGroupsRequestT = Model::ListAgentActionGroupsRequest>
        Model::ListAgentActionGroupsOutcomeCallable ListAgentActionGroupsCallable(const ListAgentActionGroupsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentActionGroups, request);
        }

        /**
         * An Async wrapper for ListAgentActionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentActionGroupsRequestT = Model::ListAgentActionGroupsRequest>
        void ListAgentActionGroupsAsync(const ListAgentActionGroupsRequestT& request, const ListAgentActionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentActionGroups, request, handler, context);
        }

        /**
         * <p>Lists the aliases of an agent and information about each one.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentAliasesOutcome ListAgentAliases(const Model::ListAgentAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentAliasesRequestT = Model::ListAgentAliasesRequest>
        Model::ListAgentAliasesOutcomeCallable ListAgentAliasesCallable(const ListAgentAliasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentAliases, request);
        }

        /**
         * An Async wrapper for ListAgentAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentAliasesRequestT = Model::ListAgentAliasesRequest>
        void ListAgentAliasesAsync(const ListAgentAliasesRequestT& request, const ListAgentAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentAliases, request, handler, context);
        }

        /**
         * <p>Lists knowledge bases associated with an agent and information about each
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentKnowledgeBasesOutcome ListAgentKnowledgeBases(const Model::ListAgentKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentKnowledgeBasesRequestT = Model::ListAgentKnowledgeBasesRequest>
        Model::ListAgentKnowledgeBasesOutcomeCallable ListAgentKnowledgeBasesCallable(const ListAgentKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListAgentKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentKnowledgeBasesRequestT = Model::ListAgentKnowledgeBasesRequest>
        void ListAgentKnowledgeBasesAsync(const ListAgentKnowledgeBasesRequestT& request, const ListAgentKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Lists the versions of an agent and information about each
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentVersionsOutcome ListAgentVersions(const Model::ListAgentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentVersionsRequestT = Model::ListAgentVersionsRequest>
        Model::ListAgentVersionsOutcomeCallable ListAgentVersionsCallable(const ListAgentVersionsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentVersions, request);
        }

        /**
         * An Async wrapper for ListAgentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentVersionsRequestT = Model::ListAgentVersionsRequest>
        void ListAgentVersionsAsync(const ListAgentVersionsRequestT& request, const ListAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentVersions, request, handler, context);
        }

        /**
         * <p>Lists the agents belonging to an account and information about each
         * agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentsOutcome ListAgents(const Model::ListAgentsRequest& request) const;

        /**
         * A Callable wrapper for ListAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        Model::ListAgentsOutcomeCallable ListAgentsCallable(const ListAgentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgents, request);
        }

        /**
         * An Async wrapper for ListAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        void ListAgentsAsync(const ListAgentsRequestT& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgents, request, handler, context);
        }

        /**
         * <p>Lists the data sources in a knowledge base and information about each
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>Lists the ingestion jobs for a data source and information about each of
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListIngestionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionJobsOutcome ListIngestionJobs(const Model::ListIngestionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestionJobsRequestT = Model::ListIngestionJobsRequest>
        Model::ListIngestionJobsOutcomeCallable ListIngestionJobsCallable(const ListIngestionJobsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListIngestionJobs, request);
        }

        /**
         * An Async wrapper for ListIngestionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestionJobsRequestT = Model::ListIngestionJobsRequest>
        void ListIngestionJobsAsync(const ListIngestionJobsRequestT& request, const ListIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListIngestionJobs, request, handler, context);
        }

        /**
         * <p>Lists the knowledge bases in an account and information about each of
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesRequestT& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>List all the tags for the resource you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a <code>DRAFT</code> version of the agent that can be used for
         * internal testing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PrepareAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::PrepareAgentOutcome PrepareAgent(const Model::PrepareAgentRequest& request) const;

        /**
         * A Callable wrapper for PrepareAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PrepareAgentRequestT = Model::PrepareAgentRequest>
        Model::PrepareAgentOutcomeCallable PrepareAgentCallable(const PrepareAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::PrepareAgent, request);
        }

        /**
         * An Async wrapper for PrepareAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PrepareAgentRequestT = Model::PrepareAgentRequest>
        void PrepareAgentAsync(const PrepareAgentRequestT& request, const PrepareAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::PrepareAgent, request, handler, context);
        }

        /**
         * <p>Begins an ingestion job, in which a data source is added to a knowledge
         * base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StartIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIngestionJobOutcome StartIngestionJob(const Model::StartIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for StartIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartIngestionJobRequestT = Model::StartIngestionJobRequest>
        Model::StartIngestionJobOutcomeCallable StartIngestionJobCallable(const StartIngestionJobRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::StartIngestionJob, request);
        }

        /**
         * An Async wrapper for StartIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartIngestionJobRequestT = Model::StartIngestionJobRequest>
        void StartIngestionJobAsync(const StartIngestionJobRequestT& request, const StartIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::StartIngestionJob, request, handler, context);
        }

        /**
         * <p>Associate tags with a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
         * resources</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentOutcome UpdateAgent(const Model::UpdateAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        Model::UpdateAgentOutcomeCallable UpdateAgentCallable(const UpdateAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgent, request);
        }

        /**
         * An Async wrapper for UpdateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        void UpdateAgentAsync(const UpdateAgentRequestT& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgent, request, handler, context);
        }

        /**
         * <p>Updates the configuration for an action group for an agent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentActionGroupOutcome UpdateAgentActionGroup(const Model::UpdateAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentActionGroupRequestT = Model::UpdateAgentActionGroupRequest>
        Model::UpdateAgentActionGroupOutcomeCallable UpdateAgentActionGroupCallable(const UpdateAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentActionGroup, request);
        }

        /**
         * An Async wrapper for UpdateAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentActionGroupRequestT = Model::UpdateAgentActionGroupRequest>
        void UpdateAgentActionGroupAsync(const UpdateAgentActionGroupRequestT& request, const UpdateAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Updates configurations for an alias of an agent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentAliasOutcome UpdateAgentAlias(const Model::UpdateAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentAliasRequestT = Model::UpdateAgentAliasRequest>
        Model::UpdateAgentAliasOutcomeCallable UpdateAgentAliasCallable(const UpdateAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentAlias, request);
        }

        /**
         * An Async wrapper for UpdateAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentAliasRequestT = Model::UpdateAgentAliasRequest>
        void UpdateAgentAliasAsync(const UpdateAgentAliasRequestT& request, const UpdateAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentAlias, request, handler, context);
        }

        /**
         * <p>Updates the configuration for a knowledge base that has been associated with
         * an agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentKnowledgeBaseOutcome UpdateAgentKnowledgeBase(const Model::UpdateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentKnowledgeBaseRequestT = Model::UpdateAgentKnowledgeBaseRequest>
        Model::UpdateAgentKnowledgeBaseOutcomeCallable UpdateAgentKnowledgeBaseCallable(const UpdateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for UpdateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentKnowledgeBaseRequestT = Model::UpdateAgentKnowledgeBaseRequest>
        void UpdateAgentKnowledgeBaseAsync(const UpdateAgentKnowledgeBaseRequestT& request, const UpdateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Updates configurations for a data source.</p>  <p>You can't change
         * the <code>chunkingConfiguration</code> after you create the data source. Specify
         * the existing <code>chunkingConfiguration</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of a knowledge base with the fields that you
         * specify. Because all fields will be overwritten, you must include the same
         * values for fields that you want to keep the same.</p> <p>You can change the
         * following fields:</p> <ul> <li> <p> <code>name</code> </p> </li> <li> <p>
         * <code>description</code> </p> </li> <li> <p> <code>roleArn</code> </p> </li>
         * </ul> <p>You can't change the <code>knowledgeBaseConfiguration</code> or
         * <code>storageConfiguration</code> fields, so you must specify the same
         * configurations as when you created the knowledge base. You can send a <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetKnowledgeBase.html">GetKnowledgeBase</a>
         * request and copy the same configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKnowledgeBaseOutcome UpdateKnowledgeBase(const Model::UpdateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKnowledgeBaseRequestT = Model::UpdateKnowledgeBaseRequest>
        Model::UpdateKnowledgeBaseOutcomeCallable UpdateKnowledgeBaseCallable(const UpdateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for UpdateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKnowledgeBaseRequestT = Model::UpdateKnowledgeBaseRequest>
        void UpdateKnowledgeBaseAsync(const UpdateKnowledgeBaseRequestT& request, const UpdateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateKnowledgeBase, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentClient>;
      void init(const BedrockAgentClientConfiguration& clientConfiguration);

      BedrockAgentClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BedrockAgentEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgent
} // namespace Aws
