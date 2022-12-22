/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/DisplayLanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/Language.h>
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
namespace Translate
{
namespace Model
{
  class ListLanguagesResult
  {
  public:
    AWS_TRANSLATE_API ListLanguagesResult();
    AWS_TRANSLATE_API ListLanguagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListLanguagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of supported languages.</p>
     */
    inline const Aws::Vector<Language>& GetLanguages() const{ return m_languages; }

    /**
     * <p>The list of supported languages.</p>
     */
    inline void SetLanguages(const Aws::Vector<Language>& value) { m_languages = value; }

    /**
     * <p>The list of supported languages.</p>
     */
    inline void SetLanguages(Aws::Vector<Language>&& value) { m_languages = std::move(value); }

    /**
     * <p>The list of supported languages.</p>
     */
    inline ListLanguagesResult& WithLanguages(const Aws::Vector<Language>& value) { SetLanguages(value); return *this;}

    /**
     * <p>The list of supported languages.</p>
     */
    inline ListLanguagesResult& WithLanguages(Aws::Vector<Language>&& value) { SetLanguages(std::move(value)); return *this;}

    /**
     * <p>The list of supported languages.</p>
     */
    inline ListLanguagesResult& AddLanguages(const Language& value) { m_languages.push_back(value); return *this; }

    /**
     * <p>The list of supported languages.</p>
     */
    inline ListLanguagesResult& AddLanguages(Language&& value) { m_languages.push_back(std::move(value)); return *this; }


    /**
     * <p>The language code passed in with the request.</p>
     */
    inline const DisplayLanguageCode& GetDisplayLanguageCode() const{ return m_displayLanguageCode; }

    /**
     * <p>The language code passed in with the request.</p>
     */
    inline void SetDisplayLanguageCode(const DisplayLanguageCode& value) { m_displayLanguageCode = value; }

    /**
     * <p>The language code passed in with the request.</p>
     */
    inline void SetDisplayLanguageCode(DisplayLanguageCode&& value) { m_displayLanguageCode = std::move(value); }

    /**
     * <p>The language code passed in with the request.</p>
     */
    inline ListLanguagesResult& WithDisplayLanguageCode(const DisplayLanguageCode& value) { SetDisplayLanguageCode(value); return *this;}

    /**
     * <p>The language code passed in with the request.</p>
     */
    inline ListLanguagesResult& WithDisplayLanguageCode(DisplayLanguageCode&& value) { SetDisplayLanguageCode(std::move(value)); return *this;}


    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline ListLanguagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline ListLanguagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If the response does not include all remaining results, use the NextToken in
     * the next request to fetch the next group of supported languages.</p>
     */
    inline ListLanguagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Language> m_languages;

    DisplayLanguageCode m_displayLanguageCode;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
