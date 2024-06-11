/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/CSVFileCompression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about how a source CSV data file should be
   * analyzed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/CsvFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class CsvFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor();
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline const CSVFileCompression& GetFileCompression() const{ return m_fileCompression; }
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }
    inline void SetFileCompression(const CSVFileCompression& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }
    inline void SetFileCompression(CSVFileCompression&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::move(value); }
    inline CsvFormatDescriptor& WithFileCompression(const CSVFileCompression& value) { SetFileCompression(value); return *this;}
    inline CsvFormatDescriptor& WithFileCompression(CSVFileCompression&& value) { SetFileCompression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set in which the source CSV file is written.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }
    inline CsvFormatDescriptor& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}
    inline CsvFormatDescriptor& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}
    inline CsvFormatDescriptor& WithCharset(const char* value) { SetCharset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the source CSV file contains a header.</p>
     */
    inline bool GetContainsHeader() const{ return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    inline void SetContainsHeader(bool value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }
    inline CsvFormatDescriptor& WithContainsHeader(bool value) { SetContainsHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character used to delimit the source CSV file.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline CsvFormatDescriptor& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline CsvFormatDescriptor& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline CsvFormatDescriptor& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the source CSV file's headers, if any.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderList() const{ return m_headerList; }
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }
    inline void SetHeaderList(const Aws::Vector<Aws::String>& value) { m_headerListHasBeenSet = true; m_headerList = value; }
    inline void SetHeaderList(Aws::Vector<Aws::String>&& value) { m_headerListHasBeenSet = true; m_headerList = std::move(value); }
    inline CsvFormatDescriptor& WithHeaderList(const Aws::Vector<Aws::String>& value) { SetHeaderList(value); return *this;}
    inline CsvFormatDescriptor& WithHeaderList(Aws::Vector<Aws::String>&& value) { SetHeaderList(std::move(value)); return *this;}
    inline CsvFormatDescriptor& AddHeaderList(const Aws::String& value) { m_headerListHasBeenSet = true; m_headerList.push_back(value); return *this; }
    inline CsvFormatDescriptor& AddHeaderList(Aws::String&& value) { m_headerListHasBeenSet = true; m_headerList.push_back(std::move(value)); return *this; }
    inline CsvFormatDescriptor& AddHeaderList(const char* value) { m_headerListHasBeenSet = true; m_headerList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The character used as a quote character.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const{ return m_quoteSymbol; }
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }
    inline void SetQuoteSymbol(const Aws::String& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = value; }
    inline void SetQuoteSymbol(Aws::String&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::move(value); }
    inline void SetQuoteSymbol(const char* value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol.assign(value); }
    inline CsvFormatDescriptor& WithQuoteSymbol(const Aws::String& value) { SetQuoteSymbol(value); return *this;}
    inline CsvFormatDescriptor& WithQuoteSymbol(Aws::String&& value) { SetQuoteSymbol(std::move(value)); return *this;}
    inline CsvFormatDescriptor& WithQuoteSymbol(const char* value) { SetQuoteSymbol(value); return *this;}
    ///@}
  private:

    CSVFileCompression m_fileCompression;
    bool m_fileCompressionHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;

    bool m_containsHeader;
    bool m_containsHeaderHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::Vector<Aws::String> m_headerList;
    bool m_headerListHasBeenSet = false;

    Aws::String m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
