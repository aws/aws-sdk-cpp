/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CsvClassifier.h>
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

CsvClassifier::CsvClassifier() : 
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
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

CsvClassifier::CsvClassifier(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
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

CsvClassifier& CsvClassifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
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

JsonValue CsvClassifier::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

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
