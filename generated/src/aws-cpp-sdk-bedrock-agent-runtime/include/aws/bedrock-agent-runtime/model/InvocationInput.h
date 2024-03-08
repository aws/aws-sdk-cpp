/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ActionGroupInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/InvocationType.h>
#include <aws/bedrock-agent-runtime/model/KnowledgeBaseLookupInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information pertaining to the action group or knowledge base that is
   * being invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationInput">AWS
   * API Reference</a></p>
   */
  class InvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline const ActionGroupInvocationInput& GetActionGroupInvocationInput() const{ return m_actionGroupInvocationInput; }

    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline bool ActionGroupInvocationInputHasBeenSet() const { return m_actionGroupInvocationInputHasBeenSet; }

    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline void SetActionGroupInvocationInput(const ActionGroupInvocationInput& value) { m_actionGroupInvocationInputHasBeenSet = true; m_actionGroupInvocationInput = value; }

    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline void SetActionGroupInvocationInput(ActionGroupInvocationInput&& value) { m_actionGroupInvocationInputHasBeenSet = true; m_actionGroupInvocationInput = std::move(value); }

    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline InvocationInput& WithActionGroupInvocationInput(const ActionGroupInvocationInput& value) { SetActionGroupInvocationInput(value); return *this;}

    /**
     * <p>Contains information about the action group to be invoked.</p>
     */
    inline InvocationInput& WithActionGroupInvocationInput(ActionGroupInvocationInput&& value) { SetActionGroupInvocationInput(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline InvocationInput& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Specifies whether the agent is invoking an action group or a knowledge
     * base.</p>
     */
    inline InvocationInput& WithInvocationType(InvocationType&& value) { SetInvocationType(std::move(value)); return *this;}


    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline const KnowledgeBaseLookupInput& GetKnowledgeBaseLookupInput() const{ return m_knowledgeBaseLookupInput; }

    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline bool KnowledgeBaseLookupInputHasBeenSet() const { return m_knowledgeBaseLookupInputHasBeenSet; }

    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline void SetKnowledgeBaseLookupInput(const KnowledgeBaseLookupInput& value) { m_knowledgeBaseLookupInputHasBeenSet = true; m_knowledgeBaseLookupInput = value; }

    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline void SetKnowledgeBaseLookupInput(KnowledgeBaseLookupInput&& value) { m_knowledgeBaseLookupInputHasBeenSet = true; m_knowledgeBaseLookupInput = std::move(value); }

    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline InvocationInput& WithKnowledgeBaseLookupInput(const KnowledgeBaseLookupInput& value) { SetKnowledgeBaseLookupInput(value); return *this;}

    /**
     * <p>Contains details about the knowledge base to look up and the query to be
     * made.</p>
     */
    inline InvocationInput& WithKnowledgeBaseLookupInput(KnowledgeBaseLookupInput&& value) { SetKnowledgeBaseLookupInput(std::move(value)); return *this;}


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
    inline InvocationInput& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline InvocationInput& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trace.</p>
     */
    inline InvocationInput& WithTraceId(const char* value) { SetTraceId(value); return *this;}

  private:

    ActionGroupInvocationInput m_actionGroupInvocationInput;
    bool m_actionGroupInvocationInputHasBeenSet = false;

    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;

    KnowledgeBaseLookupInput m_knowledgeBaseLookupInput;
    bool m_knowledgeBaseLookupInputHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
