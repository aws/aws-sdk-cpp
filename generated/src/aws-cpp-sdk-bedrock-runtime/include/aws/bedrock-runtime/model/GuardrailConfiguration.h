/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailTrace.h>
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
   * <p>Configuration information for a guardrail that you use with the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailConfiguration
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailConfiguration();
    AWS_BEDROCKRUNTIME_API GuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }
    inline GuardrailConfiguration& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}
    inline GuardrailConfiguration& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}
    inline GuardrailConfiguration& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }
    inline GuardrailConfiguration& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}
    inline GuardrailConfiguration& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}
    inline GuardrailConfiguration& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace behavior for the guardrail.</p>
     */
    inline const GuardrailTrace& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const GuardrailTrace& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(GuardrailTrace&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline GuardrailConfiguration& WithTrace(const GuardrailTrace& value) { SetTrace(value); return *this;}
    inline GuardrailConfiguration& WithTrace(GuardrailTrace&& value) { SetTrace(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;

    GuardrailTrace m_trace;
    bool m_traceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
