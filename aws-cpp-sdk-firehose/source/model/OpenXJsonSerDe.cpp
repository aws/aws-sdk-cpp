/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/OpenXJsonSerDe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

OpenXJsonSerDe::OpenXJsonSerDe() : 
    m_convertDotsInJsonKeysToUnderscores(false),
    m_convertDotsInJsonKeysToUnderscoresHasBeenSet(false),
    m_caseInsensitive(false),
    m_caseInsensitiveHasBeenSet(false),
    m_columnToJsonKeyMappingsHasBeenSet(false)
{
}

OpenXJsonSerDe::OpenXJsonSerDe(JsonView jsonValue) : 
    m_convertDotsInJsonKeysToUnderscores(false),
    m_convertDotsInJsonKeysToUnderscoresHasBeenSet(false),
    m_caseInsensitive(false),
    m_caseInsensitiveHasBeenSet(false),
    m_columnToJsonKeyMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

OpenXJsonSerDe& OpenXJsonSerDe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConvertDotsInJsonKeysToUnderscores"))
  {
    m_convertDotsInJsonKeysToUnderscores = jsonValue.GetBool("ConvertDotsInJsonKeysToUnderscores");

    m_convertDotsInJsonKeysToUnderscoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseInsensitive"))
  {
    m_caseInsensitive = jsonValue.GetBool("CaseInsensitive");

    m_caseInsensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnToJsonKeyMappings"))
  {
    Aws::Map<Aws::String, JsonView> columnToJsonKeyMappingsJsonMap = jsonValue.GetObject("ColumnToJsonKeyMappings").GetAllObjects();
    for(auto& columnToJsonKeyMappingsItem : columnToJsonKeyMappingsJsonMap)
    {
      m_columnToJsonKeyMappings[columnToJsonKeyMappingsItem.first] = columnToJsonKeyMappingsItem.second.AsString();
    }
    m_columnToJsonKeyMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenXJsonSerDe::Jsonize() const
{
  JsonValue payload;

  if(m_convertDotsInJsonKeysToUnderscoresHasBeenSet)
  {
   payload.WithBool("ConvertDotsInJsonKeysToUnderscores", m_convertDotsInJsonKeysToUnderscores);

  }

  if(m_caseInsensitiveHasBeenSet)
  {
   payload.WithBool("CaseInsensitive", m_caseInsensitive);

  }

  if(m_columnToJsonKeyMappingsHasBeenSet)
  {
   JsonValue columnToJsonKeyMappingsJsonMap;
   for(auto& columnToJsonKeyMappingsItem : m_columnToJsonKeyMappings)
   {
     columnToJsonKeyMappingsJsonMap.WithString(columnToJsonKeyMappingsItem.first, columnToJsonKeyMappingsItem.second);
   }
   payload.WithObject("ColumnToJsonKeyMappings", std::move(columnToJsonKeyMappingsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
