/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/Document.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AnalyzeExpenseRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API AnalyzeExpenseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AnalyzeExpense"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Document& GetDocument() const{ return m_document; }

    
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }

    
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    
    inline AnalyzeExpenseRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}

    
    inline AnalyzeExpenseRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
