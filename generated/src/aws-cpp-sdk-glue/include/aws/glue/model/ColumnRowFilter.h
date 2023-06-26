/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A filter that uses both column-level and row-level filtering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnRowFilter">AWS
   * API Reference</a></p>
   */
  class ColumnRowFilter
  {
  public:
    AWS_GLUE_API ColumnRowFilter();
    AWS_GLUE_API ColumnRowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnRowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string containing the name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline ColumnRowFilter& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline ColumnRowFilter& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>A string containing the name of the column.</p>
     */
    inline ColumnRowFilter& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline const Aws::String& GetRowFilterExpression() const{ return m_rowFilterExpression; }

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline bool RowFilterExpressionHasBeenSet() const { return m_rowFilterExpressionHasBeenSet; }

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline void SetRowFilterExpression(const Aws::String& value) { m_rowFilterExpressionHasBeenSet = true; m_rowFilterExpression = value; }

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline void SetRowFilterExpression(Aws::String&& value) { m_rowFilterExpressionHasBeenSet = true; m_rowFilterExpression = std::move(value); }

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline void SetRowFilterExpression(const char* value) { m_rowFilterExpressionHasBeenSet = true; m_rowFilterExpression.assign(value); }

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline ColumnRowFilter& WithRowFilterExpression(const Aws::String& value) { SetRowFilterExpression(value); return *this;}

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline ColumnRowFilter& WithRowFilterExpression(Aws::String&& value) { SetRowFilterExpression(std::move(value)); return *this;}

    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline ColumnRowFilter& WithRowFilterExpression(const char* value) { SetRowFilterExpression(value); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_rowFilterExpression;
    bool m_rowFilterExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
