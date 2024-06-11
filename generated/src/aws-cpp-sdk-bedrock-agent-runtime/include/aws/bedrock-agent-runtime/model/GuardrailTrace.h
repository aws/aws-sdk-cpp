/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailAssessment.h>
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
   * <p>The trace details used in the Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailTrace">AWS
   * API Reference</a></p>
   */
  class GuardrailTrace
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The trace action details used with the Guardrail.</p>
     */
    inline const GuardrailAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailTrace& WithAction(const GuardrailAction& value) { SetAction(value); return *this;}
    inline GuardrailTrace& WithAction(GuardrailAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the input assessments used in the Guardrail Trace.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetInputAssessments() const{ return m_inputAssessments; }
    inline bool InputAssessmentsHasBeenSet() const { return m_inputAssessmentsHasBeenSet; }
    inline void SetInputAssessments(const Aws::Vector<GuardrailAssessment>& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments = value; }
    inline void SetInputAssessments(Aws::Vector<GuardrailAssessment>&& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments = std::move(value); }
    inline GuardrailTrace& WithInputAssessments(const Aws::Vector<GuardrailAssessment>& value) { SetInputAssessments(value); return *this;}
    inline GuardrailTrace& WithInputAssessments(Aws::Vector<GuardrailAssessment>&& value) { SetInputAssessments(std::move(value)); return *this;}
    inline GuardrailTrace& AddInputAssessments(const GuardrailAssessment& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments.push_back(value); return *this; }
    inline GuardrailTrace& AddInputAssessments(GuardrailAssessment&& value) { m_inputAssessmentsHasBeenSet = true; m_inputAssessments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the output assessments used in the Guardrail Trace.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetOutputAssessments() const{ return m_outputAssessments; }
    inline bool OutputAssessmentsHasBeenSet() const { return m_outputAssessmentsHasBeenSet; }
    inline void SetOutputAssessments(const Aws::Vector<GuardrailAssessment>& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = value; }
    inline void SetOutputAssessments(Aws::Vector<GuardrailAssessment>&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = std::move(value); }
    inline GuardrailTrace& WithOutputAssessments(const Aws::Vector<GuardrailAssessment>& value) { SetOutputAssessments(value); return *this;}
    inline GuardrailTrace& WithOutputAssessments(Aws::Vector<GuardrailAssessment>&& value) { SetOutputAssessments(std::move(value)); return *this;}
    inline GuardrailTrace& AddOutputAssessments(const GuardrailAssessment& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.push_back(value); return *this; }
    inline GuardrailTrace& AddOutputAssessments(GuardrailAssessment&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the trace Id used in the Guardrail Trace.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }
    inline GuardrailTrace& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}
    inline GuardrailTrace& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}
    inline GuardrailTrace& WithTraceId(const char* value) { SetTraceId(value); return *this;}
    ///@}
  private:

    GuardrailAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<GuardrailAssessment> m_inputAssessments;
    bool m_inputAssessmentsHasBeenSet = false;

    Aws::Vector<GuardrailAssessment> m_outputAssessments;
    bool m_outputAssessmentsHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
