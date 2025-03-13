/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedField.h>
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
   * <p>Properties of an inferred CSV format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedCsvFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class DetectedCsvFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format's file compression.</p>
     */
    inline const DetectedField& GetFileCompression() const { return m_fileCompression; }
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }
    template<typename FileCompressionT = DetectedField>
    void SetFileCompression(FileCompressionT&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::forward<FileCompressionT>(value); }
    template<typename FileCompressionT = DetectedField>
    DetectedCsvFormatDescriptor& WithFileCompression(FileCompressionT&& value) { SetFileCompression(std::forward<FileCompressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format's charset.</p>
     */
    inline const DetectedField& GetCharset() const { return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    template<typename CharsetT = DetectedField>
    void SetCharset(CharsetT&& value) { m_charsetHasBeenSet = true; m_charset = std::forward<CharsetT>(value); }
    template<typename CharsetT = DetectedField>
    DetectedCsvFormatDescriptor& WithCharset(CharsetT&& value) { SetCharset(std::forward<CharsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the format includes a header.</p>
     */
    inline const DetectedField& GetContainsHeader() const { return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    template<typename ContainsHeaderT = DetectedField>
    void SetContainsHeader(ContainsHeaderT&& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = std::forward<ContainsHeaderT>(value); }
    template<typename ContainsHeaderT = DetectedField>
    DetectedCsvFormatDescriptor& WithContainsHeader(ContainsHeaderT&& value) { SetContainsHeader(std::forward<ContainsHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format's delimiter.</p>
     */
    inline const DetectedField& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = DetectedField>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = DetectedField>
    DetectedCsvFormatDescriptor& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format's header list.</p>
     */
    inline const DetectedField& GetHeaderList() const { return m_headerList; }
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }
    template<typename HeaderListT = DetectedField>
    void SetHeaderList(HeaderListT&& value) { m_headerListHasBeenSet = true; m_headerList = std::forward<HeaderListT>(value); }
    template<typename HeaderListT = DetectedField>
    DetectedCsvFormatDescriptor& WithHeaderList(HeaderListT&& value) { SetHeaderList(std::forward<HeaderListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format's quote symbol.</p>
     */
    inline const DetectedField& GetQuoteSymbol() const { return m_quoteSymbol; }
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }
    template<typename QuoteSymbolT = DetectedField>
    void SetQuoteSymbol(QuoteSymbolT&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::forward<QuoteSymbolT>(value); }
    template<typename QuoteSymbolT = DetectedField>
    DetectedCsvFormatDescriptor& WithQuoteSymbol(QuoteSymbolT&& value) { SetQuoteSymbol(std::forward<QuoteSymbolT>(value)); return *this;}
    ///@}
  private:

    DetectedField m_fileCompression;
    bool m_fileCompressionHasBeenSet = false;

    DetectedField m_charset;
    bool m_charsetHasBeenSet = false;

    DetectedField m_containsHeader;
    bool m_containsHeaderHasBeenSet = false;

    DetectedField m_delimiter;
    bool m_delimiterHasBeenSet = false;

    DetectedField m_headerList;
    bool m_headerListHasBeenSet = false;

    DetectedField m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
