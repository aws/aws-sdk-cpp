/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>The configuration details for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const { return m_guardrailId; }
    inline bool GuardrailIdHasBeenSet() const { return m_guardrailIdHasBeenSet; }
    template<typename GuardrailIdT = Aws::String>
    void SetGuardrailId(GuardrailIdT&& value) { m_guardrailIdHasBeenSet = true; m_guardrailId = std::forward<GuardrailIdT>(value); }
    template<typename GuardrailIdT = Aws::String>
    GuardrailConfiguration& WithGuardrailId(GuardrailIdT&& value) { SetGuardrailId(std::forward<GuardrailIdT>(value)); return *this;}
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
    GuardrailConfiguration& WithGuardrailVersion(GuardrailVersionT&& value) { SetGuardrailVersion(std::forward<GuardrailVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailId;
    bool m_guardrailIdHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
