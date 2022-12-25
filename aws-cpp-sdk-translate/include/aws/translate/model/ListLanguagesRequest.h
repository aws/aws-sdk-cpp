/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/translate/model/DisplayLanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class ListLanguagesRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API ListLanguagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLanguages"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline const DisplayLanguageCode& GetDisplayLanguageCode() const{ return m_displayLanguageCode; }

    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline bool DisplayLanguageCodeHasBeenSet() const { return m_displayLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline void SetDisplayLanguageCode(const DisplayLanguageCode& value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = value; }

    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline void SetDisplayLanguageCode(DisplayLanguageCode&& value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = std::move(value); }

    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline ListLanguagesRequest& WithDisplayLanguageCode(const DisplayLanguageCode& value) { SetDisplayLanguageCode(value); return *this;}

    /**
     * <p>The language code for the language to use to display the language names in
     * the response. The language code is <code>en</code> by default. </p>
     */
    inline ListLanguagesRequest& WithDisplayLanguageCode(DisplayLanguageCode&& value) { SetDisplayLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline ListLanguagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline ListLanguagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Include the NextToken value to fetch the next group of supported languages.
     * </p>
     */
    inline ListLanguagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in each response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each response.</p>
     */
    inline ListLanguagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    DisplayLanguageCode m_displayLanguageCode;
    bool m_displayLanguageCodeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
