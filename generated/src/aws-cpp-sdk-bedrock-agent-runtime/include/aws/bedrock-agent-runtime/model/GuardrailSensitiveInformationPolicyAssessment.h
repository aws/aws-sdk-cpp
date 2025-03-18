/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailPiiEntityFilter.h>
#include <aws/bedrock-agent-runtime/model/GuardrailRegexFilter.h>
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
   * <p>The details of the sensitive policy assessment used in the
   * Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailSensitiveInformationPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailSensitiveInformationPolicyAssessment
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailSensitiveInformationPolicyAssessment() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailSensitiveInformationPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailSensitiveInformationPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the PII entities used in the sensitive policy assessment for
     * the Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntityFilter>& GetPiiEntities() const { return m_piiEntities; }
    inline bool PiiEntitiesHasBeenSet() const { return m_piiEntitiesHasBeenSet; }
    template<typename PiiEntitiesT = Aws::Vector<GuardrailPiiEntityFilter>>
    void SetPiiEntities(PiiEntitiesT&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities = std::forward<PiiEntitiesT>(value); }
    template<typename PiiEntitiesT = Aws::Vector<GuardrailPiiEntityFilter>>
    GuardrailSensitiveInformationPolicyAssessment& WithPiiEntities(PiiEntitiesT&& value) { SetPiiEntities(std::forward<PiiEntitiesT>(value)); return *this;}
    template<typename PiiEntitiesT = GuardrailPiiEntityFilter>
    GuardrailSensitiveInformationPolicyAssessment& AddPiiEntities(PiiEntitiesT&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities.emplace_back(std::forward<PiiEntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the regexes used in the sensitive policy assessment for the
     * Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegexFilter>& GetRegexes() const { return m_regexes; }
    inline bool RegexesHasBeenSet() const { return m_regexesHasBeenSet; }
    template<typename RegexesT = Aws::Vector<GuardrailRegexFilter>>
    void SetRegexes(RegexesT&& value) { m_regexesHasBeenSet = true; m_regexes = std::forward<RegexesT>(value); }
    template<typename RegexesT = Aws::Vector<GuardrailRegexFilter>>
    GuardrailSensitiveInformationPolicyAssessment& WithRegexes(RegexesT&& value) { SetRegexes(std::forward<RegexesT>(value)); return *this;}
    template<typename RegexesT = GuardrailRegexFilter>
    GuardrailSensitiveInformationPolicyAssessment& AddRegexes(RegexesT&& value) { m_regexesHasBeenSet = true; m_regexes.emplace_back(std::forward<RegexesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailPiiEntityFilter> m_piiEntities;
    bool m_piiEntitiesHasBeenSet = false;

    Aws::Vector<GuardrailRegexFilter> m_regexes;
    bool m_regexesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
