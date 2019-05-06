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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API DetectSentimentRequest : public ComprehendRequest
  {
  public:
    DetectSentimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectSentiment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectSentimentRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectSentimentRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 text string. Each string must contain fewer that 5,000 bytes of UTF-8
     * encoded characters.</p>
     */
    inline DetectSentimentRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline DetectSentimentRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify English ("en") or
     * Spanish ("es"). All documents must be in the same language.</p>
     */
    inline DetectSentimentRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
