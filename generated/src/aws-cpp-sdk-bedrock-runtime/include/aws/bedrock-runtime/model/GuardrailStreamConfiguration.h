/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailTrace.h>
#include <aws/bedrock-runtime/model/GuardrailStreamProcessingMode.h>
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
   * <p>Configuration information for a guardrail that you use with the
   * <a>ConverseStream</a> action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailStreamConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailStreamConfiguration
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailStreamConfiguration() = default;
    AWS_BEDROCKRUNTIME_API GuardrailStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const { return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    template<typename GuardrailIdentifierT = Aws::String>
    void SetGuardrailIdentifier(GuardrailIdentifierT&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::forward<GuardrailIdentifierT>(value); }
    template<typename GuardrailIdentifierT = Aws::String>
    GuardrailStreamConfiguration& WithGuardrailIdentifier(GuardrailIdentifierT&& value) { SetGuardrailIdentifier(std::forward<GuardrailIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    template<typename GuardrailVersionT = Aws::String>
    void SetGuardrailVersion(GuardrailVersionT&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::forward<GuardrailVersionT>(value); }
    template<typename GuardrailVersionT = Aws::String>
    GuardrailStreamConfiguration& WithGuardrailVersion(GuardrailVersionT&& value) { SetGuardrailVersion(std::forward<GuardrailVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace behavior for the guardrail.</p>
     */
    inline GuardrailTrace GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(GuardrailTrace value) { m_traceHasBeenSet = true; m_trace = value; }
    inline GuardrailStreamConfiguration& WithTrace(GuardrailTrace value) { SetTrace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing mode. </p> <p>The processing mode. For more information, see
     * <i>Configure streaming response behavior</i> in the <i>Amazon Bedrock User
     * Guide</i>. </p>
     */
    inline GuardrailStreamProcessingMode GetStreamProcessingMode() const { return m_streamProcessingMode; }
    inline bool StreamProcessingModeHasBeenSet() const { return m_streamProcessingModeHasBeenSet; }
    inline void SetStreamProcessingMode(GuardrailStreamProcessingMode value) { m_streamProcessingModeHasBeenSet = true; m_streamProcessingMode = value; }
    inline GuardrailStreamConfiguration& WithStreamProcessingMode(GuardrailStreamProcessingMode value) { SetStreamProcessingMode(value); return *this;}
    ///@}
  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;

    GuardrailTrace m_trace{GuardrailTrace::NOT_SET};
    bool m_traceHasBeenSet = false;

    GuardrailStreamProcessingMode m_streamProcessingMode{GuardrailStreamProcessingMode::NOT_SET};
    bool m_streamProcessingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
