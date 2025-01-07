/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailTraceAssessment.h>
#include <aws/bedrock-runtime/model/PromptRouterTrace.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The trace object in a response from <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>.
   * Currently, you can only trace guardrails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStreamTrace">AWS
   * API Reference</a></p>
   */
  class ConverseStreamTrace
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseStreamTrace();
    AWS_BEDROCKRUNTIME_API ConverseStreamTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseStreamTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The guardrail trace object. </p>
     */
    inline const GuardrailTraceAssessment& GetGuardrail() const{ return m_guardrail; }
    inline bool GuardrailHasBeenSet() const { return m_guardrailHasBeenSet; }
    inline void SetGuardrail(const GuardrailTraceAssessment& value) { m_guardrailHasBeenSet = true; m_guardrail = value; }
    inline void SetGuardrail(GuardrailTraceAssessment&& value) { m_guardrailHasBeenSet = true; m_guardrail = std::move(value); }
    inline ConverseStreamTrace& WithGuardrail(const GuardrailTraceAssessment& value) { SetGuardrail(value); return *this;}
    inline ConverseStreamTrace& WithGuardrail(GuardrailTraceAssessment&& value) { SetGuardrail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request's prompt router.</p>
     */
    inline const PromptRouterTrace& GetPromptRouter() const{ return m_promptRouter; }
    inline bool PromptRouterHasBeenSet() const { return m_promptRouterHasBeenSet; }
    inline void SetPromptRouter(const PromptRouterTrace& value) { m_promptRouterHasBeenSet = true; m_promptRouter = value; }
    inline void SetPromptRouter(PromptRouterTrace&& value) { m_promptRouterHasBeenSet = true; m_promptRouter = std::move(value); }
    inline ConverseStreamTrace& WithPromptRouter(const PromptRouterTrace& value) { SetPromptRouter(value); return *this;}
    inline ConverseStreamTrace& WithPromptRouter(PromptRouterTrace&& value) { SetPromptRouter(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailTraceAssessment m_guardrail;
    bool m_guardrailHasBeenSet = false;

    PromptRouterTrace m_promptRouter;
    bool m_promptRouterHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
