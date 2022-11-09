/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ColumnConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ColumnConfiguration::ColumnConfiguration() : 
    m_documentIdColumnNameHasBeenSet(false),
    m_documentDataColumnNameHasBeenSet(false),
    m_documentTitleColumnNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_changeDetectingColumnsHasBeenSet(false)
{
}

ColumnConfiguration::ColumnConfiguration(JsonView jsonValue) : 
    m_documentIdColumnNameHasBeenSet(false),
    m_documentDataColumnNameHasBeenSet(false),
    m_documentTitleColumnNameHasBeenSet(false),
    m_fieldMappingsHasBeenSet(false),
    m_changeDetectingColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnConfiguration& ColumnConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentIdColumnName"))
  {
    m_documentIdColumnName = jsonValue.GetString("DocumentIdColumnName");

    m_documentIdColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentDataColumnName"))
  {
    m_documentDataColumnName = jsonValue.GetString("DocumentDataColumnName");

    m_documentDataColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentTitleColumnName"))
  {
    m_documentTitleColumnName = jsonValue.GetString("DocumentTitleColumnName");

    m_documentTitleColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldMappings"))
  {
    Aws::Utils::Array<JsonView> fieldMappingsJsonList = jsonValue.GetArray("FieldMappings");
    for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
    {
      m_fieldMappings.push_back(fieldMappingsJsonList[fieldMappingsIndex].AsObject());
    }
    m_fieldMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeDetectingColumns"))
  {
    Aws::Utils::Array<JsonView> changeDetectingColumnsJsonList = jsonValue.GetArray("ChangeDetectingColumns");
    for(unsigned changeDetectingColumnsIndex = 0; changeDetectingColumnsIndex < changeDetectingColumnsJsonList.GetLength(); ++changeDetectingColumnsIndex)
    {
      m_changeDetectingColumns.push_back(changeDetectingColumnsJsonList[changeDetectingColumnsIndex].AsString());
    }
    m_changeDetectingColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdColumnNameHasBeenSet)
  {
   payload.WithString("DocumentIdColumnName", m_documentIdColumnName);

  }

  if(m_documentDataColumnNameHasBeenSet)
  {
   payload.WithString("DocumentDataColumnName", m_documentDataColumnName);

  }

  if(m_documentTitleColumnNameHasBeenSet)
  {
   payload.WithString("DocumentTitleColumnName", m_documentTitleColumnName);

  }

  if(m_fieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldMappingsJsonList(m_fieldMappings.size());
   for(unsigned fieldMappingsIndex = 0; fieldMappingsIndex < fieldMappingsJsonList.GetLength(); ++fieldMappingsIndex)
   {
     fieldMappingsJsonList[fieldMappingsIndex].AsObject(m_fieldMappings[fieldMappingsIndex].Jsonize());
   }
   payload.WithArray("FieldMappings", std::move(fieldMappingsJsonList));

  }

  if(m_changeDetectingColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changeDetectingColumnsJsonList(m_changeDetectingColumns.size());
   for(unsigned changeDetectingColumnsIndex = 0; changeDetectingColumnsIndex < changeDetectingColumnsJsonList.GetLength(); ++changeDetectingColumnsIndex)
   {
     changeDetectingColumnsJsonList[changeDetectingColumnsIndex].AsString(m_changeDetectingColumns[changeDetectingColumnsIndex]);
   }
   payload.WithArray("ChangeDetectingColumns", std::move(changeDetectingColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
