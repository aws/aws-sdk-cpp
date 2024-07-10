/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AgentFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/CollectorFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/ConditionFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/InputFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/IteratorFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LambdaFunctionFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LexFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/OutputFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/PromptFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/RetrievalFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/StorageFlowNodeConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for a node in your flow. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in Amazon Bedrock works</a> in the Amazon Bedrock User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class FlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FlowNodeConfiguration();
    AWS_BEDROCKAGENT_API FlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for an agent node in your flow. Invokes an alias of
     * an agent and returns the response.</p>
     */
    inline const AgentFlowNodeConfiguration& GetAgent() const{ return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    inline void SetAgent(const AgentFlowNodeConfiguration& value) { m_agentHasBeenSet = true; m_agent = value; }
    inline void SetAgent(AgentFlowNodeConfiguration&& value) { m_agentHasBeenSet = true; m_agent = std::move(value); }
    inline FlowNodeConfiguration& WithAgent(const AgentFlowNodeConfiguration& value) { SetAgent(value); return *this;}
    inline FlowNodeConfiguration& WithAgent(AgentFlowNodeConfiguration&& value) { SetAgent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a collector node in your flow. Collects an
     * iteration of inputs and consolidates them into an array of outputs.</p>
     */
    inline const CollectorFlowNodeConfiguration& GetCollector() const{ return m_collector; }
    inline bool CollectorHasBeenSet() const { return m_collectorHasBeenSet; }
    inline void SetCollector(const CollectorFlowNodeConfiguration& value) { m_collectorHasBeenSet = true; m_collector = value; }
    inline void SetCollector(CollectorFlowNodeConfiguration&& value) { m_collectorHasBeenSet = true; m_collector = std::move(value); }
    inline FlowNodeConfiguration& WithCollector(const CollectorFlowNodeConfiguration& value) { SetCollector(value); return *this;}
    inline FlowNodeConfiguration& WithCollector(CollectorFlowNodeConfiguration&& value) { SetCollector(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Condition node in your flow. Defines conditions
     * that lead to different branches of the flow.</p>
     */
    inline const ConditionFlowNodeConfiguration& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const ConditionFlowNodeConfiguration& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(ConditionFlowNodeConfiguration&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline FlowNodeConfiguration& WithCondition(const ConditionFlowNodeConfiguration& value) { SetCondition(value); return *this;}
    inline FlowNodeConfiguration& WithCondition(ConditionFlowNodeConfiguration&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an input flow node in your flow. The first node
     * in the flow. <code>inputs</code> can't be specified for this node.</p>
     */
    inline const InputFlowNodeConfiguration& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const InputFlowNodeConfiguration& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(InputFlowNodeConfiguration&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline FlowNodeConfiguration& WithInput(const InputFlowNodeConfiguration& value) { SetInput(value); return *this;}
    inline FlowNodeConfiguration& WithInput(InputFlowNodeConfiguration&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an iterator node in your flow. Takes an input
     * that is an array and iteratively sends each item of the array as an output to
     * the following node. The size of the array is also returned in the output.</p>
     * <p>The output flow node at the end of the flow iteration will return a response
     * for each member of the array. To return only one response, you can include a
     * collector node downstream from the iterator node.</p>
     */
    inline const IteratorFlowNodeConfiguration& GetIterator() const{ return m_iterator; }
    inline bool IteratorHasBeenSet() const { return m_iteratorHasBeenSet; }
    inline void SetIterator(const IteratorFlowNodeConfiguration& value) { m_iteratorHasBeenSet = true; m_iterator = value; }
    inline void SetIterator(IteratorFlowNodeConfiguration&& value) { m_iteratorHasBeenSet = true; m_iterator = std::move(value); }
    inline FlowNodeConfiguration& WithIterator(const IteratorFlowNodeConfiguration& value) { SetIterator(value); return *this;}
    inline FlowNodeConfiguration& WithIterator(IteratorFlowNodeConfiguration&& value) { SetIterator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a knowledge base node in your flow. Queries a
     * knowledge base and returns the retrieved results or generated response.</p>
     */
    inline const KnowledgeBaseFlowNodeConfiguration& GetKnowledgeBase() const{ return m_knowledgeBase; }
    inline bool KnowledgeBaseHasBeenSet() const { return m_knowledgeBaseHasBeenSet; }
    inline void SetKnowledgeBase(const KnowledgeBaseFlowNodeConfiguration& value) { m_knowledgeBaseHasBeenSet = true; m_knowledgeBase = value; }
    inline void SetKnowledgeBase(KnowledgeBaseFlowNodeConfiguration&& value) { m_knowledgeBaseHasBeenSet = true; m_knowledgeBase = std::move(value); }
    inline FlowNodeConfiguration& WithKnowledgeBase(const KnowledgeBaseFlowNodeConfiguration& value) { SetKnowledgeBase(value); return *this;}
    inline FlowNodeConfiguration& WithKnowledgeBase(KnowledgeBaseFlowNodeConfiguration&& value) { SetKnowledgeBase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Lambda function node in your flow. Invokes an
     * Lambda function.</p>
     */
    inline const LambdaFunctionFlowNodeConfiguration& GetLambdaFunction() const{ return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    inline void SetLambdaFunction(const LambdaFunctionFlowNodeConfiguration& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = value; }
    inline void SetLambdaFunction(LambdaFunctionFlowNodeConfiguration&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::move(value); }
    inline FlowNodeConfiguration& WithLambdaFunction(const LambdaFunctionFlowNodeConfiguration& value) { SetLambdaFunction(value); return *this;}
    inline FlowNodeConfiguration& WithLambdaFunction(LambdaFunctionFlowNodeConfiguration&& value) { SetLambdaFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Lex node in your flow. Invokes an Amazon Lex
     * bot to identify the intent of the input and return the intent as the output.</p>
     */
    inline const LexFlowNodeConfiguration& GetLex() const{ return m_lex; }
    inline bool LexHasBeenSet() const { return m_lexHasBeenSet; }
    inline void SetLex(const LexFlowNodeConfiguration& value) { m_lexHasBeenSet = true; m_lex = value; }
    inline void SetLex(LexFlowNodeConfiguration&& value) { m_lexHasBeenSet = true; m_lex = std::move(value); }
    inline FlowNodeConfiguration& WithLex(const LexFlowNodeConfiguration& value) { SetLex(value); return *this;}
    inline FlowNodeConfiguration& WithLex(LexFlowNodeConfiguration&& value) { SetLex(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an output flow node in your flow. The last node
     * in the flow. <code>outputs</code> can't be specified for this node.</p>
     */
    inline const OutputFlowNodeConfiguration& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const OutputFlowNodeConfiguration& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(OutputFlowNodeConfiguration&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline FlowNodeConfiguration& WithOutput(const OutputFlowNodeConfiguration& value) { SetOutput(value); return *this;}
    inline FlowNodeConfiguration& WithOutput(OutputFlowNodeConfiguration&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a prompt node in your flow. Runs a prompt and
     * generates the model response as the output. You can use a prompt from Prompt
     * management or you can configure one in this node.</p>
     */
    inline const PromptFlowNodeConfiguration& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const PromptFlowNodeConfiguration& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(PromptFlowNodeConfiguration&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline FlowNodeConfiguration& WithPrompt(const PromptFlowNodeConfiguration& value) { SetPrompt(value); return *this;}
    inline FlowNodeConfiguration& WithPrompt(PromptFlowNodeConfiguration&& value) { SetPrompt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Retrieval node in your flow. Retrieves data
     * from an Amazon S3 location and returns it as the output.</p>
     */
    inline const RetrievalFlowNodeConfiguration& GetRetrieval() const{ return m_retrieval; }
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }
    inline void SetRetrieval(const RetrievalFlowNodeConfiguration& value) { m_retrievalHasBeenSet = true; m_retrieval = value; }
    inline void SetRetrieval(RetrievalFlowNodeConfiguration&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::move(value); }
    inline FlowNodeConfiguration& WithRetrieval(const RetrievalFlowNodeConfiguration& value) { SetRetrieval(value); return *this;}
    inline FlowNodeConfiguration& WithRetrieval(RetrievalFlowNodeConfiguration&& value) { SetRetrieval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Storage node in your flow. Stores an input in
     * an Amazon S3 location.</p>
     */
    inline const StorageFlowNodeConfiguration& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const StorageFlowNodeConfiguration& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(StorageFlowNodeConfiguration&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline FlowNodeConfiguration& WithStorage(const StorageFlowNodeConfiguration& value) { SetStorage(value); return *this;}
    inline FlowNodeConfiguration& WithStorage(StorageFlowNodeConfiguration&& value) { SetStorage(std::move(value)); return *this;}
    ///@}
  private:

    AgentFlowNodeConfiguration m_agent;
    bool m_agentHasBeenSet = false;

    CollectorFlowNodeConfiguration m_collector;
    bool m_collectorHasBeenSet = false;

    ConditionFlowNodeConfiguration m_condition;
    bool m_conditionHasBeenSet = false;

    InputFlowNodeConfiguration m_input;
    bool m_inputHasBeenSet = false;

    IteratorFlowNodeConfiguration m_iterator;
    bool m_iteratorHasBeenSet = false;

    KnowledgeBaseFlowNodeConfiguration m_knowledgeBase;
    bool m_knowledgeBaseHasBeenSet = false;

    LambdaFunctionFlowNodeConfiguration m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;

    LexFlowNodeConfiguration m_lex;
    bool m_lexHasBeenSet = false;

    OutputFlowNodeConfiguration m_output;
    bool m_outputHasBeenSet = false;

    PromptFlowNodeConfiguration m_prompt;
    bool m_promptHasBeenSet = false;

    RetrievalFlowNodeConfiguration m_retrieval;
    bool m_retrievalHasBeenSet = false;

    StorageFlowNodeConfiguration m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
