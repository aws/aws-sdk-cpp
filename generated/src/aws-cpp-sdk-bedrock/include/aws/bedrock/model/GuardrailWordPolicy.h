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
    AWS_BEDROCK_API GuardrailWordPolicy();
    AWS_BEDROCK_API GuardrailWordPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailWordPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailWord>& GetWords() const{ return m_words; }

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline void SetWords(const Aws::Vector<GuardrailWord>& value) { m_wordsHasBeenSet = true; m_words = value; }

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline void SetWords(Aws::Vector<GuardrailWord>&& value) { m_wordsHasBeenSet = true; m_words = std::move(value); }

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& WithWords(const Aws::Vector<GuardrailWord>& value) { SetWords(value); return *this;}

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& WithWords(Aws::Vector<GuardrailWord>&& value) { SetWords(std::move(value)); return *this;}

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& AddWords(const GuardrailWord& value) { m_wordsHasBeenSet = true; m_words.push_back(value); return *this; }

    /**
     * <p>A list of words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& AddWords(GuardrailWord&& value) { m_wordsHasBeenSet = true; m_words.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailManagedWords>& GetManagedWordLists() const{ return m_managedWordLists; }

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline bool ManagedWordListsHasBeenSet() const { return m_managedWordListsHasBeenSet; }

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline void SetManagedWordLists(const Aws::Vector<GuardrailManagedWords>& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = value; }

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline void SetManagedWordLists(Aws::Vector<GuardrailManagedWords>&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = std::move(value); }

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& WithManagedWordLists(const Aws::Vector<GuardrailManagedWords>& value) { SetManagedWordLists(value); return *this;}

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& WithManagedWordLists(Aws::Vector<GuardrailManagedWords>&& value) { SetManagedWordLists(std::move(value)); return *this;}

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& AddManagedWordLists(const GuardrailManagedWords& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.push_back(value); return *this; }

    /**
     * <p>A list of managed words configured for the guardrail.</p>
     */
    inline GuardrailWordPolicy& AddManagedWordLists(GuardrailManagedWords&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailWord> m_words;
    bool m_wordsHasBeenSet = false;

    Aws::Vector<GuardrailManagedWords> m_managedWordLists;
    bool m_managedWordListsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
