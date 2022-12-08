/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/LendingDocument.h>
#include <aws/textract/model/ExpenseDocument.h>
#include <aws/textract/model/IdentityDocument.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information extracted by an analysis operation after using
   * StartLendingAnalysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Extraction">AWS
   * API Reference</a></p>
   */
  class Extraction
  {
  public:
    AWS_TEXTRACT_API Extraction();
    AWS_TEXTRACT_API Extraction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Extraction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline const LendingDocument& GetLendingDocument() const{ return m_lendingDocument; }

    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline bool LendingDocumentHasBeenSet() const { return m_lendingDocumentHasBeenSet; }

    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline void SetLendingDocument(const LendingDocument& value) { m_lendingDocumentHasBeenSet = true; m_lendingDocument = value; }

    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline void SetLendingDocument(LendingDocument&& value) { m_lendingDocumentHasBeenSet = true; m_lendingDocument = std::move(value); }

    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline Extraction& WithLendingDocument(const LendingDocument& value) { SetLendingDocument(value); return *this;}

    /**
     * <p>Holds the structured data returned by AnalyzeDocument for lending
     * documents.</p>
     */
    inline Extraction& WithLendingDocument(LendingDocument&& value) { SetLendingDocument(std::move(value)); return *this;}


    
    inline const ExpenseDocument& GetExpenseDocument() const{ return m_expenseDocument; }

    
    inline bool ExpenseDocumentHasBeenSet() const { return m_expenseDocumentHasBeenSet; }

    
    inline void SetExpenseDocument(const ExpenseDocument& value) { m_expenseDocumentHasBeenSet = true; m_expenseDocument = value; }

    
    inline void SetExpenseDocument(ExpenseDocument&& value) { m_expenseDocumentHasBeenSet = true; m_expenseDocument = std::move(value); }

    
    inline Extraction& WithExpenseDocument(const ExpenseDocument& value) { SetExpenseDocument(value); return *this;}

    
    inline Extraction& WithExpenseDocument(ExpenseDocument&& value) { SetExpenseDocument(std::move(value)); return *this;}


    
    inline const IdentityDocument& GetIdentityDocument() const{ return m_identityDocument; }

    
    inline bool IdentityDocumentHasBeenSet() const { return m_identityDocumentHasBeenSet; }

    
    inline void SetIdentityDocument(const IdentityDocument& value) { m_identityDocumentHasBeenSet = true; m_identityDocument = value; }

    
    inline void SetIdentityDocument(IdentityDocument&& value) { m_identityDocumentHasBeenSet = true; m_identityDocument = std::move(value); }

    
    inline Extraction& WithIdentityDocument(const IdentityDocument& value) { SetIdentityDocument(value); return *this;}

    
    inline Extraction& WithIdentityDocument(IdentityDocument&& value) { SetIdentityDocument(std::move(value)); return *this;}

  private:

    LendingDocument m_lendingDocument;
    bool m_lendingDocumentHasBeenSet = false;

    ExpenseDocument m_expenseDocument;
    bool m_expenseDocumentHasBeenSet = false;

    IdentityDocument m_identityDocument;
    bool m_identityDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
