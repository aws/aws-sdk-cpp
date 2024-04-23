/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailWordConfig.h>
#include <aws/bedrock/model/GuardrailManagedWordsConfig.h>
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
   * <p>Contains details about the word policy to configured for the
   * guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailWordPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailWordPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailWordPolicyConfig();
    AWS_BEDROCK_API GuardrailWordPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailWordPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailWordConfig>& GetWordsConfig() const{ return m_wordsConfig; }

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline bool WordsConfigHasBeenSet() const { return m_wordsConfigHasBeenSet; }

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline void SetWordsConfig(const Aws::Vector<GuardrailWordConfig>& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig = value; }

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline void SetWordsConfig(Aws::Vector<GuardrailWordConfig>&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig = std::move(value); }

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& WithWordsConfig(const Aws::Vector<GuardrailWordConfig>& value) { SetWordsConfig(value); return *this;}

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& WithWordsConfig(Aws::Vector<GuardrailWordConfig>&& value) { SetWordsConfig(std::move(value)); return *this;}

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& AddWordsConfig(const GuardrailWordConfig& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig.push_back(value); return *this; }

    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& AddWordsConfig(GuardrailWordConfig&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailManagedWordsConfig>& GetManagedWordListsConfig() const{ return m_managedWordListsConfig; }

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline bool ManagedWordListsConfigHasBeenSet() const { return m_managedWordListsConfigHasBeenSet; }

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline void SetManagedWordListsConfig(const Aws::Vector<GuardrailManagedWordsConfig>& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig = value; }

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline void SetManagedWordListsConfig(Aws::Vector<GuardrailManagedWordsConfig>&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig = std::move(value); }

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& WithManagedWordListsConfig(const Aws::Vector<GuardrailManagedWordsConfig>& value) { SetManagedWordListsConfig(value); return *this;}

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& WithManagedWordListsConfig(Aws::Vector<GuardrailManagedWordsConfig>&& value) { SetManagedWordListsConfig(std::move(value)); return *this;}

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& AddManagedWordListsConfig(const GuardrailManagedWordsConfig& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig.push_back(value); return *this; }

    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline GuardrailWordPolicyConfig& AddManagedWordListsConfig(GuardrailManagedWordsConfig&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailWordConfig> m_wordsConfig;
    bool m_wordsConfigHasBeenSet = false;

    Aws::Vector<GuardrailManagedWordsConfig> m_managedWordListsConfig;
    bool m_managedWordListsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
