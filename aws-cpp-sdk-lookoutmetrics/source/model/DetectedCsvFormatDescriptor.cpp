/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectedCsvFormatDescriptor.h>
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

DetectedCsvFormatDescriptor::DetectedCsvFormatDescriptor() : 
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_containsHeaderHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false)
{
}

DetectedCsvFormatDescriptor::DetectedCsvFormatDescriptor(JsonView jsonValue) : 
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_containsHeaderHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_headerListHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedCsvFormatDescriptor& DetectedCsvFormatDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileCompression"))
  {
    m_fileCompression = jsonValue.GetObject("FileCompression");

    m_fileCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetObject("Charset");

    m_charsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsHeader"))
  {
    m_containsHeader = jsonValue.GetObject("ContainsHeader");

    m_containsHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetObject("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderList"))
  {
    m_headerList = jsonValue.GetObject("HeaderList");

    m_headerListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteSymbol"))
  {
    m_quoteSymbol = jsonValue.GetObject("QuoteSymbol");

    m_quoteSymbolHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedCsvFormatDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_fileCompressionHasBeenSet)
  {
   payload.WithObject("FileCompression", m_fileCompression.Jsonize());

  }

  if(m_charsetHasBeenSet)
  {
   payload.WithObject("Charset", m_charset.Jsonize());

  }

  if(m_containsHeaderHasBeenSet)
  {
   payload.WithObject("ContainsHeader", m_containsHeader.Jsonize());

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithObject("Delimiter", m_delimiter.Jsonize());

  }

  if(m_headerListHasBeenSet)
  {
   payload.WithObject("HeaderList", m_headerList.Jsonize());

  }

  if(m_quoteSymbolHasBeenSet)
  {
   payload.WithObject("QuoteSymbol", m_quoteSymbol.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
