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
    AWS_MACIE2_API Occurrences();
    AWS_MACIE2_API Occurrences(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Occurrences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline const Aws::Vector<Cell>& GetCells() const{ return m_cells; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline void SetCells(const Aws::Vector<Cell>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline void SetCells(Aws::Vector<Cell>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline Occurrences& WithCells(const Aws::Vector<Cell>& value) { SetCells(value); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline Occurrences& WithCells(Aws::Vector<Cell>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline Occurrences& AddCells(const Cell& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a Microsoft
     * Excel workbook, CSV file, or TSV file. This value is null for all other types of
     * files.</p> <p>Each Cell object specifies a cell or field that contains the
     * sensitive data.</p>
     */
    inline Occurrences& AddCells(Cell&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline const Aws::Vector<Range>& GetLineRanges() const{ return m_lineRanges; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline bool LineRangesHasBeenSet() const { return m_lineRangesHasBeenSet; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline void SetLineRanges(const Aws::Vector<Range>& value) { m_lineRangesHasBeenSet = true; m_lineRanges = value; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline void SetLineRanges(Aws::Vector<Range>&& value) { m_lineRangesHasBeenSet = true; m_lineRanges = std::move(value); }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline Occurrences& WithLineRanges(const Aws::Vector<Range>& value) { SetLineRanges(value); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline Occurrences& WithLineRanges(Aws::Vector<Range>&& value) { SetLineRanges(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline Occurrences& AddLineRanges(const Range& value) { m_lineRangesHasBeenSet = true; m_lineRanges.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in a
     * non-binary text file, such as an HTML, TXT, or XML file. Each Range object
     * specifies a line or inclusive range of lines that contains the sensitive data,
     * and the position of the data on the specified line or lines.</p> <p>This value
     * is often null for file types that are supported by Cell, Page, or Record
     * objects. Exceptions are the location of sensitive data in: unstructured sections
     * of an otherwise structured file, such as a comment in a file; a malformed file
     * that Amazon Macie analyzes as plain text; and, a CSV or TSV file that has any
     * column names that contain sensitive data.</p>
     */
    inline Occurrences& AddLineRanges(Range&& value) { m_lineRangesHasBeenSet = true; m_lineRanges.push_back(std::move(value)); return *this; }


    /**
     *  <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<Range>& GetOffsetRanges() const{ return m_offsetRanges; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline bool OffsetRangesHasBeenSet() const { return m_offsetRangesHasBeenSet; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetOffsetRanges(const Aws::Vector<Range>& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = value; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetOffsetRanges(Aws::Vector<Range>&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges = std::move(value); }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Occurrences& WithOffsetRanges(const Aws::Vector<Range>& value) { SetOffsetRanges(value); return *this;}

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Occurrences& WithOffsetRanges(Aws::Vector<Range>&& value) { SetOffsetRanges(std::move(value)); return *this;}

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Occurrences& AddOffsetRanges(const Range& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.push_back(value); return *this; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Occurrences& AddOffsetRanges(Range&& value) { m_offsetRangesHasBeenSet = true; m_offsetRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline const Aws::Vector<Page>& GetPages() const{ return m_pages; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline void SetPages(const Aws::Vector<Page>& value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline void SetPages(Aws::Vector<Page>&& value) { m_pagesHasBeenSet = true; m_pages = std::move(value); }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline Occurrences& WithPages(const Aws::Vector<Page>& value) { SetPages(value); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline Occurrences& WithPages(Aws::Vector<Page>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline Occurrences& AddPages(const Page& value) { m_pagesHasBeenSet = true; m_pages.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each occurrence of sensitive data in an Adobe
     * Portable Document Format file. This value is null for all other types of
     * files.</p> <p>Each Page object specifies a page that contains the sensitive
     * data.</p>
     */
    inline Occurrences& AddPages(Page&& value) { m_pagesHasBeenSet = true; m_pages.push_back(std::move(value)); return *this; }


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
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

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
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

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
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

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
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

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
    inline Occurrences& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

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
    inline Occurrences& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

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
    inline Occurrences& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

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
    inline Occurrences& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }

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
