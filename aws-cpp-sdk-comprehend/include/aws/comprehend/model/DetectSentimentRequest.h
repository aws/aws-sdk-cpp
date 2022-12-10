/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectSentimentRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DetectSentimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectSentiment"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline DetectSentimentRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline DetectSentimentRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 text string. The maximum string size is 5 KB.</p>  <p>Amazon
     * Comprehend performs real-time sentiment analysis on the first 500 characters of
     * the input text and ignores any additional text in the input.</p> 
     */
    inline DetectSentimentRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline DetectSentimentRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline DetectSentimentRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
