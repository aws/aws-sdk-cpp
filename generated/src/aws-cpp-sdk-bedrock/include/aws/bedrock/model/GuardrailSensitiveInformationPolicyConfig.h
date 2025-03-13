/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailPiiEntityConfig.h>
#include <aws/bedrock/model/GuardrailRegexConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains details about PII entities and regular expressions to configure for
   * the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailSensitiveInformationPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailSensitiveInformationPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig() = default;
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntityConfig>& GetPiiEntitiesConfig() const { return m_piiEntitiesConfig; }
    inline bool PiiEntitiesConfigHasBeenSet() const { return m_piiEntitiesConfigHasBeenSet; }
    template<typename PiiEntitiesConfigT = Aws::Vector<GuardrailPiiEntityConfig>>
    void SetPiiEntitiesConfig(PiiEntitiesConfigT&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = std::forward<PiiEntitiesConfigT>(value); }
    template<typename PiiEntitiesConfigT = Aws::Vector<GuardrailPiiEntityConfig>>
    GuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(PiiEntitiesConfigT&& value) { SetPiiEntitiesConfig(std::forward<PiiEntitiesConfigT>(value)); return *this;}
    template<typename PiiEntitiesConfigT = GuardrailPiiEntityConfig>
    GuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(PiiEntitiesConfigT&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.emplace_back(std::forward<PiiEntitiesConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegexConfig>& GetRegexesConfig() const { return m_regexesConfig; }
    inline bool RegexesConfigHasBeenSet() const { return m_regexesConfigHasBeenSet; }
    template<typename RegexesConfigT = Aws::Vector<GuardrailRegexConfig>>
    void SetRegexesConfig(RegexesConfigT&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = std::forward<RegexesConfigT>(value); }
    template<typename RegexesConfigT = Aws::Vector<GuardrailRegexConfig>>
    GuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(RegexesConfigT&& value) { SetRegexesConfig(std::forward<RegexesConfigT>(value)); return *this;}
    template<typename RegexesConfigT = GuardrailRegexConfig>
    GuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(RegexesConfigT&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.emplace_back(std::forward<RegexesConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailPiiEntityConfig> m_piiEntitiesConfig;
    bool m_piiEntitiesConfigHasBeenSet = false;

    Aws::Vector<GuardrailRegexConfig> m_regexesConfig;
    bool m_regexesConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
