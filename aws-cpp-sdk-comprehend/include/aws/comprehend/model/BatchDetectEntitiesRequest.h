﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API BatchDetectEntitiesRequest : public ComprehendRequest
  {
  public:
    BatchDetectEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDetectEntities"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTextList() const{ return m_textList; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline void SetTextList(const Aws::Vector<Aws::String>& value) { m_textListHasBeenSet = true; m_textList = value; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline void SetTextList(Aws::Vector<Aws::String>&& value) { m_textListHasBeenSet = true; m_textList = std::move(value); }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectEntitiesRequest& WithTextList(const Aws::Vector<Aws::String>& value) { SetTextList(value); return *this;}

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectEntitiesRequest& WithTextList(Aws::Vector<Aws::String>&& value) { SetTextList(std::move(value)); return *this;}

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectEntitiesRequest& AddTextList(const Aws::String& value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectEntitiesRequest& AddTextList(Aws::String&& value) { m_textListHasBeenSet = true; m_textList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer than 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectEntitiesRequest& AddTextList(const char* value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }


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
    inline BatchDetectEntitiesRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the primary
     * languages supported by Amazon Comprehend. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectEntitiesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_textList;
    bool m_textListHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
