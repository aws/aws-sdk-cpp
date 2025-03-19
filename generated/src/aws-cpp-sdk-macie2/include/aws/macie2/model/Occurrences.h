/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/Cell.h>
#include <aws/macie2/model/Range.h>
#include <aws/macie2/model/Page.h>
#include <aws/macie2/model/Record.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the location of 1-15 occurrences of sensitive data that was
   * detected by a managed data identifier or a custom data identifier and produced a
   * sensitive data finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Occurrences">AWS
   * API Reference</a></p>
   */
  class Occurrences
  {
  public:
    AWS_MACIE2_API Occurrences() = default;
    AWS_MACIE2_API Occurrences(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Occurrences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline const Aws::Vector<Cell>& GetCells() const { return m_cells; }
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }
    template<typename CellsT = Aws::Vector<Cell>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Cell>>
    Occurrences& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Cell>
    Occurrences& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an email
     * message or a non-binary text file such as an HTML, TXT, or XML file. Each Range
     * object specifies a line or inclusive range of lines that contains the sensitive
     * data, and the position of the data on the specified line or lines.</p> <p>This
     * value is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline const Aws::Vector<Range>& GetLineRanges() const { return m_lineRanges; }
    inline bool LineRangesHasBeenSet() const { return m_lineRangesHasBeenSet; }
    template<typename LineRangesT = Aws::Vector<Range>>
    void SetLineRanges(LineRangesT&& value) { m_lineRangesHasBeenSet = true; m_lineRanges = std::forward<LineRangesT>(value); }
    template<typename LineRangesT = Aws::Vector<Range>>
    Occurrences& WithLineRanges(LineRangesT&& value) { SetLineRanges(std::forward<LineRangesT>(value)); return *this;}
    template<typename LineRangesT = Range>
    Occurrences& AddLineRanges(LineRangesT&& value) { m_lineRangesHasBeenSet = true; m_lineRanges.emplace_back(std::forward<LineRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<Range>& GetOffsetRanges() const { return m_offsetRanges; }
    inline bool OffsetRangesHasBeenSet() const { return m_offsetRangesHasBeenSet; }
    template<typename OffsetRangesT = Aws::Vector<Range>>
    void SetOffsetRanges(OffsetRangesT&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = std::forward<OffsetRangesT>(value); }
    template<typename OffsetRangesT = Aws::Vector<Range>>
    Occurrences& WithOffsetRanges(OffsetRangesT&& value) { SetOffsetRanges(std::forward<OffsetRangesT>(value)); return *this;}
    template<typename OffsetRangesT = Range>
    Occurrences& AddOffsetRanges(OffsetRangesT&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.emplace_back(std::forward<OffsetRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline const Aws::Vector<Page>& GetPages() const { return m_pages; }
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
    template<typename PagesT = Aws::Vector<Page>>
    void SetPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages = std::forward<PagesT>(value); }
    template<typename PagesT = Aws::Vector<Page>>
    Occurrences& WithPages(PagesT&& value) { SetPages(std::forward<PagesT>(value)); return *this;}
    template<typename PagesT = Page>
    Occurrences& AddPages(PagesT&& value) { m_pagesHasBeenSet = true; m_pages.emplace_back(std::forward<PagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Apache
     * Avro object container, Apache Parquet file, JSON file, or JSON Lines file. This
     * value is null for all other types of files.</p> <p>For an Avro object container
     * or Parquet file, each Record object specifies a record index and the path to a
     * field in a record that contains the sensitive data. For a JSON or JSON Lines
     * file, each Record object specifies the path to a field or array that contains
     * the sensitive data. For a JSON Lines file, it also specifies the index of the
     * line that contains the data.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    Occurrences& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    Occurrences& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Cell> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::Vector<Range> m_lineRanges;
    bool m_lineRangesHasBeenSet = false;

    Aws::Vector<Range> m_offsetRanges;
    bool m_offsetRangesHasBeenSet = false;

    Aws::Vector<Page> m_pages;
    bool m_pagesHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
