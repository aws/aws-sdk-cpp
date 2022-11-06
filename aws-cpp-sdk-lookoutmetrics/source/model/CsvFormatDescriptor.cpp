/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CsvFormatDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

CsvFormatDescriptor::CsvFormatDescriptor() : 
    m_fileCompression(CSVFileCompression::NOT_SET),
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_containsHeader(false),
    m_containsHeaderHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false)
{
}

CsvFormatDescriptor::CsvFormatDescriptor(JsonView jsonValue) : 
    m_fileCompression(CSVFileCompression::NOT_SET),
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_containsHeader(false),
    m_containsHeaderHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false)
{
  *this = jsonValue;
}

CsvFormatDescriptor& CsvFormatDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileCompression"))
  {
    m_fileCompression = CSVFileCompressionMapper::GetCSVFileCompressionForName(jsonValue.GetString("FileCompression"));

    m_fileCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetString("Charset");

    m_charsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsHeader"))
  {
    m_containsHeader = jsonValue.GetBool("ContainsHeader");

    m_containsHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderList"))
  {
    Aws::Utils::Array<JsonView> headerListJsonList = jsonValue.GetArray("HeaderList");
    for(unsigned headerListIndex = 0; headerListIndex < headerListJsonList.GetLength(); ++headerListIndex)
    {
      m_headerList.push_back(headerListJsonList[headerListIndex].AsString());
    }
    m_headerListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteSymbol"))
  {
    m_quoteSymbol = jsonValue.GetString("QuoteSymbol");

    m_quoteSymbolHasBeenSet = true;
  }

  return *this;
}

JsonValue CsvFormatDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_fileCompressionHasBeenSet)
  {
   payload.WithString("FileCompression", CSVFileCompressionMapper::GetNameForCSVFileCompression(m_fileCompression));
  }

  if(m_charsetHasBeenSet)
  {
   payload.WithString("Charset", m_charset);

  }

  if(m_containsHeaderHasBeenSet)
  {
   payload.WithBool("ContainsHeader", m_containsHeader);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_headerListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headerListJsonList(m_headerList.size());
   for(unsigned headerListIndex = 0; headerListIndex < headerListJsonList.GetLength(); ++headerListIndex)
   {
     headerListJsonList[headerListIndex].AsString(m_headerList[headerListIndex]);
   }
   payload.WithArray("HeaderList", std::move(headerListJsonList));

  }

  if(m_quoteSymbolHasBeenSet)
  {
   payload.WithString("QuoteSymbol", m_quoteSymbol);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
