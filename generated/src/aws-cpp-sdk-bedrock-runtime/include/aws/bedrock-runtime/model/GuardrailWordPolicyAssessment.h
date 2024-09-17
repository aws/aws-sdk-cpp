/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailCustomWord.h>
#include <aws/bedrock-runtime/model/GuardrailManagedWord.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The word policy assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailWordPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailWordPolicyAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailWordPolicyAssessment();
    AWS_BEDROCKRUNTIME_API GuardrailWordPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailWordPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Custom words in the assessment.</p>
     */
    inline const Aws::Vector<GuardrailCustomWord>& GetCustomWords() const{ return m_customWords; }
    inline bool CustomWordsHasBeenSet() const { return m_customWordsHasBeenSet; }
    inline void SetCustomWords(const Aws::Vector<GuardrailCustomWord>& value) { m_customWordsHasBeenSet = true; m_customWords = value; }
    inline void SetCustomWords(Aws::Vector<GuardrailCustomWord>&& value) { m_customWordsHasBeenSet = true; m_customWords = std::move(value); }
    inline GuardrailWordPolicyAssessment& WithCustomWords(const Aws::Vector<GuardrailCustomWord>& value) { SetCustomWords(value); return *this;}
    inline GuardrailWordPolicyAssessment& WithCustomWords(Aws::Vector<GuardrailCustomWord>&& value) { SetCustomWords(std::move(value)); return *this;}
    inline GuardrailWordPolicyAssessment& AddCustomWords(const GuardrailCustomWord& value) { m_customWordsHasBeenSet = true; m_customWords.push_back(value); return *this; }
    inline GuardrailWordPolicyAssessment& AddCustomWords(GuardrailCustomWord&& value) { m_customWordsHasBeenSet = true; m_customWords.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Managed word lists in the assessment.</p>
     */
    inline const Aws::Vector<GuardrailManagedWord>& GetManagedWordLists() const{ return m_managedWordLists; }
    inline bool ManagedWordListsHasBeenSet() const { return m_managedWordListsHasBeenSet; }
    inline void SetManagedWordLists(const Aws::Vector<GuardrailManagedWord>& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = value; }
    inline void SetManagedWordLists(Aws::Vector<GuardrailManagedWord>&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists = std::move(value); }
    inline GuardrailWordPolicyAssessment& WithManagedWordLists(const Aws::Vector<GuardrailManagedWord>& value) { SetManagedWordLists(value); return *this;}
    inline GuardrailWordPolicyAssessment& WithManagedWordLists(Aws::Vector<GuardrailManagedWord>&& value) { SetManagedWordLists(std::move(value)); return *this;}
    inline GuardrailWordPolicyAssessment& AddManagedWordLists(const GuardrailManagedWord& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.push_back(value); return *this; }
    inline GuardrailWordPolicyAssessment& AddManagedWordLists(GuardrailManagedWord&& value) { m_managedWordListsHasBeenSet = true; m_managedWordLists.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailCustomWord> m_customWords;
    bool m_customWordsHasBeenSet = false;

    Aws::Vector<GuardrailManagedWord> m_managedWordLists;
    bool m_managedWordListsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
