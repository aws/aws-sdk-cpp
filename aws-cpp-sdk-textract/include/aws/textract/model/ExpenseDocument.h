/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseField.h>
#include <aws/textract/model/LineItemGroup.h>
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
   * <p>The structure holding all the information returned by
   * AnalyzeExpense</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseDocument">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API ExpenseDocument
  {
  public:
    ExpenseDocument();
    ExpenseDocument(Aws::Utils::Json::JsonView jsonValue);
    ExpenseDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes which invoice or receipt in the document the information is coming
     * from. First document will be 1, the second 2, and so on.</p>
     */
    inline int GetExpenseIndex() const{ return m_expenseIndex; }

    /**
     * <p>Denotes which invoice or receipt in the document the information is coming
     * from. First document will be 1, the second 2, and so on.</p>
     */
    inline bool ExpenseIndexHasBeenSet() const { return m_expenseIndexHasBeenSet; }

    /**
     * <p>Denotes which invoice or receipt in the document the information is coming
     * from. First document will be 1, the second 2, and so on.</p>
     */
    inline void SetExpenseIndex(int value) { m_expenseIndexHasBeenSet = true; m_expenseIndex = value; }

    /**
     * <p>Denotes which invoice or receipt in the document the information is coming
     * from. First document will be 1, the second 2, and so on.</p>
     */
    inline ExpenseDocument& WithExpenseIndex(int value) { SetExpenseIndex(value); return *this;}


    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseField>& GetSummaryFields() const{ return m_summaryFields; }

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline bool SummaryFieldsHasBeenSet() const { return m_summaryFieldsHasBeenSet; }

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline void SetSummaryFields(const Aws::Vector<ExpenseField>& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields = value; }

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline void SetSummaryFields(Aws::Vector<ExpenseField>&& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields = std::move(value); }

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline ExpenseDocument& WithSummaryFields(const Aws::Vector<ExpenseField>& value) { SetSummaryFields(value); return *this;}

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline ExpenseDocument& WithSummaryFields(Aws::Vector<ExpenseField>&& value) { SetSummaryFields(std::move(value)); return *this;}

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline ExpenseDocument& AddSummaryFields(const ExpenseField& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields.push_back(value); return *this; }

    /**
     * <p>Any information found outside of a table by Amazon Textract.</p>
     */
    inline ExpenseDocument& AddSummaryFields(ExpenseField&& value) { m_summaryFieldsHasBeenSet = true; m_summaryFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline const Aws::Vector<LineItemGroup>& GetLineItemGroups() const{ return m_lineItemGroups; }

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline bool LineItemGroupsHasBeenSet() const { return m_lineItemGroupsHasBeenSet; }

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline void SetLineItemGroups(const Aws::Vector<LineItemGroup>& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups = value; }

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline void SetLineItemGroups(Aws::Vector<LineItemGroup>&& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups = std::move(value); }

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline ExpenseDocument& WithLineItemGroups(const Aws::Vector<LineItemGroup>& value) { SetLineItemGroups(value); return *this;}

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline ExpenseDocument& WithLineItemGroups(Aws::Vector<LineItemGroup>&& value) { SetLineItemGroups(std::move(value)); return *this;}

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline ExpenseDocument& AddLineItemGroups(const LineItemGroup& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups.push_back(value); return *this; }

    /**
     * <p>Information detected on each table of a document, seperated into
     * <code>LineItems</code>.</p>
     */
    inline ExpenseDocument& AddLineItemGroups(LineItemGroup&& value) { m_lineItemGroupsHasBeenSet = true; m_lineItemGroups.push_back(std::move(value)); return *this; }

  private:

    int m_expenseIndex;
    bool m_expenseIndexHasBeenSet = false;

    Aws::Vector<ExpenseField> m_summaryFields;
    bool m_summaryFieldsHasBeenSet = false;

    Aws::Vector<LineItemGroup> m_lineItemGroups;
    bool m_lineItemGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
