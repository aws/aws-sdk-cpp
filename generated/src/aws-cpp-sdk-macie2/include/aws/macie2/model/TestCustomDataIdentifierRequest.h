/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class TestCustomDataIdentifierRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API TestCustomDataIdentifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestCustomDataIdentifier"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreWords() const { return m_ignoreWords; }
    inline bool IgnoreWordsHasBeenSet() const { return m_ignoreWordsHasBeenSet; }
    template<typename IgnoreWordsT = Aws::Vector<Aws::String>>
    void SetIgnoreWords(IgnoreWordsT&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = std::forward<IgnoreWordsT>(value); }
    template<typename IgnoreWordsT = Aws::Vector<Aws::String>>
    TestCustomDataIdentifierRequest& WithIgnoreWords(IgnoreWordsT&& value) { SetIgnoreWords(std::forward<IgnoreWordsT>(value)); return *this;}
    template<typename IgnoreWordsT = Aws::String>
    TestCustomDataIdentifierRequest& AddIgnoreWords(IgnoreWordsT&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.emplace_back(std::forward<IgnoreWordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const { return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    TestCustomDataIdentifierRequest& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    TestCustomDataIdentifierRequest& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. The distance can be 1-300 characters. The
     * default value is 50.</p>
     */
    inline int GetMaximumMatchDistance() const { return m_maximumMatchDistance; }
    inline bool MaximumMatchDistanceHasBeenSet() const { return m_maximumMatchDistanceHasBeenSet; }
    inline void SetMaximumMatchDistance(int value) { m_maximumMatchDistanceHasBeenSet = true; m_maximumMatchDistance = value; }
    inline TestCustomDataIdentifierRequest& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline const Aws::String& GetRegex() const { return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    template<typename RegexT = Aws::String>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = Aws::String>
    TestCustomDataIdentifierRequest& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample text to inspect by using the custom data identifier. The text can
     * contain as many as 1,000 characters.</p>
     */
    inline const Aws::String& GetSampleText() const { return m_sampleText; }
    inline bool SampleTextHasBeenSet() const { return m_sampleTextHasBeenSet; }
    template<typename SampleTextT = Aws::String>
    void SetSampleText(SampleTextT&& value) { m_sampleTextHasBeenSet = true; m_sampleText = std::forward<SampleTextT>(value); }
    template<typename SampleTextT = Aws::String>
    TestCustomDataIdentifierRequest& WithSampleText(SampleTextT&& value) { SetSampleText(std::forward<SampleTextT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ignoreWords;
    bool m_ignoreWordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    int m_maximumMatchDistance{0};
    bool m_maximumMatchDistanceHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::String m_sampleText;
    bool m_sampleTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
