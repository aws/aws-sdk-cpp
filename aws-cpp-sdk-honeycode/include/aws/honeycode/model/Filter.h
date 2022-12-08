/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p> An object that represents a filter formula along with the id of the context
   * row under which the filter function needs to evaluate. </p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_HONEYCODE_API Filter();
    AWS_HONEYCODE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline const Aws::String& GetFormula() const{ return m_formula; }

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline bool FormulaHasBeenSet() const { return m_formulaHasBeenSet; }

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline void SetFormula(const Aws::String& value) { m_formulaHasBeenSet = true; m_formula = value; }

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline void SetFormula(Aws::String&& value) { m_formulaHasBeenSet = true; m_formula = std::move(value); }

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline void SetFormula(const char* value) { m_formulaHasBeenSet = true; m_formula.assign(value); }

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline Filter& WithFormula(const Aws::String& value) { SetFormula(value); return *this;}

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline Filter& WithFormula(Aws::String&& value) { SetFormula(std::move(value)); return *this;}

    /**
     * <p> A formula representing a filter function that returns zero or more matching
     * rows from a table. Valid formulas in this field return a list of rows from a
     * table. The most common ways of writing a formula to return a list of rows are to
     * use the FindRow() or Filter() functions. Any other formula that returns zero or
     * more rows is also acceptable. For example, you can use a formula that points to
     * a cell that contains a filter function. </p>
     */
    inline Filter& WithFormula(const char* value) { SetFormula(value); return *this;}


    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline const Aws::String& GetContextRowId() const{ return m_contextRowId; }

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline bool ContextRowIdHasBeenSet() const { return m_contextRowIdHasBeenSet; }

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline void SetContextRowId(const Aws::String& value) { m_contextRowIdHasBeenSet = true; m_contextRowId = value; }

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline void SetContextRowId(Aws::String&& value) { m_contextRowIdHasBeenSet = true; m_contextRowId = std::move(value); }

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline void SetContextRowId(const char* value) { m_contextRowIdHasBeenSet = true; m_contextRowId.assign(value); }

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline Filter& WithContextRowId(const Aws::String& value) { SetContextRowId(value); return *this;}

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline Filter& WithContextRowId(Aws::String&& value) { SetContextRowId(std::move(value)); return *this;}

    /**
     * <p> The optional contextRowId attribute can be used to specify the row id of the
     * context row if the filter formula contains unqualified references to table
     * columns and needs a context row to evaluate them successfully. </p>
     */
    inline Filter& WithContextRowId(const char* value) { SetContextRowId(value); return *this;}

  private:

    Aws::String m_formula;
    bool m_formulaHasBeenSet = false;

    Aws::String m_contextRowId;
    bool m_contextRowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
