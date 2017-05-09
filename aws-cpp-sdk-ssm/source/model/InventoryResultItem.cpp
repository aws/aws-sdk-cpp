/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/InventoryResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryResultItem::InventoryResultItem() : 
    m_typeNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

InventoryResultItem::InventoryResultItem(const JsonValue& jsonValue) : 
    m_typeNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryResultItem& InventoryResultItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");

    m_typeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetString("CaptureTime");

    m_captureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentHash"))
  {
    m_contentHash = jsonValue.GetString("ContentHash");

    m_contentHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    Array<JsonValue> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      Aws::Map<Aws::String, JsonValue> inventoryItemEntryJsonMap = contentJsonList[contentIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> inventoryItemEntryMap;
      for(auto& inventoryItemEntryItem : inventoryItemEntryJsonMap)
      {
        inventoryItemEntryMap[inventoryItemEntryItem.first] = inventoryItemEntryItem.second.AsString();
      }
      m_content.push_back(std::move(inventoryItemEntryMap));
    }
    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_captureTimeHasBeenSet)
  {
   payload.WithString("CaptureTime", m_captureTime);

  }

  if(m_contentHashHasBeenSet)
  {
   payload.WithString("ContentHash", m_contentHash);

  }

  if(m_contentHasBeenSet)
  {
   Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     JsonValue inventoryItemEntryJsonMap;
     for(auto& inventoryItemEntryItem : m_content[contentIndex])
     {
       inventoryItemEntryJsonMap.WithString(inventoryItemEntryItem.first, inventoryItemEntryItem.second);
     }
     contentJsonList[contentIndex].AsObject(std::move(inventoryItemEntryJsonMap));
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws