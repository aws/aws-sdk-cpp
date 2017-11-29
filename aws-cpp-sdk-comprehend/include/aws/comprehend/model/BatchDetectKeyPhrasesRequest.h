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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_COMPREHEND_API BatchDetectKeyPhrasesRequest : public ComprehendRequest
  {
  public:
    BatchDetectKeyPhrasesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDetectKeyPhrases"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTextList() const{ return m_textList; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline void SetTextList(const Aws::Vector<Aws::String>& value) { m_textListHasBeenSet = true; m_textList = value; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline void SetTextList(Aws::Vector<Aws::String>&& value) { m_textListHasBeenSet = true; m_textList = std::move(value); }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectKeyPhrasesRequest& WithTextList(const Aws::Vector<Aws::String>& value) { SetTextList(value); return *this;}

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectKeyPhrasesRequest& WithTextList(Aws::Vector<Aws::String>&& value) { SetTextList(std::move(value)); return *this;}

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectKeyPhrasesRequest& AddTextList(const Aws::String& value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectKeyPhrasesRequest& AddTextList(Aws::String&& value) { m_textListHasBeenSet = true; m_textList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list containing the text of the input documents. The list can contain a
     * maximum of 25 documents. Each document must contain fewer that 5,000 bytes of
     * UTF-8 encoded characters.</p>
     */
    inline BatchDetectKeyPhrasesRequest& AddTextList(const char* value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }


    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectKeyPhrasesRequest& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectKeyPhrasesRequest& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language of the input documents. All documents must be in the same
     * language.</p>
     */
    inline BatchDetectKeyPhrasesRequest& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_textList;
    bool m_textListHasBeenSet;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
