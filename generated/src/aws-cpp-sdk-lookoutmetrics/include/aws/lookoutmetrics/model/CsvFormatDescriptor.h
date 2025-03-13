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
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API CsvFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline CSVFileCompression GetFileCompression() const { return m_fileCompression; }
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }
    inline void SetFileCompression(CSVFileCompression value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }
    inline CsvFormatDescriptor& WithFileCompression(CSVFileCompression value) { SetFileCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set in which the source CSV file is written.</p>
     */
    inline const Aws::String& GetCharset() const { return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    template<typename CharsetT = Aws::String>
    void SetCharset(CharsetT&& value) { m_charsetHasBeenSet = true; m_charset = std::forward<CharsetT>(value); }
    template<typename CharsetT = Aws::String>
    CsvFormatDescriptor& WithCharset(CharsetT&& value) { SetCharset(std::forward<CharsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the source CSV file contains a header.</p>
     */
    inline bool GetContainsHeader() const { return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    inline void SetContainsHeader(bool value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }
    inline CsvFormatDescriptor& WithContainsHeader(bool value) { SetContainsHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character used to delimit the source CSV file.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    CsvFormatDescriptor& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the source CSV file's headers, if any.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderList() const { return m_headerList; }
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }
    template<typename HeaderListT = Aws::Vector<Aws::String>>
    void SetHeaderList(HeaderListT&& value) { m_headerListHasBeenSet = true; m_headerList = std::forward<HeaderListT>(value); }
    template<typename HeaderListT = Aws::Vector<Aws::String>>
    CsvFormatDescriptor& WithHeaderList(HeaderListT&& value) { SetHeaderList(std::forward<HeaderListT>(value)); return *this;}
    template<typename HeaderListT = Aws::String>
    CsvFormatDescriptor& AddHeaderList(HeaderListT&& value) { m_headerListHasBeenSet = true; m_headerList.emplace_back(std::forward<HeaderListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The character used as a quote character.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const { return m_quoteSymbol; }
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }
    template<typename QuoteSymbolT = Aws::String>
    void SetQuoteSymbol(QuoteSymbolT&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::forward<QuoteSymbolT>(value); }
    template<typename QuoteSymbolT = Aws::String>
    CsvFormatDescriptor& WithQuoteSymbol(QuoteSymbolT&& value) { SetQuoteSymbol(std::forward<QuoteSymbolT>(value)); return *this;}
    ///@}
  private:

    CSVFileCompression m_fileCompression{CSVFileCompression::NOT_SET};
    bool m_fileCompressionHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;

    bool m_containsHeader{false};
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
