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
    AWS_BEDROCK_API GuardrailWordPolicyConfig() = default;
    AWS_BEDROCK_API GuardrailWordPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailWordPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of words to configure for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailWordConfig>& GetWordsConfig() const { return m_wordsConfig; }
    inline bool WordsConfigHasBeenSet() const { return m_wordsConfigHasBeenSet; }
    template<typename WordsConfigT = Aws::Vector<GuardrailWordConfig>>
    void SetWordsConfig(WordsConfigT&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig = std::forward<WordsConfigT>(value); }
    template<typename WordsConfigT = Aws::Vector<GuardrailWordConfig>>
    GuardrailWordPolicyConfig& WithWordsConfig(WordsConfigT&& value) { SetWordsConfig(std::forward<WordsConfigT>(value)); return *this;}
    template<typename WordsConfigT = GuardrailWordConfig>
    GuardrailWordPolicyConfig& AddWordsConfig(WordsConfigT&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig.emplace_back(std::forward<WordsConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of managed words to configure for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailManagedWordsConfig>& GetManagedWordListsConfig() const { return m_managedWordListsConfig; }
    inline bool ManagedWordListsConfigHasBeenSet() const { return m_managedWordListsConfigHasBeenSet; }
    template<typename ManagedWordListsConfigT = Aws::Vector<GuardrailManagedWordsConfig>>
    void SetManagedWordListsConfig(ManagedWordListsConfigT&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig = std::forward<ManagedWordListsConfigT>(value); }
    template<typename ManagedWordListsConfigT = Aws::Vector<GuardrailManagedWordsConfig>>
    GuardrailWordPolicyConfig& WithManagedWordListsConfig(ManagedWordListsConfigT&& value) { SetManagedWordListsConfig(std::forward<ManagedWordListsConfigT>(value)); return *this;}
    template<typename ManagedWordListsConfigT = GuardrailManagedWordsConfig>
    GuardrailWordPolicyConfig& AddManagedWordListsConfig(ManagedWordListsConfigT&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig.emplace_back(std::forward<ManagedWordListsConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailWordConfig> m_wordsConfig;
    bool m_wordsConfigHasBeenSet = false;

    Aws::Vector<GuardrailManagedWordsConfig> m_managedWordListsConfig;
    bool m_managedWordListsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
