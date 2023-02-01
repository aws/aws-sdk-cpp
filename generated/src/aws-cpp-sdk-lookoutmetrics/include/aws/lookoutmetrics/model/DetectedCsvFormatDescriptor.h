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
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor();
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedCsvFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format's file compression.</p>
     */
    inline const DetectedField& GetFileCompression() const{ return m_fileCompression; }

    /**
     * <p>The format's file compression.</p>
     */
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }

    /**
     * <p>The format's file compression.</p>
     */
    inline void SetFileCompression(const DetectedField& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }

    /**
     * <p>The format's file compression.</p>
     */
    inline void SetFileCompression(DetectedField&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::move(value); }

    /**
     * <p>The format's file compression.</p>
     */
    inline DetectedCsvFormatDescriptor& WithFileCompression(const DetectedField& value) { SetFileCompression(value); return *this;}

    /**
     * <p>The format's file compression.</p>
     */
    inline DetectedCsvFormatDescriptor& WithFileCompression(DetectedField&& value) { SetFileCompression(std::move(value)); return *this;}


    /**
     * <p>The format's charset.</p>
     */
    inline const DetectedField& GetCharset() const{ return m_charset; }

    /**
     * <p>The format's charset.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The format's charset.</p>
     */
    inline void SetCharset(const DetectedField& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The format's charset.</p>
     */
    inline void SetCharset(DetectedField&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The format's charset.</p>
     */
    inline DetectedCsvFormatDescriptor& WithCharset(const DetectedField& value) { SetCharset(value); return *this;}

    /**
     * <p>The format's charset.</p>
     */
    inline DetectedCsvFormatDescriptor& WithCharset(DetectedField&& value) { SetCharset(std::move(value)); return *this;}


    /**
     * <p>Whether the format includes a header.</p>
     */
    inline const DetectedField& GetContainsHeader() const{ return m_containsHeader; }

    /**
     * <p>Whether the format includes a header.</p>
     */
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }

    /**
     * <p>Whether the format includes a header.</p>
     */
    inline void SetContainsHeader(const DetectedField& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }

    /**
     * <p>Whether the format includes a header.</p>
     */
    inline void SetContainsHeader(DetectedField&& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = std::move(value); }

    /**
     * <p>Whether the format includes a header.</p>
     */
    inline DetectedCsvFormatDescriptor& WithContainsHeader(const DetectedField& value) { SetContainsHeader(value); return *this;}

    /**
     * <p>Whether the format includes a header.</p>
     */
    inline DetectedCsvFormatDescriptor& WithContainsHeader(DetectedField&& value) { SetContainsHeader(std::move(value)); return *this;}


    /**
     * <p>The format's delimiter.</p>
     */
    inline const DetectedField& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>The format's delimiter.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>The format's delimiter.</p>
     */
    inline void SetDelimiter(const DetectedField& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>The format's delimiter.</p>
     */
    inline void SetDelimiter(DetectedField&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>The format's delimiter.</p>
     */
    inline DetectedCsvFormatDescriptor& WithDelimiter(const DetectedField& value) { SetDelimiter(value); return *this;}

    /**
     * <p>The format's delimiter.</p>
     */
    inline DetectedCsvFormatDescriptor& WithDelimiter(DetectedField&& value) { SetDelimiter(std::move(value)); return *this;}


    /**
     * <p>The format's header list.</p>
     */
    inline const DetectedField& GetHeaderList() const{ return m_headerList; }

    /**
     * <p>The format's header list.</p>
     */
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }

    /**
     * <p>The format's header list.</p>
     */
    inline void SetHeaderList(const DetectedField& value) { m_headerListHasBeenSet = true; m_headerList = value; }

    /**
     * <p>The format's header list.</p>
     */
    inline void SetHeaderList(DetectedField&& value) { m_headerListHasBeenSet = true; m_headerList = std::move(value); }

    /**
     * <p>The format's header list.</p>
     */
    inline DetectedCsvFormatDescriptor& WithHeaderList(const DetectedField& value) { SetHeaderList(value); return *this;}

    /**
     * <p>The format's header list.</p>
     */
    inline DetectedCsvFormatDescriptor& WithHeaderList(DetectedField&& value) { SetHeaderList(std::move(value)); return *this;}


    /**
     * <p>The format's quote symbol.</p>
     */
    inline const DetectedField& GetQuoteSymbol() const{ return m_quoteSymbol; }

    /**
     * <p>The format's quote symbol.</p>
     */
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }

    /**
     * <p>The format's quote symbol.</p>
     */
    inline void SetQuoteSymbol(const DetectedField& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = value; }

    /**
     * <p>The format's quote symbol.</p>
     */
    inline void SetQuoteSymbol(DetectedField&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::move(value); }

    /**
     * <p>The format's quote symbol.</p>
     */
    inline DetectedCsvFormatDescriptor& WithQuoteSymbol(const DetectedField& value) { SetQuoteSymbol(value); return *this;}

    /**
     * <p>The format's quote symbol.</p>
     */
    inline DetectedCsvFormatDescriptor& WithQuoteSymbol(DetectedField&& value) { SetQuoteSymbol(std::move(value)); return *this;}

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
