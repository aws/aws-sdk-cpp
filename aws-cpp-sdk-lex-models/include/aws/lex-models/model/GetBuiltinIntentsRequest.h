/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentsRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetBuiltinIntentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBuiltinIntents"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentsRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>A list of locales that the intent supports.</p>
     */
    inline GetBuiltinIntentsRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetSignatureContains() const{ return m_signatureContains; }

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline bool SignatureContainsHasBeenSet() const { return m_signatureContainsHasBeenSet; }

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignatureContains(const Aws::String& value) { m_signatureContainsHasBeenSet = true; m_signatureContains = value; }

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignatureContains(Aws::String&& value) { m_signatureContainsHasBeenSet = true; m_signatureContains = std::move(value); }

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetSignatureContains(const char* value) { m_signatureContainsHasBeenSet = true; m_signatureContains.assign(value); }

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline GetBuiltinIntentsRequest& WithSignatureContains(const Aws::String& value) { SetSignatureContains(value); return *this;}

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline GetBuiltinIntentsRequest& WithSignatureContains(Aws::String&& value) { SetSignatureContains(std::move(value)); return *this;}

    /**
     * <p>Substring to match in built-in intent signatures. An intent will be returned
     * if any part of its signature matches the substring. For example, "xyz" matches
     * both "xyzabc" and "abcxyz." To find the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline GetBuiltinIntentsRequest& WithSignatureContains(const char* value) { SetSignatureContains(value); return *this;}


    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline GetBuiltinIntentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline GetBuiltinIntentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that fetches the next page of intents. If this API call is
     * truncated, Amazon Lex returns a pagination token in the response. To fetch the
     * next page of intents, use the pagination token in the next request.</p>
     */
    inline GetBuiltinIntentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of intents to return in the response. The default is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of intents to return in the response. The default is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of intents to return in the response. The default is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of intents to return in the response. The default is
     * 10.</p>
     */
    inline GetBuiltinIntentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet;

    Aws::String m_signatureContains;
    bool m_signatureContainsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
