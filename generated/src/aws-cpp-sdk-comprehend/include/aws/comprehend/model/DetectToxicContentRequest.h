/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/TextSegment.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DetectToxicContentRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DetectToxicContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectToxicContent"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of up to 10 text strings. Each string has a maximum size of 1 KB, and
     * the maximum size of the list is 10 KB.</p>
     */
    inline const Aws::Vector<TextSegment>& GetTextSegments() const{ return m_textSegments; }
    inline bool TextSegmentsHasBeenSet() const { return m_textSegmentsHasBeenSet; }
    inline void SetTextSegments(const Aws::Vector<TextSegment>& value) { m_textSegmentsHasBeenSet = true; m_textSegments = value; }
    inline void SetTextSegments(Aws::Vector<TextSegment>&& value) { m_textSegmentsHasBeenSet = true; m_textSegments = std::move(value); }
    inline DetectToxicContentRequest& WithTextSegments(const Aws::Vector<TextSegment>& value) { SetTextSegments(value); return *this;}
    inline DetectToxicContentRequest& WithTextSegments(Aws::Vector<TextSegment>&& value) { SetTextSegments(std::move(value)); return *this;}
    inline DetectToxicContentRequest& AddTextSegments(const TextSegment& value) { m_textSegmentsHasBeenSet = true; m_textSegments.push_back(value); return *this; }
    inline DetectToxicContentRequest& AddTextSegments(TextSegment&& value) { m_textSegmentsHasBeenSet = true; m_textSegments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language of the input text. Currently, English is the only supported
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline DetectToxicContentRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline DetectToxicContentRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TextSegment> m_textSegments;
    bool m_textSegmentsHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
