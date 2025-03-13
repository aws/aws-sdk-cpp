/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailPiiEntity.h>
#include <aws/bedrock/model/GuardrailRegex.h>
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
   * <p>Contains details about PII entities and regular expressions configured for
   * the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailSensitiveInformationPolicy">AWS
   * API Reference</a></p>
   */
  class GuardrailSensitiveInformationPolicy
  {
  public:
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy() = default;
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntity>& GetPiiEntities() const { return m_piiEntities; }
    inline bool PiiEntitiesHasBeenSet() const { return m_piiEntitiesHasBeenSet; }
    template<typename PiiEntitiesT = Aws::Vector<GuardrailPiiEntity>>
    void SetPiiEntities(PiiEntitiesT&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities = std::forward<PiiEntitiesT>(value); }
    template<typename PiiEntitiesT = Aws::Vector<GuardrailPiiEntity>>
    GuardrailSensitiveInformationPolicy& WithPiiEntities(PiiEntitiesT&& value) { SetPiiEntities(std::forward<PiiEntitiesT>(value)); return *this;}
    template<typename PiiEntitiesT = GuardrailPiiEntity>
    GuardrailSensitiveInformationPolicy& AddPiiEntities(PiiEntitiesT&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities.emplace_back(std::forward<PiiEntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegex>& GetRegexes() const { return m_regexes; }
    inline bool RegexesHasBeenSet() const { return m_regexesHasBeenSet; }
    template<typename RegexesT = Aws::Vector<GuardrailRegex>>
    void SetRegexes(RegexesT&& value) { m_regexesHasBeenSet = true; m_regexes = std::forward<RegexesT>(value); }
    template<typename RegexesT = Aws::Vector<GuardrailRegex>>
    GuardrailSensitiveInformationPolicy& WithRegexes(RegexesT&& value) { SetRegexes(std::forward<RegexesT>(value)); return *this;}
    template<typename RegexesT = GuardrailRegex>
    GuardrailSensitiveInformationPolicy& AddRegexes(RegexesT&& value) { m_regexesHasBeenSet = true; m_regexes.emplace_back(std::forward<RegexesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailPiiEntity> m_piiEntities;
    bool m_piiEntitiesHasBeenSet = false;

    Aws::Vector<GuardrailRegex> m_regexes;
    bool m_regexesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
