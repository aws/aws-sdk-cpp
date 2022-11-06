/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateCsvClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

UpdateCsvClassifierRequest::UpdateCsvClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false),
    m_containsHeader(CsvHeaderOption::NOT_SET),
    m_containsHeaderHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_disableValueTrimming(false),
    m_disableValueTrimmingHasBeenSet(false),
    m_allowSingleColumn(false),
    m_allowSingleColumnHasBeenSet(false),
    m_customDatatypeConfigured(false),
    m_customDatatypeConfiguredHasBeenSet(false),
    m_customDatatypesHasBeenSet(false)
{
}

UpdateCsvClassifierRequest::UpdateCsvClassifierRequest(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false),
    m_containsHeader(CsvHeaderOption::NOT_SET),
    m_containsHeaderHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_disableValueTrimming(false),
    m_disableValueTrimmingHasBeenSet(false),
    m_allowSingleColumn(false),
    m_allowSingleColumnHasBeenSet(false),
    m_customDatatypeConfigured(false),
    m_customDatatypeConfiguredHasBeenSet(false),
    m_customDatatypesHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateCsvClassifierRequest& UpdateCsvClassifierRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteSymbol"))
  {
    m_quoteSymbol = jsonValue.GetString("QuoteSymbol");

    m_quoteSymbolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsHeader"))
  {
    m_containsHeader = CsvHeaderOptionMapper::GetCsvHeaderOptionForName(jsonValue.GetString("ContainsHeader"));

    m_containsHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    Aws::Utils::Array<JsonView> headerJsonList = jsonValue.GetArray("Header");
    for(unsigned headerIndex = 0; headerIndex < headerJsonList.GetLength(); ++headerIndex)
    {
      m_header.push_back(headerJsonList[headerIndex].AsString());
    }
    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableValueTrimming"))
  {
    m_disableValueTrimming = jsonValue.GetBool("DisableValueTrimming");

    m_disableValueTrimmingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowSingleColumn"))
  {
    m_allowSingleColumn = jsonValue.GetBool("AllowSingleColumn");

    m_allowSingleColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomDatatypeConfigured"))
  {
    m_customDatatypeConfigured = jsonValue.GetBool("CustomDatatypeConfigured");

    m_customDatatypeConfiguredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomDatatypes"))
  {
    Aws::Utils::Array<JsonView> customDatatypesJsonList = jsonValue.GetArray("CustomDatatypes");
    for(unsigned customDatatypesIndex = 0; customDatatypesIndex < customDatatypesJsonList.GetLength(); ++customDatatypesIndex)
    {
      m_customDatatypes.push_back(customDatatypesJsonList[customDatatypesIndex].AsString());
    }
    m_customDatatypesHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateCsvClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_quoteSymbolHasBeenSet)
  {
   payload.WithString("QuoteSymbol", m_quoteSymbol);

  }

  if(m_containsHeaderHasBeenSet)
  {
   payload.WithString("ContainsHeader", CsvHeaderOptionMapper::GetNameForCsvHeaderOption(m_containsHeader));
  }

  if(m_headerHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headerJsonList(m_header.size());
   for(unsigned headerIndex = 0; headerIndex < headerJsonList.GetLength(); ++headerIndex)
   {
     headerJsonList[headerIndex].AsString(m_header[headerIndex]);
   }
   payload.WithArray("Header", std::move(headerJsonList));

  }

  if(m_disableValueTrimmingHasBeenSet)
  {
   payload.WithBool("DisableValueTrimming", m_disableValueTrimming);

  }

  if(m_allowSingleColumnHasBeenSet)
  {
   payload.WithBool("AllowSingleColumn", m_allowSingleColumn);

  }

  if(m_customDatatypeConfiguredHasBeenSet)
  {
   payload.WithBool("CustomDatatypeConfigured", m_customDatatypeConfigured);

  }

  if(m_customDatatypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDatatypesJsonList(m_customDatatypes.size());
   for(unsigned customDatatypesIndex = 0; customDatatypesIndex < customDatatypesJsonList.GetLength(); ++customDatatypesIndex)
   {
     customDatatypesJsonList[customDatatypesIndex].AsString(m_customDatatypes[customDatatypesIndex]);
   }
   payload.WithArray("CustomDatatypes", std::move(customDatatypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
