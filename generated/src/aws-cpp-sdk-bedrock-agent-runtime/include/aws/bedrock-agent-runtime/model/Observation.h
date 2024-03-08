/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupInvocationOutput.h>
#include <aws/bedrock-agent-runtime/model/FinalResponse.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseLookupOutput.h>
#include <aws/bedrock-agent-runtime/model/RepromptResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Type.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains the result or output of an action group or knowledge base, or the
   * response to the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Observation">AWS
   * API Reference</a></p>
   */
  class Observation
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Observation();
    AWS_BEDROCKAGENTRUNTIME_API Observation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Observation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline const ActionGroupInvocationOutput& GetActionGroupInvocationOutput() const{ return m_actionGroupInvocationOutput; }

    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline bool ActionGroupInvocationOutputHasBeenSet() const { return m_actionGroupInvocationOutputHasBeenSet; }

    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline void SetActionGroupInvocationOutput(const ActionGroupInvocationOutput& value) { m_actionGroupInvocationOutputHasBeenSet = true; m_actionGroupInvocationOutput = value; }

    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline void SetActionGroupInvocationOutput(ActionGroupInvocationOutput&& value) { m_actionGroupInvocationOutputHasBeenSet = true; m_actionGroupInvocationOutput = std::move(value); }

    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline Observation& WithActionGroupInvocationOutput(const ActionGroupInvocationOutput& value) { SetActionGroupInvocationOutput(value); return *this;}

    /**
     * <p>Contains the JSON-formatted string returned by the API invoked by the action
     * group.</p>
     */
    inline Observation& WithActionGroupInvocationOutput(ActionGroupInvocationOutput&& value) { SetActionGroupInvocationOutput(std::move(value)); return *this;}


    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline const FinalResponse& GetFinalResponse() const{ return m_finalResponse; }

    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline bool FinalResponseHasBeenSet() const { return m_finalResponseHasBeenSet; }

    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline void SetFinalResponse(const FinalResponse& value) { m_finalResponseHasBeenSet = true; m_finalResponse = value; }

    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline void SetFinalResponse(FinalResponse&& value) { m_finalResponseHasBeenSet = true; m_finalResponse = std::move(value); }

    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline Observation& WithFinalResponse(const FinalResponse& value) { SetFinalResponse(value); return *this;}

    /**
     * <p>Contains details about the response to the user.</p>
     */
    inline Observation& WithFinalResponse(FinalResponse&& value) { SetFinalResponse(std::move(value)); return *this;}


    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline const KnowledgeBaseLookupOutput& GetKnowledgeBaseLookupOutput() const{ return m_knowledgeBaseLookupOutput; }

    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline bool KnowledgeBaseLookupOutputHasBeenSet() const { return m_knowledgeBaseLookupOutputHasBeenSet; }

    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline void SetKnowledgeBaseLookupOutput(const KnowledgeBaseLookupOutput& value) { m_knowledgeBaseLookupOutputHasBeenSet = true; m_knowledgeBaseLookupOutput = value; }

    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline void SetKnowledgeBaseLookupOutput(KnowledgeBaseLookupOutput&& value) { m_knowledgeBaseLookupOutputHasBeenSet = true; m_knowledgeBaseLookupOutput = std::move(value); }

    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline Observation& WithKnowledgeBaseLookupOutput(const KnowledgeBaseLookupOutput& value) { SetKnowledgeBaseLookupOutput(value); return *this;}

    /**
     * <p>Contains details about the results from looking up the knowledge base.</p>
     */
    inline Observation& WithKnowledgeBaseLookupOutput(KnowledgeBaseLookupOutput&& value) { SetKnowledgeBaseLookupOutput(std::move(value)); return *this;}


    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline const RepromptResponse& GetRepromptResponse() const{ return m_repromptResponse; }

    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline bool RepromptResponseHasBeenSet() const { return m_repromptResponseHasBeenSet; }

    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline void SetRepromptResponse(const RepromptResponse& value) { m_repromptResponseHasBeenSet = true; m_repromptResponse = value; }

    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline void SetRepromptResponse(RepromptResponse&& value) { m_repromptResponseHasBeenSet = true; m_repromptResponse = std::move(value); }

    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline Observation& WithRepromptResponse(const RepromptResponse& value) { SetRepromptResponse(value); return *this;}

    /**
     * <p>Contains details about the response to reprompt the input.</p>
     */
    inline Observation& WithRepromptResponse(RepromptResponse&& value) { SetRepromptResponse(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline Observation& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline Observation& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline Observation& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline Observation& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Specifies what kind of information the agent returns in the observation. The
     * following values are possible.</p> <ul> <li> <p> <code>ACTION_GROUP</code> – The
     * agent returns the result of an action group.</p> </li> <li> <p>
     * <code>KNOWLEDGE_BASE</code> – The agent returns information from a knowledge
     * base.</p> </li> <li> <p> <code>FINISH</code> – The agent returns a final
     * response to the user with no follow-up.</p> </li> <li> <p> <code>ASK_USER</code>
     * – The agent asks the user a question.</p> </li> <li> <p> <code>REPROMPT</code> –
     * The agent prompts the user again for the same information.</p> </li> </ul>
     */
    inline Observation& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    ActionGroupInvocationOutput m_actionGroupInvocationOutput;
    bool m_actionGroupInvocationOutputHasBeenSet = false;

    FinalResponse m_finalResponse;
    bool m_finalResponseHasBeenSet = false;

    KnowledgeBaseLookupOutput m_knowledgeBaseLookupOutput;
    bool m_knowledgeBaseLookupOutputHasBeenSet = false;

    RepromptResponse m_repromptResponse;
    bool m_repromptResponseHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
