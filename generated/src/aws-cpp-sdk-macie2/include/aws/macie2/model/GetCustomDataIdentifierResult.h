/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/macie2/model/SeverityLevel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetCustomDataIdentifierResult
  {
  public:
    AWS_MACIE2_API GetCustomDataIdentifierResult() = default;
    AWS_MACIE2_API GetCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetCustomDataIdentifierResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCustomDataIdentifierResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline GetCustomDataIdentifierResult& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCustomDataIdentifierResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetCustomDataIdentifierResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreWords() const { return m_ignoreWords; }
    template<typename IgnoreWordsT = Aws::Vector<Aws::String>>
    void SetIgnoreWords(IgnoreWordsT&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = std::forward<IgnoreWordsT>(value); }
    template<typename IgnoreWordsT = Aws::Vector<Aws::String>>
    GetCustomDataIdentifierResult& WithIgnoreWords(IgnoreWordsT&& value) { SetIgnoreWords(std::forward<IgnoreWordsT>(value)); return *this;}
    template<typename IgnoreWordsT = Aws::String>
    GetCustomDataIdentifierResult& AddIgnoreWords(IgnoreWordsT&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.emplace_back(std::forward<IgnoreWordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const { return m_keywords; }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    GetCustomDataIdentifierResult& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    GetCustomDataIdentifierResult& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. Otherwise, Macie excludes the result.</p>
     */
    inline int GetMaximumMatchDistance() const { return m_maximumMatchDistance; }
    inline void SetMaximumMatchDistance(int value) { m_maximumMatchDistanceHasBeenSet = true; m_maximumMatchDistance = value; }
    inline GetCustomDataIdentifierResult& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCustomDataIdentifierResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline const Aws::String& GetRegex() const { return m_regex; }
    template<typename RegexT = Aws::String>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = Aws::String>
    GetCustomDataIdentifierResult& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that match the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const { return m_severityLevels; }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    void SetSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels = std::forward<SeverityLevelsT>(value); }
    template<typename SeverityLevelsT = Aws::Vector<SeverityLevel>>
    GetCustomDataIdentifierResult& WithSeverityLevels(SeverityLevelsT&& value) { SetSeverityLevels(std::forward<SeverityLevelsT>(value)); return *this;}
    template<typename SeverityLevelsT = SeverityLevel>
    GetCustomDataIdentifierResult& AddSeverityLevels(SeverityLevelsT&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels.emplace_back(std::forward<SeverityLevelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetCustomDataIdentifierResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetCustomDataIdentifierResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomDataIdentifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
