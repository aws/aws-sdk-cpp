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
    AWS_MACIE2_API CreateCustomDataIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomDataIdentifier"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the custom data identifier. The description can
     * contain as many as 512 characters.</p> <p>We strongly recommend that you avoid
     * including any sensitive data in the description of a custom data identifier.
     * Other users of your account might be able to see this description, depending on
     * the actions that they're allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreWords() const{ return m_ignoreWords; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline bool IgnoreWordsHasBeenSet() const { return m_ignoreWordsHasBeenSet; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline void SetIgnoreWords(const Aws::Vector<Aws::String>& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = value; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline void SetIgnoreWords(Aws::Vector<Aws::String>&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithIgnoreWords(const Aws::Vector<Aws::String>& value) { SetIgnoreWords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithIgnoreWords(Aws::Vector<Aws::String>&& value) { SetIgnoreWords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(const Aws::String& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(Aws::String&& value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>ignore words</i>) to
     * exclude from the results. If the text matched by the regular expression contains
     * any string in this array, Amazon Macie ignores it. The array can contain as many
     * as 10 ignore words. Each ignore word can contain 4-90 UTF-8 characters. Ignore
     * words are case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddIgnoreWords(const char* value) { m_ignoreWordsHasBeenSet = true; m_ignoreWords.push_back(value); return *this; }


    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists specific character sequences (<i>keywords</i>), one of
     * which must precede and be within proximity (maximumMatchDistance) of the regular
     * expression to match. The array can contain as many as 50 keywords. Each keyword
     * can contain 3-90 UTF-8 characters. Keywords aren't case sensitive.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }


    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. The distance can be 1-300 characters. The
     * default value is 50.</p>
     */
    inline int GetMaximumMatchDistance() const{ return m_maximumMatchDistance; }

    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. The distance can be 1-300 characters. The
     * default value is 50.</p>
     */
    inline bool MaximumMatchDistanceHasBeenSet() const { return m_maximumMatchDistanceHasBeenSet; }

    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. The distance can be 1-300 characters. The
     * default value is 50.</p>
     */
    inline void SetMaximumMatchDistance(int value) { m_maximumMatchDistanceHasBeenSet = true; m_maximumMatchDistance = value; }

    /**
     * <p>The maximum number of characters that can exist between the end of at least
     * one complete character sequence specified by the keywords array and the end of
     * the text that matches the regex pattern. If a complete keyword precedes all the
     * text that matches the pattern and the keyword is within the specified distance,
     * Amazon Macie includes the result. The distance can be 1-300 characters. The
     * default value is 50.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithMaximumMatchDistance(int value) { SetMaximumMatchDistance(value); return *this;}


    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the custom data identifier. The name can contain as many as
     * 128 characters.</p> <p>We strongly recommend that you avoid including any
     * sensitive data in the name of a custom data identifier. Other users of your
     * account might be able to see this name, depending on the actions that they're
     * allowed to perform in Amazon Macie.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>The regular expression (<i>regex</i>) that defines the pattern to match. The
     * expression can contain as many as 512 characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithRegex(const char* value) { SetRegex(value); return *this;}


    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const{ return m_severityLevels; }

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline bool SeverityLevelsHasBeenSet() const { return m_severityLevelsHasBeenSet; }

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline void SetSeverityLevels(const Aws::Vector<SeverityLevel>& value) { m_severityLevelsHasBeenSet = true; m_severityLevels = value; }

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline void SetSeverityLevels(Aws::Vector<SeverityLevel>&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels = std::move(value); }

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline CreateCustomDataIdentifierRequest& WithSeverityLevels(const Aws::Vector<SeverityLevel>& value) { SetSeverityLevels(value); return *this;}

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline CreateCustomDataIdentifierRequest& WithSeverityLevels(Aws::Vector<SeverityLevel>&& value) { SetSeverityLevels(std::move(value)); return *this;}

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline CreateCustomDataIdentifierRequest& AddSeverityLevels(const SeverityLevel& value) { m_severityLevelsHasBeenSet = true; m_severityLevels.push_back(value); return *this; }

    /**
     * <p>The severity to assign to findings that the custom data identifier produces,
     * based on the number of occurrences of text that matches the custom data
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
    inline CreateCustomDataIdentifierRequest& AddSeverityLevels(SeverityLevel&& value) { m_severityLevelsHasBeenSet = true; m_severityLevels.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the custom
     * data identifier.</p> <p>A custom data identifier can have a maximum of 50 tags.
     * Each tag consists of a tag key and an associated tag value. The maximum length
     * of a tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateCustomDataIdentifierRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ignoreWords;
    bool m_ignoreWordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    int m_maximumMatchDistance;
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
