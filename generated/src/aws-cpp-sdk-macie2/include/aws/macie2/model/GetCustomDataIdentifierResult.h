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
    AWS_MACIE2_API GetCustomDataIdentifierResult();
    AWS_MACIE2_API GetCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline GetCustomDataIdentifierResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline GetCustomDataIdentifierResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline void SetDeleted(bool value) { m_deleted = value; }

    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreWords() const{ return m_ignoreWords; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline void SetIgnoreWords(const Aws::Vector<Aws::String>& value) { m_ignoreWords = value; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline void SetIgnoreWords(Aws::Vector<Aws::String>&& value) { m_ignoreWords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& WithIgnoreWords(const Aws::Vector<Aws::String>& value) { SetIgnoreWords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& WithIgnoreWords(Aws::Vector<Aws::String>&& value) { SetIgnoreWords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddIgnoreWords(const Aws::String& value) { m_ignoreWords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddIgnoreWords(Aws::String&& value) { m_ignoreWords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. Ignore words are case
     * sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddIgnoreWords(const char* value) { m_ignoreWords.push_back(value); return *this; }


    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywords = value; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddKeywords(const Aws::String& value) { m_keywords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddKeywords(Aws::String&& value) { m_keywords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. Keywords aren't case sensitive.</p>
     */
    inline GetCustomDataIdentifierResult& AddKeywords(const char* value) { m_keywords.push_back(value); return *this; }


    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. Otherwise, Macie excludes the result.</p>
     */
    inline int GetMaximumMatchDistance() const{ return m_maximumMatchDistance; }

    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. Otherwise, Macie excludes the result.</p>
     */
    inline void SetMaximumMatchDistance(int value) { m_maximumMatchDistance = value; }

    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. Otherwise, Macie excludes the result.</p>
     */
    inline GetCustomDataIdentifierResult& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}


    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regex = value; }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regex = std::move(value); }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline void SetRegex(const char* value) { m_regex.assign(value); }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline GetCustomDataIdentifierResult& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline GetCustomDataIdentifierResult& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match.</p>
     */
    inline GetCustomDataIdentifierResult& WithRegex(const char* value) { SetRegex(value); return *this;}


    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const{ return m_severityLevels; }

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline void SetSeverityLevels(const Aws::Vector<SeverityLevel>& value) { m_severityLevels = value; }

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline void SetSeverityLevels(Aws::Vector<SeverityLevel>&& value) { m_severityLevels = std::move(value); }

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline GetCustomDataIdentifierResult& WithSeverityLevels(const Aws::Vector<SeverityLevel>& value) { SetSeverityLevels(value); return *this;}

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline GetCustomDataIdentifierResult& WithSeverityLevels(Aws::Vector<SeverityLevel>&& value) { SetSeverityLevels(std::move(value)); return *this;}

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline GetCustomDataIdentifierResult& AddSeverityLevels(const SeverityLevel& value) { m_severityLevels.push_back(value); return *this; }

    /**
     * <p>Specifies the severity that's assigned to findings that the custom data
     * identifier produces, based on the number of occurrences of text that matches the
     * custom data identifier's detection criteria. By default, Amazon Macie creates
     * findings for S3 objects that contain at least one occurrence of text that
     * matches the detection criteria, and Macie assigns the MEDIUM severity to those
     * findings.</p>
     */
    inline GetCustomDataIdentifierResult& AddSeverityLevels(SeverityLevel&& value) { m_severityLevels.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that identifies the tags (keys and values) that are
     * associated with the custom data identifier.</p>
     */
    inline GetCustomDataIdentifierResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    bool m_deleted;

    Aws::String m_description;

    Aws::String m_id;

    Aws::Vector<Aws::String> m_ignoreWords;

    Aws::Vector<Aws::String> m_keywords;

    int m_maximumMatchDistance;

    Aws::String m_name;

    Aws::String m_regex;

    Aws::Vector<SeverityLevel> m_severityLevels;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
