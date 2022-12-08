/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/ImportDataCharacterEncoding.h>
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
   * <p> An object that contains the options relating to parsing delimited text as
   * part of an import request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DelimitedTextImportOptions">AWS
   * API Reference</a></p>
   */
  class DelimitedTextImportOptions
  {
  public:
    AWS_HONEYCODE_API DelimitedTextImportOptions();
    AWS_HONEYCODE_API DelimitedTextImportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API DelimitedTextImportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline DelimitedTextImportOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline DelimitedTextImportOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>The delimiter to use for separating columns in a single row of the input.</p>
     */
    inline DelimitedTextImportOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p>Indicates whether the input file has a header row at the top containing the
     * column names.</p>
     */
    inline bool GetHasHeaderRow() const{ return m_hasHeaderRow; }

    /**
     * <p>Indicates whether the input file has a header row at the top containing the
     * column names.</p>
     */
    inline bool HasHeaderRowHasBeenSet() const { return m_hasHeaderRowHasBeenSet; }

    /**
     * <p>Indicates whether the input file has a header row at the top containing the
     * column names.</p>
     */
    inline void SetHasHeaderRow(bool value) { m_hasHeaderRowHasBeenSet = true; m_hasHeaderRow = value; }

    /**
     * <p>Indicates whether the input file has a header row at the top containing the
     * column names.</p>
     */
    inline DelimitedTextImportOptions& WithHasHeaderRow(bool value) { SetHasHeaderRow(value); return *this;}


    /**
     * <p>A parameter to indicate whether empty rows should be ignored or be included
     * in the import.</p>
     */
    inline bool GetIgnoreEmptyRows() const{ return m_ignoreEmptyRows; }

    /**
     * <p>A parameter to indicate whether empty rows should be ignored or be included
     * in the import.</p>
     */
    inline bool IgnoreEmptyRowsHasBeenSet() const { return m_ignoreEmptyRowsHasBeenSet; }

    /**
     * <p>A parameter to indicate whether empty rows should be ignored or be included
     * in the import.</p>
     */
    inline void SetIgnoreEmptyRows(bool value) { m_ignoreEmptyRowsHasBeenSet = true; m_ignoreEmptyRows = value; }

    /**
     * <p>A parameter to indicate whether empty rows should be ignored or be included
     * in the import.</p>
     */
    inline DelimitedTextImportOptions& WithIgnoreEmptyRows(bool value) { SetIgnoreEmptyRows(value); return *this;}


    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline const ImportDataCharacterEncoding& GetDataCharacterEncoding() const{ return m_dataCharacterEncoding; }

    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline bool DataCharacterEncodingHasBeenSet() const { return m_dataCharacterEncodingHasBeenSet; }

    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline void SetDataCharacterEncoding(const ImportDataCharacterEncoding& value) { m_dataCharacterEncodingHasBeenSet = true; m_dataCharacterEncoding = value; }

    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline void SetDataCharacterEncoding(ImportDataCharacterEncoding&& value) { m_dataCharacterEncodingHasBeenSet = true; m_dataCharacterEncoding = std::move(value); }

    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline DelimitedTextImportOptions& WithDataCharacterEncoding(const ImportDataCharacterEncoding& value) { SetDataCharacterEncoding(value); return *this;}

    /**
     * <p>The encoding of the data in the input file.</p>
     */
    inline DelimitedTextImportOptions& WithDataCharacterEncoding(ImportDataCharacterEncoding&& value) { SetDataCharacterEncoding(std::move(value)); return *this;}

  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    bool m_hasHeaderRow;
    bool m_hasHeaderRowHasBeenSet = false;

    bool m_ignoreEmptyRows;
    bool m_ignoreEmptyRowsHasBeenSet = false;

    ImportDataCharacterEncoding m_dataCharacterEncoding;
    bool m_dataCharacterEncodingHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
