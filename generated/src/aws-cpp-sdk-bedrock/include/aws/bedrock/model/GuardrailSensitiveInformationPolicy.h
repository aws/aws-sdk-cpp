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
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy();
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailSensitiveInformationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntity>& GetPiiEntities() const{ return m_piiEntities; }

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline bool PiiEntitiesHasBeenSet() const { return m_piiEntitiesHasBeenSet; }

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline void SetPiiEntities(const Aws::Vector<GuardrailPiiEntity>& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities = value; }

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline void SetPiiEntities(Aws::Vector<GuardrailPiiEntity>&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities = std::move(value); }

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& WithPiiEntities(const Aws::Vector<GuardrailPiiEntity>& value) { SetPiiEntities(value); return *this;}

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& WithPiiEntities(Aws::Vector<GuardrailPiiEntity>&& value) { SetPiiEntities(std::move(value)); return *this;}

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& AddPiiEntities(const GuardrailPiiEntity& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities.push_back(value); return *this; }

    /**
     * <p>The list of PII entities configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& AddPiiEntities(GuardrailPiiEntity&& value) { m_piiEntitiesHasBeenSet = true; m_piiEntities.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegex>& GetRegexes() const{ return m_regexes; }

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline bool RegexesHasBeenSet() const { return m_regexesHasBeenSet; }

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline void SetRegexes(const Aws::Vector<GuardrailRegex>& value) { m_regexesHasBeenSet = true; m_regexes = value; }

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline void SetRegexes(Aws::Vector<GuardrailRegex>&& value) { m_regexesHasBeenSet = true; m_regexes = std::move(value); }

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& WithRegexes(const Aws::Vector<GuardrailRegex>& value) { SetRegexes(value); return *this;}

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& WithRegexes(Aws::Vector<GuardrailRegex>&& value) { SetRegexes(std::move(value)); return *this;}

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& AddRegexes(const GuardrailRegex& value) { m_regexesHasBeenSet = true; m_regexes.push_back(value); return *this; }

    /**
     * <p>The list of regular expressions configured for the guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicy& AddRegexes(GuardrailRegex&& value) { m_regexesHasBeenSet = true; m_regexes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailPiiEntity> m_piiEntities;
    bool m_piiEntitiesHasBeenSet = false;

    Aws::Vector<GuardrailRegex> m_regexes;
    bool m_regexesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
