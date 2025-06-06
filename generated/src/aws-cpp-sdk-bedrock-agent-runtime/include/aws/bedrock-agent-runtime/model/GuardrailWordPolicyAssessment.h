﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailCustomWord.h>
#include <aws/bedrock-agent-runtime/model/GuardrailManagedWord.h>
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
   * <p>The assessment details for words defined in the Guardrail
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailWordPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailWordPolicyAssessment
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailWordPolicyAssessment() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailWordPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailWordPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom word details for words defined in the Guardrail filter.</p>
     */
    inline const Aws::Vector<GuardrailCustomWord>& GetCustomWords() const { return m_customWords; }
    inline bool CustomWordsHasBeenSet() const { return m_customWordsHasBeenSet; }
    template<typename CustomWordsT = Aws::Vector<GuardrailCustomWord>>
    void SetCustomWords(CustomWordsT&& value) { m_customWordsHasBeenSet = true; m_customWords = std::forward<CustomWordsT>(value); }
    template<typename CustomWordsT = Aws::Vector<GuardrailCustomWord>>
    GuardrailWordPolicyAssessment& WithCustomWords(CustomWordsT&& value) { SetCustomWords(std::forward<CustomWordsT>(value)); return *this;}
    template<typename CustomWordsT = GuardrailCustomWord>
    GuardrailWordPolicyAssessment& AddCustomWords(CustomWordsT&& value) { m_customWordsHasBeenSet = true; m_customWords.emplace_back(std::forward<CustomWordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The managed word lists for words defined in the Guardrail filter.</p>
     */
    inline const Aws::Vector<GuardrailManagedWord>& GetManagedWordLists() const { return m_managedWordLists; }
    inline bool ManagedWordListsHasBeenSet() const { return m_managedWordListsHasBeenSet; }
    template<typename ManagedWordListsT = Aws::Vector<GuardrailManagedWord>>
    void SetManagedWordLists(ManagedWordListsT&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = std::forward<ManagedWordListsT>(value); }
    template<typename ManagedWordListsT = Aws::Vector<GuardrailManagedWord>>
    GuardrailWordPolicyAssessment& WithManagedWordLists(ManagedWordListsT&& value) { SetManagedWordLists(std::forward<ManagedWordListsT>(value)); return *this;}
    template<typename ManagedWordListsT = GuardrailManagedWord>
    GuardrailWordPolicyAssessment& AddManagedWordLists(ManagedWordListsT&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.emplace_back(std::forward<ManagedWordListsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailCustomWord> m_customWords;
    bool m_customWordsHasBeenSet = false;

    Aws::Vector<GuardrailManagedWord> m_managedWordLists;
    bool m_managedWordListsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
