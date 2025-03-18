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
    AWS_KENDRA_API TableExcerpt() = default;
    AWS_KENDRA_API TableExcerpt(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TableExcerpt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of rows in the table excerpt.</p>
     */
    inline const Aws::Vector<TableRow>& GetRows() const { return m_rows; }
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }
    template<typename RowsT = Aws::Vector<TableRow>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<TableRow>>
    TableExcerpt& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = TableRow>
    TableExcerpt& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A count of the number of rows in the original table within the document.</p>
     */
    inline int GetTotalNumberOfRows() const { return m_totalNumberOfRows; }
    inline bool TotalNumberOfRowsHasBeenSet() const { return m_totalNumberOfRowsHasBeenSet; }
    inline void SetTotalNumberOfRows(int value) { m_totalNumberOfRowsHasBeenSet = true; m_totalNumberOfRows = value; }
    inline TableExcerpt& WithTotalNumberOfRows(int value) { SetTotalNumberOfRows(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableRow> m_rows;
    bool m_rowsHasBeenSet = false;

    int m_totalNumberOfRows{0};
    bool m_totalNumberOfRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
