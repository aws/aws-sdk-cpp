/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/SyntaxLanguageCode.h>
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
  class BatchDetectSyntaxRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API BatchDetectSyntaxRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDetectSyntax"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list containing the UTF-8 encoded text of the input documents. The list can
     * contain a maximum of 25 documents. The maximum size for each document is 5
     * KB.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTextList() const { return m_textList; }
    inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }
    template<typename TextListT = Aws::Vector<Aws::String>>
    void SetTextList(TextListT&& value) { m_textListHasBeenSet = true; m_textList = std::forward<TextListT>(value); }
    template<typename TextListT = Aws::Vector<Aws::String>>
    BatchDetectSyntaxRequest& WithTextList(TextListT&& value) { SetTextList(std::forward<TextListT>(value)); return *this;}
    template<typename TextListT = Aws::String>
    BatchDetectSyntaxRequest& AddTextList(TextListT&& value) { m_textListHasBeenSet = true; m_textList.emplace_back(std::forward<TextListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline SyntaxLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(SyntaxLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline BatchDetectSyntaxRequest& WithLanguageCode(SyntaxLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_textList;
    bool m_textListHasBeenSet = false;

    SyntaxLanguageCode m_languageCode{SyntaxLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
