/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseDocument.h>
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
namespace Textract
{
namespace Model
{
  class AnalyzeExpenseResult
  {
  public:
    AWS_TEXTRACT_API AnalyzeExpenseResult();
    AWS_TEXTRACT_API AnalyzeExpenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeExpenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    
    inline AnalyzeExpenseResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    
    inline AnalyzeExpenseResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseDocument>& GetExpenseDocuments() const{ return m_expenseDocuments; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline void SetExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { m_expenseDocuments = value; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline void SetExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { m_expenseDocuments = std::move(value); }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline AnalyzeExpenseResult& WithExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { SetExpenseDocuments(value); return *this;}

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline AnalyzeExpenseResult& WithExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { SetExpenseDocuments(std::move(value)); return *this;}

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline AnalyzeExpenseResult& AddExpenseDocuments(const ExpenseDocument& value) { m_expenseDocuments.push_back(value); return *this; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline AnalyzeExpenseResult& AddExpenseDocuments(ExpenseDocument&& value) { m_expenseDocuments.push_back(std::move(value)); return *this; }

  private:

    DocumentMetadata m_documentMetadata;

    Aws::Vector<ExpenseDocument> m_expenseDocuments;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
