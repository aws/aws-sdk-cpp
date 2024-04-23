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
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig();
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntityConfig>& GetPiiEntitiesConfig() const{ return m_piiEntitiesConfig; }

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline bool PiiEntitiesConfigHasBeenSet() const { return m_piiEntitiesConfigHasBeenSet; }

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline void SetPiiEntitiesConfig(const Aws::Vector<GuardrailPiiEntityConfig>& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = value; }

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline void SetPiiEntitiesConfig(Aws::Vector<GuardrailPiiEntityConfig>&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = std::move(value); }

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(const Aws::Vector<GuardrailPiiEntityConfig>& value) { SetPiiEntitiesConfig(value); return *this;}

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(Aws::Vector<GuardrailPiiEntityConfig>&& value) { SetPiiEntitiesConfig(std::move(value)); return *this;}

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(const GuardrailPiiEntityConfig& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.push_back(value); return *this; }

    /**
     * <p>A list of PII entities to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(GuardrailPiiEntityConfig&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegexConfig>& GetRegexesConfig() const{ return m_regexesConfig; }

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline bool RegexesConfigHasBeenSet() const { return m_regexesConfigHasBeenSet; }

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline void SetRegexesConfig(const Aws::Vector<GuardrailRegexConfig>& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = value; }

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline void SetRegexesConfig(Aws::Vector<GuardrailRegexConfig>&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = std::move(value); }

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(const Aws::Vector<GuardrailRegexConfig>& value) { SetRegexesConfig(value); return *this;}

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(Aws::Vector<GuardrailRegexConfig>&& value) { SetRegexesConfig(std::move(value)); return *this;}

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(const GuardrailRegexConfig& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.push_back(value); return *this; }

    /**
     * <p>A list of regular expressions to configure to the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(GuardrailRegexConfig&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailPiiEntityConfig> m_piiEntitiesConfig;
    bool m_piiEntitiesConfigHasBeenSet = false;

    Aws::Vector<GuardrailRegexConfig> m_regexesConfig;
    bool m_regexesConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
