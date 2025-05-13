/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/macie2/model/SeverityLevel.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class CreateCustomDataIdentifierRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API CreateCustomDataIdentifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomDataIdentifier"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCustomDataIdentifierRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCustomDataIdentifierRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

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
    CreateCustomDataIdentifierRequest& WithIgnoreWords(IgnoreWordsT&& value) { SetIgnoreWords(std::forward<IgnoreWordsT>(value)); return *this;}
    template<typename IgnoreWordsT = Aws::String>
    CreateCustomDataIdentifierRequest& AddIgnoreWords(IgnoreWordsT&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.emplace_back(std::forward<IgnoreWordsT>(value)); return *this; }
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
    CreateCustomDataIdentifierRequest& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    CreateCustomDataIdentifierRequest& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
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
    inline CreateCustomDataIdentifierRequest& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCustomDataIdentifierRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateCustomDataIdentifierRequest& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that match the custom data
     * identifier's detection criteria. You can specify as many as three SeverityLevel
     * objects in this array, one for each severity: LOW, MEDIUM, or HIGH. If you
     * specify more than one, the occurrences thresholds must be in ascending order by
     * severity, moving from LOW to HIGH. For example, 1 for LOW, 50 for MEDIUM, and
     * 100 for HIGH. If an S3 object contains fewer occurrences than the lowest
     * specified threshold, Amazon Macie doesn't create a finding.</p> <p>If you don't
     * specify any values for this array, Macie creates findings for S3 objects that
     * contain at least one occurrence of text that matches the detection criteria, and
     * Macie assigns the MEDIUM severity to those findings.</p>
     */
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const { return m_severityLevels; }
    inline bool SeverityLevelsHasBeenSet() const { return m_severityLevelsHasBeenSet; }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    void SetSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels = std::forward<SeverityLevelsT>(value); }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    CreateCustomDataIdentifierRequest& WithSeverityLevels(SeverityLevelsT&& value) { SetSeverityLevels(std::forward<SeverityLevelsT>(value)); return *this;}
    template<typename SeverityLevelsT = SeverityLevel>
    CreateCustomDataIdentifierRequest& AddSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels.emplace_back(std::forward<SeverityLevelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCustomDataIdentifierRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCustomDataIdentifierRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ignoreWords;
    bool m_ignoreWordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    int m_maximumMatchDistance{0};
    bool m_maximumMatchDistanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::Vector<SeverityLevel> m_severityLevels;
    bool m_severityLevelsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
