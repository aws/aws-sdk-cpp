/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/TableRow.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>An excerpt from a table within a document. The table excerpt displays up to
   * five columns and three rows, depending on how many table cells are relevant to
   * the query and how many columns are available in the original table. The top most
   * relevant cell is displayed in the table excerpt, along with the next most
   * relevant cells.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TableExcerpt">AWS
   * API Reference</a></p>
   */
  class TableExcerpt
  {
  public:
    AWS_KENDRA_API TableExcerpt();
    AWS_KENDRA_API TableExcerpt(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TableExcerpt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline const Aws::Vector<TableRow>& GetRows() const{ return m_rows; }

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline void SetRows(const Aws::Vector<TableRow>& value) { m_rowsHasBeenSet = true; m_rows = value; }

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline void SetRows(Aws::Vector<TableRow>&& value) { m_rowsHasBeenSet = true; m_rows = std::move(value); }

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline TableExcerpt& WithRows(const Aws::Vector<TableRow>& value) { SetRows(value); return *this;}

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline TableExcerpt& WithRows(Aws::Vector<TableRow>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline TableExcerpt& AddRows(const TableRow& value) { m_rowsHasBeenSet = true; m_rows.push_back(value); return *this; }

    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline TableExcerpt& AddRows(TableRow&& value) { m_rowsHasBeenSet = true; m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p>A count of the number of rows in the original table within the document.</p>
     */
    inline int GetTotalNumberOfRows() const{ return m_totalNumberOfRows; }

    /**
     * <p>A count of the number of rows in the original table within the document.</p>
     */
    inline bool TotalNumberOfRowsHasBeenSet() const { return m_totalNumberOfRowsHasBeenSet; }

    /**
     * <p>A count of the number of rows in the original table within the document.</p>
     */
    inline void SetTotalNumberOfRows(int value) { m_totalNumberOfRowsHasBeenSet = true; m_totalNumberOfRows = value; }

    /**
     * <p>A count of the number of rows in the original table within the document.</p>
     */
    inline TableExcerpt& WithTotalNumberOfRows(int value) { SetTotalNumberOfRows(value); return *this;}

  private:

    Aws::Vector<TableRow> m_rows;
    bool m_rowsHasBeenSet = false;

    int m_totalNumberOfRows;
    bool m_totalNumberOfRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
