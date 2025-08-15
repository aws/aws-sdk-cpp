/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/InputFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/OutputFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/KnowledgeBaseFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/ConditionFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LexFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/PromptFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LambdaFunctionFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/StorageFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/AgentFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/RetrievalFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/IteratorFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/CollectorFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/InlineCodeFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LoopInputFlowNodeConfiguration.h>
#include <aws/bedrock-agent/model/LoopControllerFlowNodeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class LoopFlowNodeConfiguration;

  /**
   * <p>Contains configurations for a node in your flow. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in a flow</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class FlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API FlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for an input flow node in your flow. The first node
     * in the flow. <code>inputs</code> can't be specified for this node.</p>
     */
    inline const InputFlowNodeConfiguration& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = InputFlowNodeConfiguration>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = InputFlowNodeConfiguration>
    FlowNodeConfiguration& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an output flow node in your flow. The last node
     * in the flow. <code>outputs</code> can't be specified for this node.</p>
     */
    inline const OutputFlowNodeConfiguration& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = OutputFlowNodeConfiguration>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = OutputFlowNodeConfiguration>
    FlowNodeConfiguration& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a knowledge base node in your flow. Queries a
     * knowledge base and returns the retrieved results or generated response.</p>
     */
    inline const KnowledgeBaseFlowNodeConfiguration& GetKnowledgeBase() const { return m_knowledgeBase; }
    inline bool KnowledgeBaseHasBeenSet() const { return m_knowledgeBaseHasBeenSet; }
    template<typename KnowledgeBaseT = KnowledgeBaseFlowNodeConfiguration>
    void SetKnowledgeBase(KnowledgeBaseT&& value) { m_knowledgeBaseHasBeenSet = true; m_knowledgeBase = std::forward<KnowledgeBaseT>(value); }
    template<typename KnowledgeBaseT = KnowledgeBaseFlowNodeConfiguration>
    FlowNodeConfiguration& WithKnowledgeBase(KnowledgeBaseT&& value) { SetKnowledgeBase(std::forward<KnowledgeBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a condition node in your flow. Defines conditions
     * that lead to different branches of the flow.</p>
     */
    inline const ConditionFlowNodeConfiguration& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = ConditionFlowNodeConfiguration>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = ConditionFlowNodeConfiguration>
    FlowNodeConfiguration& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Lex node in your flow. Invokes an Amazon Lex
     * bot to identify the intent of the input and return the intent as the output.</p>
     */
    inline const LexFlowNodeConfiguration& GetLex() const { return m_lex; }
    inline bool LexHasBeenSet() const { return m_lexHasBeenSet; }
    template<typename LexT = LexFlowNodeConfiguration>
    void SetLex(LexT&& value) { m_lexHasBeenSet = true; m_lex = std::forward<LexT>(value); }
    template<typename LexT = LexFlowNodeConfiguration>
    FlowNodeConfiguration& WithLex(LexT&& value) { SetLex(std::forward<LexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a prompt node in your flow. Runs a prompt and
     * generates the model response as the output. You can use a prompt from Prompt
     * management or you can configure one in this node.</p>
     */
    inline const PromptFlowNodeConfiguration& GetPrompt() const { return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    template<typename PromptT = PromptFlowNodeConfiguration>
    void SetPrompt(PromptT&& value) { m_promptHasBeenSet = true; m_prompt = std::forward<PromptT>(value); }
    template<typename PromptT = PromptFlowNodeConfiguration>
    FlowNodeConfiguration& WithPrompt(PromptT&& value) { SetPrompt(std::forward<PromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a Lambda function node in your flow. Invokes an
     * Lambda function.</p>
     */
    inline const LambdaFunctionFlowNodeConfiguration& GetLambdaFunction() const { return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    template<typename LambdaFunctionT = LambdaFunctionFlowNodeConfiguration>
    void SetLambdaFunction(LambdaFunctionT&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::forward<LambdaFunctionT>(value); }
    template<typename LambdaFunctionT = LambdaFunctionFlowNodeConfiguration>
    FlowNodeConfiguration& WithLambdaFunction(LambdaFunctionT&& value) { SetLambdaFunction(std::forward<LambdaFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a storage node in your flow. Stores an input in
     * an Amazon S3 location.</p>
     */
    inline const StorageFlowNodeConfiguration& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = StorageFlowNodeConfiguration>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = StorageFlowNodeConfiguration>
    FlowNodeConfiguration& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an agent node in your flow. Invokes an alias of
     * an agent and returns the response.</p>
     */
    inline const AgentFlowNodeConfiguration& GetAgent() const { return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    template<typename AgentT = AgentFlowNodeConfiguration>
    void SetAgent(AgentT&& value) { m_agentHasBeenSet = true; m_agent = std::forward<AgentT>(value); }
    template<typename AgentT = AgentFlowNodeConfiguration>
    FlowNodeConfiguration& WithAgent(AgentT&& value) { SetAgent(std::forward<AgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a retrieval node in your flow. Retrieves data
     * from an Amazon S3 location and returns it as the output.</p>
     */
    inline const RetrievalFlowNodeConfiguration& GetRetrieval() const { return m_retrieval; }
    inline bool RetrievalHasBeenSet() const { return m_retrievalHasBeenSet; }
    template<typename RetrievalT = RetrievalFlowNodeConfiguration>
    void SetRetrieval(RetrievalT&& value) { m_retrievalHasBeenSet = true; m_retrieval = std::forward<RetrievalT>(value); }
    template<typename RetrievalT = RetrievalFlowNodeConfiguration>
    FlowNodeConfiguration& WithRetrieval(RetrievalT&& value) { SetRetrieval(std::forward<RetrievalT>(value)); return *this;}
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
    inline const IteratorFlowNodeConfiguration& GetIterator() const { return m_iterator; }
    inline bool IteratorHasBeenSet() const { return m_iteratorHasBeenSet; }
    template<typename IteratorT = IteratorFlowNodeConfiguration>
    void SetIterator(IteratorT&& value) { m_iteratorHasBeenSet = true; m_iterator = std::forward<IteratorT>(value); }
    template<typename IteratorT = IteratorFlowNodeConfiguration>
    FlowNodeConfiguration& WithIterator(IteratorT&& value) { SetIterator(std::forward<IteratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a collector node in your flow. Collects an
     * iteration of inputs and consolidates them into an array of outputs.</p>
     */
    inline const CollectorFlowNodeConfiguration& GetCollector() const { return m_collector; }
    inline bool CollectorHasBeenSet() const { return m_collectorHasBeenSet; }
    template<typename CollectorT = CollectorFlowNodeConfiguration>
    void SetCollector(CollectorT&& value) { m_collectorHasBeenSet = true; m_collector = std::forward<CollectorT>(value); }
    template<typename CollectorT = CollectorFlowNodeConfiguration>
    FlowNodeConfiguration& WithCollector(CollectorT&& value) { SetCollector(std::forward<CollectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for an inline code node in your flow. Inline code
     * nodes let you write and execute code directly within your flow, enabling data
     * transformations, custom logic, and integrations without needing an external
     * Lambda function.</p>
     */
    inline const InlineCodeFlowNodeConfiguration& GetInlineCode() const { return m_inlineCode; }
    inline bool InlineCodeHasBeenSet() const { return m_inlineCodeHasBeenSet; }
    template<typename InlineCodeT = InlineCodeFlowNodeConfiguration>
    void SetInlineCode(InlineCodeT&& value) { m_inlineCodeHasBeenSet = true; m_inlineCode = std::forward<InlineCodeT>(value); }
    template<typename InlineCodeT = InlineCodeFlowNodeConfiguration>
    FlowNodeConfiguration& WithInlineCode(InlineCodeT&& value) { SetInlineCode(std::forward<InlineCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for a DoWhile loop in your flow.</p>
     */
    inline const LoopFlowNodeConfiguration& GetLoop() const{
      return *m_loop;
    }
    inline bool LoopHasBeenSet() const { return m_loopHasBeenSet; }
    template<typename LoopT = LoopFlowNodeConfiguration>
    void SetLoop(LoopT&& value) {
      m_loopHasBeenSet = true; 
      m_loop = Aws::MakeShared<LoopFlowNodeConfiguration>("FlowNodeConfiguration", std::forward<LoopT>(value));
    }
    template<typename LoopT = LoopFlowNodeConfiguration>
    FlowNodeConfiguration& WithLoop(LoopT&& value) { SetLoop(std::forward<LoopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains input node configurations for a DoWhile loop in your flow.</p>
     */
    inline const LoopInputFlowNodeConfiguration& GetLoopInput() const { return m_loopInput; }
    inline bool LoopInputHasBeenSet() const { return m_loopInputHasBeenSet; }
    template<typename LoopInputT = LoopInputFlowNodeConfiguration>
    void SetLoopInput(LoopInputT&& value) { m_loopInputHasBeenSet = true; m_loopInput = std::forward<LoopInputT>(value); }
    template<typename LoopInputT = LoopInputFlowNodeConfiguration>
    FlowNodeConfiguration& WithLoopInput(LoopInputT&& value) { SetLoopInput(std::forward<LoopInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains controller node configurations for a DoWhile loop in your flow.</p>
     */
    inline const LoopControllerFlowNodeConfiguration& GetLoopController() const { return m_loopController; }
    inline bool LoopControllerHasBeenSet() const { return m_loopControllerHasBeenSet; }
    template<typename LoopControllerT = LoopControllerFlowNodeConfiguration>
    void SetLoopController(LoopControllerT&& value) { m_loopControllerHasBeenSet = true; m_loopController = std::forward<LoopControllerT>(value); }
    template<typename LoopControllerT = LoopControllerFlowNodeConfiguration>
    FlowNodeConfiguration& WithLoopController(LoopControllerT&& value) { SetLoopController(std::forward<LoopControllerT>(value)); return *this;}
    ///@}
  private:

    InputFlowNodeConfiguration m_input;
    bool m_inputHasBeenSet = false;

    OutputFlowNodeConfiguration m_output;
    bool m_outputHasBeenSet = false;

    KnowledgeBaseFlowNodeConfiguration m_knowledgeBase;
    bool m_knowledgeBaseHasBeenSet = false;

    ConditionFlowNodeConfiguration m_condition;
    bool m_conditionHasBeenSet = false;

    LexFlowNodeConfiguration m_lex;
    bool m_lexHasBeenSet = false;

    PromptFlowNodeConfiguration m_prompt;
    bool m_promptHasBeenSet = false;

    LambdaFunctionFlowNodeConfiguration m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;

    StorageFlowNodeConfiguration m_storage;
    bool m_storageHasBeenSet = false;

    AgentFlowNodeConfiguration m_agent;
    bool m_agentHasBeenSet = false;

    RetrievalFlowNodeConfiguration m_retrieval;
    bool m_retrievalHasBeenSet = false;

    IteratorFlowNodeConfiguration m_iterator;
    bool m_iteratorHasBeenSet = false;

    CollectorFlowNodeConfiguration m_collector;
    bool m_collectorHasBeenSet = false;

    InlineCodeFlowNodeConfiguration m_inlineCode;
    bool m_inlineCodeHasBeenSet = false;

    std::shared_ptr<LoopFlowNodeConfiguration> m_loop;
    bool m_loopHasBeenSet = false;

    LoopInputFlowNodeConfiguration m_loopInput;
    bool m_loopInputHasBeenSet = false;

    LoopControllerFlowNodeConfiguration m_loopController;
    bool m_loopControllerHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
