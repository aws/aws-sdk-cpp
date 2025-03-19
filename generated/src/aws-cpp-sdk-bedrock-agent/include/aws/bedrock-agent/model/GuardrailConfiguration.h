/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about a guardrail associated with a resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class GuardrailConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API GuardrailConfiguration() = default;
    AWS_BEDROCKAGENT_API GuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API GuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const { return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    template<typename GuardrailIdentifierT = Aws::String>
    void SetGuardrailIdentifier(GuardrailIdentifierT&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::forward<GuardrailIdentifierT>(value); }
    template<typename GuardrailIdentifierT = Aws::String>
    GuardrailConfiguration& WithGuardrailIdentifier(GuardrailIdentifierT&& value) { SetGuardrailIdentifier(std::forward<GuardrailIdentifierT>(value)); return *this;}
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

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
