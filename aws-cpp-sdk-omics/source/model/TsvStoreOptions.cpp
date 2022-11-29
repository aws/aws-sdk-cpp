/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/TsvStoreOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

TsvStoreOptions::TsvStoreOptions() : 
    m_annotationType(AnnotationType::NOT_SET),
    m_annotationTypeHasBeenSet(false),
    m_formatToHeaderHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

TsvStoreOptions::TsvStoreOptions(JsonView jsonValue) : 
    m_annotationType(AnnotationType::NOT_SET),
    m_annotationTypeHasBeenSet(false),
    m_formatToHeaderHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
  *this = jsonValue;
}

TsvStoreOptions& TsvStoreOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("annotationType"))
  {
    m_annotationType = AnnotationTypeMapper::GetAnnotationTypeForName(jsonValue.GetString("annotationType"));

    m_annotationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formatToHeader"))
  {
    Aws::Map<Aws::String, JsonView> formatToHeaderJsonMap = jsonValue.GetObject("formatToHeader").GetAllObjects();
    for(auto& formatToHeaderItem : formatToHeaderJsonMap)
    {
      m_formatToHeader[FormatToHeaderKeyMapper::GetFormatToHeaderKeyForName(formatToHeaderItem.first)] = formatToHeaderItem.second.AsString();
    }
    m_formatToHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      Aws::Map<Aws::String, JsonView> schemaItemJsonMap = schemaJsonList[schemaIndex].GetAllObjects();
      Aws::Map<Aws::String, SchemaValueType> schemaItemMap;
      for(auto& schemaItemItem : schemaItemJsonMap)
      {
        schemaItemMap[schemaItemItem.first] = SchemaValueTypeMapper::GetSchemaValueTypeForName(schemaItemItem.second.AsString());
      }
      m_schema.push_back(std::move(schemaItemMap));
    }
    m_schemaHasBeenSet = true;
  }

  return *this;
}

JsonValue TsvStoreOptions::Jsonize() const
{
  JsonValue payload;

  if(m_annotationTypeHasBeenSet)
  {
   payload.WithString("annotationType", AnnotationTypeMapper::GetNameForAnnotationType(m_annotationType));
  }

  if(m_formatToHeaderHasBeenSet)
  {
   JsonValue formatToHeaderJsonMap;
   for(auto& formatToHeaderItem : m_formatToHeader)
   {
     formatToHeaderJsonMap.WithString(FormatToHeaderKeyMapper::GetNameForFormatToHeaderKey(formatToHeaderItem.first), formatToHeaderItem.second);
   }
   payload.WithObject("formatToHeader", std::move(formatToHeaderJsonMap));

  }

  if(m_schemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaJsonList(m_schema.size());
   for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
   {
     JsonValue schemaItemJsonMap;
     for(auto& schemaItemItem : m_schema[schemaIndex])
     {
       schemaItemJsonMap.WithString(schemaItemItem.first, SchemaValueTypeMapper::GetNameForSchemaValueType(schemaItemItem.second));
     }
     schemaJsonList[schemaIndex].AsObject(std::move(schemaItemJsonMap));
   }
   payload.WithArray("schema", std::move(schemaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
