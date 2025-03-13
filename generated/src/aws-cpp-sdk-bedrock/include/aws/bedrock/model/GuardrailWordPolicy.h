/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailWord.h>
#include <aws/bedrock/model/GuardrailManagedWords.h>
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
   * <p>Contains details about the word policy configured for the
   * guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailWordPolicy">AWS
   * API Reference</a></p>
   */
  class GuardrailWordPolicy
  {
  public:
    AWS_BEDROCK_API GuardrailWordPolicy() = default;
    AWS_BEDROCK_API GuardrailWordPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailWordPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailWord>& GetWords() const { return m_words; }
    inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }
    template<typename WordsT = Aws::Vector<GuardrailWord>>
    void SetWords(WordsT&& value) { m_wordsHasBeenSet = true; m_words = std::forward<WordsT>(value); }
    template<typename WordsT = Aws::Vector<GuardrailWord>>
    GuardrailWordPolicy& WithWords(WordsT&& value) { SetWords(std::forward<WordsT>(value)); return *this;}
    template<typename WordsT = GuardrailWord>
    GuardrailWordPolicy& AddWords(WordsT&& value) { m_wordsHasBeenSet = true; m_words.emplace_back(std::forward<WordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailManagedWords>& GetManagedWordLists() const { return m_managedWordLists; }
    inline bool ManagedWordListsHasBeenSet() const { return m_managedWordListsHasBeenSet; }
    template<typename ManagedWordListsT = Aws::Vector<GuardrailManagedWords>>
    void SetManagedWordLists(ManagedWordListsT&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = std::forward<ManagedWordListsT>(value); }
    template<typename ManagedWordListsT = Aws::Vector<GuardrailManagedWords>>
    GuardrailWordPolicy& WithManagedWordLists(ManagedWordListsT&& value) { SetManagedWordLists(std::forward<ManagedWordListsT>(value)); return *this;}
    template<typename ManagedWordListsT = GuardrailManagedWords>
    GuardrailWordPolicy& AddManagedWordLists(ManagedWordListsT&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.emplace_back(std::forward<ManagedWordListsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailWord> m_words;
    bool m_wordsHasBeenSet = false;

    Aws::Vector<GuardrailManagedWords> m_managedWordLists;
    bool m_managedWordListsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
