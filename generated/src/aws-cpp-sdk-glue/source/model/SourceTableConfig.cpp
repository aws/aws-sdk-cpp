/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SourceTableConfig.h>
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

SourceTableConfig::SourceTableConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceTableConfig& SourceTableConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsString());
    }
    m_fieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterPredicate"))
  {
    m_filterPredicate = jsonValue.GetString("FilterPredicate");
    m_filterPredicateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryKey"))
  {
    Aws::Utils::Array<JsonView> primaryKeyJsonList = jsonValue.GetArray("PrimaryKey");
    for(unsigned primaryKeyIndex = 0; primaryKeyIndex < primaryKeyJsonList.GetLength(); ++primaryKeyIndex)
    {
      m_primaryKey.push_back(primaryKeyJsonList[primaryKeyIndex].AsString());
    }
    m_primaryKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordUpdateField"))
  {
    m_recordUpdateField = jsonValue.GetString("RecordUpdateField");
    m_recordUpdateFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceTableConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsString(m_fields[fieldsIndex]);
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  if(m_filterPredicateHasBeenSet)
  {
   payload.WithString("FilterPredicate", m_filterPredicate);

  }

  if(m_primaryKeyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryKeyJsonList(m_primaryKey.size());
   for(unsigned primaryKeyIndex = 0; primaryKeyIndex < primaryKeyJsonList.GetLength(); ++primaryKeyIndex)
   {
     primaryKeyJsonList[primaryKeyIndex].AsString(m_primaryKey[primaryKeyIndex]);
   }
   payload.WithArray("PrimaryKey", std::move(primaryKeyJsonList));

  }

  if(m_recordUpdateFieldHasBeenSet)
  {
   payload.WithString("RecordUpdateField", m_recordUpdateField);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
