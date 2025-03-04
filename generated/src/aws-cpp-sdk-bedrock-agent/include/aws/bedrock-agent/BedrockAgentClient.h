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
         * <p>Makes an agent a collaborator for another agent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AssociateAgentCollaborator">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAgentCollaboratorOutcome AssociateAgentCollaborator(const Model::AssociateAgentCollaboratorRequest& request) const;

        /**
         * A Callable wrapper for AssociateAgentCollaborator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAgentCollaboratorRequestT = Model::AssociateAgentCollaboratorRequest>
        Model::AssociateAgentCollaboratorOutcomeCallable AssociateAgentCollaboratorCallable(const AssociateAgentCollaboratorRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::AssociateAgentCollaborator, request);
        }

        /**
         * An Async wrapper for AssociateAgentCollaborator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAgentCollaboratorRequestT = Model::AssociateAgentCollaboratorRequest>
        void AssociateAgentCollaboratorAsync(const AssociateAgentCollaboratorRequestT& request, const AssociateAgentCollaboratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::AssociateAgentCollaborator, request, handler, context);
        }

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
         * request begins a new session.</p> </li> </ul> </li> <li> <p>To enable your agent
         * to retain conversational context across multiple sessions, include a
         * <code>memoryConfiguration</code> object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-configure-memory.html">Configure
         * memory</a>.</p> </li> <li> <p>To override the default prompt behavior for agent
         * orchestration and to use advanced prompts, include a
         * <code>promptOverrideConfiguration</code> object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
         * prompts</a>.</p> </li> <li> <p>If your agent fails to be created, the response
         * returns a list of <code>failureReasons</code> alongside a list of
         * <code>recommendedActions</code> for you to troubleshoot.</p> </li> <li> <p>The
         * agent instructions will not be honored if your agent has only one knowledge
         * base, uses default prompts, has no action group, and user input is disabled.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
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
         * <code>AMAZON.UserInput</code>. </p> <p>To allow your agent to generate, run, and
         * troubleshoot code when trying to complete a task, add an action group with the
         * <code>parentActionGroupSignature</code> field set to
         * <code>AMAZON.CodeInterpreter</code>. </p> <p>You must leave the
         * <code>description</code>, <code>apiSchema</code>, and
         * <code>actionGroupExecutor</code> fields blank for this action group. During
         * orchestration, if your agent determines that it needs to invoke an API in an
         * action group, but doesn't have enough information to complete the API request,
         * it will invoke this action group instead and return an <a
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
         * <p>Connects a knowledge base to a data source. You specify the configuration for
         * the specific data source service in the <code>dataSourceConfiguration</code>
         * field.</p>  <p>You can't change the
         * <code>chunkingConfiguration</code> after you create the data source
         * connector.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Creates a prompt flow that you can use to send an input through various steps
         * to yield an output. Configure nodes, each of which corresponds to a step of the
         * flow, and create connections between the nodes to create paths to different
         * outputs. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-how-it-works.html">How
         * it works</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-create.html">Create
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        Model::CreateFlowOutcomeCallable CreateFlowCallable(const CreateFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateFlow, request);
        }

        /**
         * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowRequestT = Model::CreateFlowRequest>
        void CreateFlowAsync(const CreateFlowRequestT& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateFlow, request, handler, context);
        }

        /**
         * <p>Creates an alias of a flow for deployment. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateFlowAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowAliasOutcome CreateFlowAlias(const Model::CreateFlowAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateFlowAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowAliasRequestT = Model::CreateFlowAliasRequest>
        Model::CreateFlowAliasOutcomeCallable CreateFlowAliasCallable(const CreateFlowAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateFlowAlias, request);
        }

        /**
         * An Async wrapper for CreateFlowAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowAliasRequestT = Model::CreateFlowAliasRequest>
        void CreateFlowAliasAsync(const CreateFlowAliasRequestT& request, const CreateFlowAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateFlowAlias, request, handler, context);
        }

        /**
         * <p>Creates a version of the flow that you can deploy. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateFlowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowVersionOutcome CreateFlowVersion(const Model::CreateFlowVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateFlowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFlowVersionRequestT = Model::CreateFlowVersionRequest>
        Model::CreateFlowVersionOutcomeCallable CreateFlowVersionCallable(const CreateFlowVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateFlowVersion, request);
        }

        /**
         * An Async wrapper for CreateFlowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFlowVersionRequestT = Model::CreateFlowVersionRequest>
        void CreateFlowVersionAsync(const CreateFlowVersionRequestT& request, const CreateFlowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateFlowVersion, request, handler, context);
        }

        /**
         * <p>Creates a knowledge base. A knowledge base contains your data sources so that
         * Large Language Models (LLMs) can use your data. To create a knowledge base, you
         * must first set up your data sources and configure a supported vector store. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowlege-base-prereq.html">Set
         * up a knowledge base</a>.</p>  <p>If you prefer to let Amazon Bedrock
         * create and manage a vector store for you in Amazon OpenSearch Service, use the
         * console. For more information, see <a
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
         * <p>Creates a prompt in your prompt library that you can add to a flow. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management.html">Prompt
         * management in Amazon Bedrock</a>, <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
         * a prompt using Prompt management</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows.html">Prompt
         * flows in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreatePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePromptOutcome CreatePrompt(const Model::CreatePromptRequest& request) const;

        /**
         * A Callable wrapper for CreatePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePromptRequestT = Model::CreatePromptRequest>
        Model::CreatePromptOutcomeCallable CreatePromptCallable(const CreatePromptRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreatePrompt, request);
        }

        /**
         * An Async wrapper for CreatePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePromptRequestT = Model::CreatePromptRequest>
        void CreatePromptAsync(const CreatePromptRequestT& request, const CreatePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreatePrompt, request, handler, context);
        }

        /**
         * <p>Creates a static snapshot of your prompt that can be deployed to production.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-deploy.html">Deploy
         * prompts using Prompt management by creating versions</a> in the Amazon Bedrock
         * User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreatePromptVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePromptVersionOutcome CreatePromptVersion(const Model::CreatePromptVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePromptVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePromptVersionRequestT = Model::CreatePromptVersionRequest>
        Model::CreatePromptVersionOutcomeCallable CreatePromptVersionCallable(const CreatePromptVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreatePromptVersion, request);
        }

        /**
         * An Async wrapper for CreatePromptVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePromptVersionRequestT = Model::CreatePromptVersionRequest>
        void CreatePromptVersionAsync(const CreatePromptVersionRequestT& request, const CreatePromptVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreatePromptVersion, request, handler, context);
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
         * <p>Deletes a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowOutcome DeleteFlow(const Model::DeleteFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const DeleteFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteFlow, request);
        }

        /**
         * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowRequestT = Model::DeleteFlowRequest>
        void DeleteFlowAsync(const DeleteFlowRequestT& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteFlow, request, handler, context);
        }

        /**
         * <p>Deletes an alias of a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteFlowAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowAliasOutcome DeleteFlowAlias(const Model::DeleteFlowAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlowAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowAliasRequestT = Model::DeleteFlowAliasRequest>
        Model::DeleteFlowAliasOutcomeCallable DeleteFlowAliasCallable(const DeleteFlowAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteFlowAlias, request);
        }

        /**
         * An Async wrapper for DeleteFlowAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowAliasRequestT = Model::DeleteFlowAliasRequest>
        void DeleteFlowAliasAsync(const DeleteFlowAliasRequestT& request, const DeleteFlowAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteFlowAlias, request, handler, context);
        }

        /**
         * <p>Deletes a version of a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteFlowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowVersionOutcome DeleteFlowVersion(const Model::DeleteFlowVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFlowVersionRequestT = Model::DeleteFlowVersionRequest>
        Model::DeleteFlowVersionOutcomeCallable DeleteFlowVersionCallable(const DeleteFlowVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteFlowVersion, request);
        }

        /**
         * An Async wrapper for DeleteFlowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFlowVersionRequestT = Model::DeleteFlowVersionRequest>
        void DeleteFlowVersionAsync(const DeleteFlowVersionRequestT& request, const DeleteFlowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteFlowVersion, request, handler, context);
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
         * <p>Deletes documents from a data source and syncs the changes to the knowledge
         * base that is connected to it. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-direct-ingestion.html">Ingest
         * changes directly into a knowledge base</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteKnowledgeBaseDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseDocumentsOutcome DeleteKnowledgeBaseDocuments(const Model::DeleteKnowledgeBaseDocumentsRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBaseDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnowledgeBaseDocumentsRequestT = Model::DeleteKnowledgeBaseDocumentsRequest>
        Model::DeleteKnowledgeBaseDocumentsOutcomeCallable DeleteKnowledgeBaseDocumentsCallable(const DeleteKnowledgeBaseDocumentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteKnowledgeBaseDocuments, request);
        }

        /**
         * An Async wrapper for DeleteKnowledgeBaseDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnowledgeBaseDocumentsRequestT = Model::DeleteKnowledgeBaseDocumentsRequest>
        void DeleteKnowledgeBaseDocumentsAsync(const DeleteKnowledgeBaseDocumentsRequestT& request, const DeleteKnowledgeBaseDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteKnowledgeBaseDocuments, request, handler, context);
        }

        /**
         * <p>Deletes a prompt or a version of it, depending on whether you include the
         * <code>promptVersion</code> field or not. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-manage.html#prompt-management-delete.html">Delete
         * prompts from the Prompt management tool</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-deploy.html#prompt-management-versions-delete.html">Delete
         * a version of a prompt from the Prompt management tool</a> in the Amazon Bedrock
         * User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeletePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePromptOutcome DeletePrompt(const Model::DeletePromptRequest& request) const;

        /**
         * A Callable wrapper for DeletePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePromptRequestT = Model::DeletePromptRequest>
        Model::DeletePromptOutcomeCallable DeletePromptCallable(const DeletePromptRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeletePrompt, request);
        }

        /**
         * An Async wrapper for DeletePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePromptRequestT = Model::DeletePromptRequest>
        void DeletePromptAsync(const DeletePromptRequestT& request, const DeletePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeletePrompt, request, handler, context);
        }

        /**
         * <p>Disassociates an agent collaborator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DisassociateAgentCollaborator">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAgentCollaboratorOutcome DisassociateAgentCollaborator(const Model::DisassociateAgentCollaboratorRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAgentCollaborator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAgentCollaboratorRequestT = Model::DisassociateAgentCollaboratorRequest>
        Model::DisassociateAgentCollaboratorOutcomeCallable DisassociateAgentCollaboratorCallable(const DisassociateAgentCollaboratorRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DisassociateAgentCollaborator, request);
        }

        /**
         * An Async wrapper for DisassociateAgentCollaborator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAgentCollaboratorRequestT = Model::DisassociateAgentCollaboratorRequest>
        void DisassociateAgentCollaboratorAsync(const DisassociateAgentCollaboratorRequestT& request, const DisassociateAgentCollaboratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DisassociateAgentCollaborator, request, handler, context);
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
         * <p>Retrieves information about an agent's collaborator.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentCollaborator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentCollaboratorOutcome GetAgentCollaborator(const Model::GetAgentCollaboratorRequest& request) const;

        /**
         * A Callable wrapper for GetAgentCollaborator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentCollaboratorRequestT = Model::GetAgentCollaboratorRequest>
        Model::GetAgentCollaboratorOutcomeCallable GetAgentCollaboratorCallable(const GetAgentCollaboratorRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentCollaborator, request);
        }

        /**
         * An Async wrapper for GetAgentCollaborator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentCollaboratorRequestT = Model::GetAgentCollaboratorRequest>
        void GetAgentCollaboratorAsync(const GetAgentCollaboratorRequestT& request, const GetAgentCollaboratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentCollaborator, request, handler, context);
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
         * <p>Retrieves information about a flow. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-manage.html">Manage
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowOutcome GetFlow(const Model::GetFlowRequest& request) const;

        /**
         * A Callable wrapper for GetFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFlowRequestT = Model::GetFlowRequest>
        Model::GetFlowOutcomeCallable GetFlowCallable(const GetFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetFlow, request);
        }

        /**
         * An Async wrapper for GetFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFlowRequestT = Model::GetFlowRequest>
        void GetFlowAsync(const GetFlowRequestT& request, const GetFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetFlow, request, handler, context);
        }

        /**
         * <p>Retrieves information about a flow. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetFlowAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowAliasOutcome GetFlowAlias(const Model::GetFlowAliasRequest& request) const;

        /**
         * A Callable wrapper for GetFlowAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFlowAliasRequestT = Model::GetFlowAliasRequest>
        Model::GetFlowAliasOutcomeCallable GetFlowAliasCallable(const GetFlowAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetFlowAlias, request);
        }

        /**
         * An Async wrapper for GetFlowAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFlowAliasRequestT = Model::GetFlowAliasRequest>
        void GetFlowAliasAsync(const GetFlowAliasRequestT& request, const GetFlowAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetFlowAlias, request, handler, context);
        }

        /**
         * <p>Retrieves information about a version of a flow. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetFlowVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowVersionOutcome GetFlowVersion(const Model::GetFlowVersionRequest& request) const;

        /**
         * A Callable wrapper for GetFlowVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFlowVersionRequestT = Model::GetFlowVersionRequest>
        Model::GetFlowVersionOutcomeCallable GetFlowVersionCallable(const GetFlowVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetFlowVersion, request);
        }

        /**
         * An Async wrapper for GetFlowVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFlowVersionRequestT = Model::GetFlowVersionRequest>
        void GetFlowVersionAsync(const GetFlowVersionRequestT& request, const GetFlowVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetFlowVersion, request, handler, context);
        }

        /**
         * <p>Gets information about a data ingestion job. Data sources are ingested into
         * your knowledge base so that Large Language Models (LLMs) can use your
         * data.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves specific documents from a data source that is connected to a
         * knowledge base. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-direct-ingestion.html">Ingest
         * changes directly into a knowledge base</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetKnowledgeBaseDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseDocumentsOutcome GetKnowledgeBaseDocuments(const Model::GetKnowledgeBaseDocumentsRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBaseDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKnowledgeBaseDocumentsRequestT = Model::GetKnowledgeBaseDocumentsRequest>
        Model::GetKnowledgeBaseDocumentsOutcomeCallable GetKnowledgeBaseDocumentsCallable(const GetKnowledgeBaseDocumentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetKnowledgeBaseDocuments, request);
        }

        /**
         * An Async wrapper for GetKnowledgeBaseDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKnowledgeBaseDocumentsRequestT = Model::GetKnowledgeBaseDocumentsRequest>
        void GetKnowledgeBaseDocumentsAsync(const GetKnowledgeBaseDocumentsRequestT& request, const GetKnowledgeBaseDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetKnowledgeBaseDocuments, request, handler, context);
        }

        /**
         * <p>Retrieves information about the working draft (<code>DRAFT</code> version) of
         * a prompt or a version of it, depending on whether you include the
         * <code>promptVersion</code> field or not. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-manage.html#prompt-management-view.html">View
         * information about prompts using Prompt management</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-deploy.html#prompt-management-versions-view.html">View
         * information about a version of your prompt</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetPrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPromptOutcome GetPrompt(const Model::GetPromptRequest& request) const;

        /**
         * A Callable wrapper for GetPrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPromptRequestT = Model::GetPromptRequest>
        Model::GetPromptOutcomeCallable GetPromptCallable(const GetPromptRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetPrompt, request);
        }

        /**
         * An Async wrapper for GetPrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPromptRequestT = Model::GetPromptRequest>
        void GetPromptAsync(const GetPromptRequestT& request, const GetPromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetPrompt, request, handler, context);
        }

        /**
         * <p>Ingests documents directly into the knowledge base that is connected to the
         * data source. The <code>dataSourceType</code> specified in the content for each
         * document must match the type of the data source that you specify in the header.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-direct-ingestion.html">Ingest
         * changes directly into a knowledge base</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestKnowledgeBaseDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::IngestKnowledgeBaseDocumentsOutcome IngestKnowledgeBaseDocuments(const Model::IngestKnowledgeBaseDocumentsRequest& request) const;

        /**
         * A Callable wrapper for IngestKnowledgeBaseDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IngestKnowledgeBaseDocumentsRequestT = Model::IngestKnowledgeBaseDocumentsRequest>
        Model::IngestKnowledgeBaseDocumentsOutcomeCallable IngestKnowledgeBaseDocumentsCallable(const IngestKnowledgeBaseDocumentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::IngestKnowledgeBaseDocuments, request);
        }

        /**
         * An Async wrapper for IngestKnowledgeBaseDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IngestKnowledgeBaseDocumentsRequestT = Model::IngestKnowledgeBaseDocumentsRequest>
        void IngestKnowledgeBaseDocumentsAsync(const IngestKnowledgeBaseDocumentsRequestT& request, const IngestKnowledgeBaseDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::IngestKnowledgeBaseDocuments, request, handler, context);
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
         * <p>Retrieve a list of an agent's collaborators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentCollaborators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentCollaboratorsOutcome ListAgentCollaborators(const Model::ListAgentCollaboratorsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentCollaborators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentCollaboratorsRequestT = Model::ListAgentCollaboratorsRequest>
        Model::ListAgentCollaboratorsOutcomeCallable ListAgentCollaboratorsCallable(const ListAgentCollaboratorsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentCollaborators, request);
        }

        /**
         * An Async wrapper for ListAgentCollaborators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentCollaboratorsRequestT = Model::ListAgentCollaboratorsRequest>
        void ListAgentCollaboratorsAsync(const ListAgentCollaboratorsRequestT& request, const ListAgentCollaboratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentCollaborators, request, handler, context);
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
        virtual Model::ListAgentsOutcome ListAgents(const Model::ListAgentsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        Model::ListAgentsOutcomeCallable ListAgentsCallable(const ListAgentsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgents, request);
        }

        /**
         * An Async wrapper for ListAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        void ListAgentsAsync(const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAgentsRequestT& request = {}) const
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
         * <p>Returns a list of aliases for a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListFlowAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowAliasesOutcome ListFlowAliases(const Model::ListFlowAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListFlowAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowAliasesRequestT = Model::ListFlowAliasesRequest>
        Model::ListFlowAliasesOutcomeCallable ListFlowAliasesCallable(const ListFlowAliasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListFlowAliases, request);
        }

        /**
         * An Async wrapper for ListFlowAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowAliasesRequestT = Model::ListFlowAliasesRequest>
        void ListFlowAliasesAsync(const ListFlowAliasesRequestT& request, const ListFlowAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListFlowAliases, request, handler, context);
        }

        /**
         * <p>Returns a list of information about each flow. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListFlowVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowVersionsOutcome ListFlowVersions(const Model::ListFlowVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowVersionsRequestT = Model::ListFlowVersionsRequest>
        Model::ListFlowVersionsOutcomeCallable ListFlowVersionsCallable(const ListFlowVersionsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListFlowVersions, request);
        }

        /**
         * An Async wrapper for ListFlowVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowVersionsRequestT = Model::ListFlowVersionsRequest>
        void ListFlowVersionsAsync(const ListFlowVersionsRequestT& request, const ListFlowVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListFlowVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of flows and information about each flow. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-manage.html">Manage
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        Model::ListFlowsOutcomeCallable ListFlowsCallable(const ListFlowsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentClient::ListFlows, request);
        }

        /**
         * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowsRequestT = Model::ListFlowsRequest>
        void ListFlowsAsync(const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListFlowsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentClient::ListFlows, request, handler, context);
        }

        /**
         * <p>Lists the data ingestion jobs for a data source. The list also includes
         * information about each job.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves all the documents contained in a data source that is connected to a
         * knowledge base. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-direct-ingestion.html">Ingest
         * changes directly into a knowledge base</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListKnowledgeBaseDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBaseDocumentsOutcome ListKnowledgeBaseDocuments(const Model::ListKnowledgeBaseDocumentsRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBaseDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBaseDocumentsRequestT = Model::ListKnowledgeBaseDocumentsRequest>
        Model::ListKnowledgeBaseDocumentsOutcomeCallable ListKnowledgeBaseDocumentsCallable(const ListKnowledgeBaseDocumentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListKnowledgeBaseDocuments, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBaseDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBaseDocumentsRequestT = Model::ListKnowledgeBaseDocumentsRequest>
        void ListKnowledgeBaseDocumentsAsync(const ListKnowledgeBaseDocumentsRequestT& request, const ListKnowledgeBaseDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListKnowledgeBaseDocuments, request, handler, context);
        }

        /**
         * <p>Lists the knowledge bases in an account. The list also includesinformation
         * about each knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListKnowledgeBasesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Returns either information about the working draft (<code>DRAFT</code>
         * version) of each prompt in an account, or information about of all versions of a
         * prompt, depending on whether you include the <code>promptIdentifier</code> field
         * or not. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-manage.html#prompt-management-view.html">View
         * information about prompts using Prompt management</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptsOutcome ListPrompts(const Model::ListPromptsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPrompts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPromptsRequestT = Model::ListPromptsRequest>
        Model::ListPromptsOutcomeCallable ListPromptsCallable(const ListPromptsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentClient::ListPrompts, request);
        }

        /**
         * An Async wrapper for ListPrompts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPromptsRequestT = Model::ListPromptsRequest>
        void ListPromptsAsync(const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPromptsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentClient::ListPrompts, request, handler, context);
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
         * <p>Prepares the <code>DRAFT</code> version of a flow so that it can be invoked.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-test.html">Test
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PrepareFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::PrepareFlowOutcome PrepareFlow(const Model::PrepareFlowRequest& request) const;

        /**
         * A Callable wrapper for PrepareFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PrepareFlowRequestT = Model::PrepareFlowRequest>
        Model::PrepareFlowOutcomeCallable PrepareFlowCallable(const PrepareFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::PrepareFlow, request);
        }

        /**
         * An Async wrapper for PrepareFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PrepareFlowRequestT = Model::PrepareFlowRequest>
        void PrepareFlowAsync(const PrepareFlowRequestT& request, const PrepareFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::PrepareFlow, request, handler, context);
        }

        /**
         * <p>Begins a data ingestion job. Data sources are ingested into your knowledge
         * base so that Large Language Models (LLMs) can use your data.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Stops a currently running data ingestion job. You can send a
         * <code>StartIngestionJob</code> request again to ingest the rest of your data
         * when you are ready.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StopIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopIngestionJobOutcome StopIngestionJob(const Model::StopIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for StopIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopIngestionJobRequestT = Model::StopIngestionJobRequest>
        Model::StopIngestionJobOutcomeCallable StopIngestionJobCallable(const StopIngestionJobRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::StopIngestionJob, request);
        }

        /**
         * An Async wrapper for StopIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopIngestionJobRequestT = Model::StopIngestionJobRequest>
        void StopIngestionJobAsync(const StopIngestionJobRequestT& request, const StopIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::StopIngestionJob, request, handler, context);
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
         * <p>Updates an agent's collaborator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentCollaborator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentCollaboratorOutcome UpdateAgentCollaborator(const Model::UpdateAgentCollaboratorRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentCollaborator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentCollaboratorRequestT = Model::UpdateAgentCollaboratorRequest>
        Model::UpdateAgentCollaboratorOutcomeCallable UpdateAgentCollaboratorCallable(const UpdateAgentCollaboratorRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentCollaborator, request);
        }

        /**
         * An Async wrapper for UpdateAgentCollaborator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentCollaboratorRequestT = Model::UpdateAgentCollaboratorRequest>
        void UpdateAgentCollaboratorAsync(const UpdateAgentCollaboratorRequestT& request, const UpdateAgentCollaboratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentCollaborator, request, handler, context);
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
         * <p>Updates the configurations for a data source connector.</p> 
         * <p>You can't change the <code>chunkingConfiguration</code> after you create the
         * data source connector. Specify the existing
         * <code>chunkingConfiguration</code>.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Modifies a flow. Include both fields that you want to keep and fields that
         * you want to change. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-how-it-works.html">How
         * it works</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-create.html">Create
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const UpdateFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateFlow, request);
        }

        /**
         * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowRequestT = Model::UpdateFlowRequest>
        void UpdateFlowAsync(const UpdateFlowRequestT& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateFlow, request, handler, context);
        }

        /**
         * <p>Modifies the alias of a flow. Include both fields that you want to keep and
         * ones that you want to change. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-deploy.html">Deploy
         * a flow in Amazon Bedrock</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateFlowAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowAliasOutcome UpdateFlowAlias(const Model::UpdateFlowAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFlowAliasRequestT = Model::UpdateFlowAliasRequest>
        Model::UpdateFlowAliasOutcomeCallable UpdateFlowAliasCallable(const UpdateFlowAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateFlowAlias, request);
        }

        /**
         * An Async wrapper for UpdateFlowAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFlowAliasRequestT = Model::UpdateFlowAliasRequest>
        void UpdateFlowAliasAsync(const UpdateFlowAliasRequestT& request, const UpdateFlowAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateFlowAlias, request, handler, context);
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

        /**
         * <p>Modifies a prompt in your prompt library. Include both fields that you want
         * to keep and fields that you want to replace. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management.html">Prompt
         * management in Amazon Bedrock</a> and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-manage.html#prompt-management-edit">Edit
         * prompts in your prompt library</a> in the Amazon Bedrock User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdatePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePromptOutcome UpdatePrompt(const Model::UpdatePromptRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePromptRequestT = Model::UpdatePromptRequest>
        Model::UpdatePromptOutcomeCallable UpdatePromptCallable(const UpdatePromptRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdatePrompt, request);
        }

        /**
         * An Async wrapper for UpdatePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePromptRequestT = Model::UpdatePromptRequest>
        void UpdatePromptAsync(const UpdatePromptRequestT& request, const UpdatePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdatePrompt, request, handler, context);
        }

        /**
         * <p>Validates the definition of a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ValidateFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateFlowDefinitionOutcome ValidateFlowDefinition(const Model::ValidateFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for ValidateFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateFlowDefinitionRequestT = Model::ValidateFlowDefinitionRequest>
        Model::ValidateFlowDefinitionOutcomeCallable ValidateFlowDefinitionCallable(const ValidateFlowDefinitionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ValidateFlowDefinition, request);
        }

        /**
         * An Async wrapper for ValidateFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateFlowDefinitionRequestT = Model::ValidateFlowDefinitionRequest>
        void ValidateFlowDefinitionAsync(const ValidateFlowDefinitionRequestT& request, const ValidateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ValidateFlowDefinition, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentClient>;
      void init(const BedrockAgentClientConfiguration& clientConfiguration);

      BedrockAgentClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockAgentEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgent
} // namespace Aws
