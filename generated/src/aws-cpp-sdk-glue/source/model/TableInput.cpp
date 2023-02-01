/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableInput.h>
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

TableInput::TableInput() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false),
    m_retention(0),
    m_retentionHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_targetTableHasBeenSet(false)
{
}

TableInput::TableInput(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false),
    m_retention(0),
    m_retentionHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_targetTableHasBeenSet(false)
{
  *this = jsonValue;
}

TableInput& TableInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessTime"))
  {
    m_lastAccessTime = jsonValue.GetDouble("LastAccessTime");

    m_lastAccessTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAnalyzedTime"))
  {
    m_lastAnalyzedTime = jsonValue.GetDouble("LastAnalyzedTime");

    m_lastAnalyzedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Retention"))
  {
    m_retention = jsonValue.GetInteger("Retention");

    m_retentionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageDescriptor"))
  {
    m_storageDescriptor = jsonValue.GetObject("StorageDescriptor");

    m_storageDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionKeys"))
  {
    Aws::Utils::Array<JsonView> partitionKeysJsonList = jsonValue.GetArray("PartitionKeys");
    for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
    {
      m_partitionKeys.push_back(partitionKeysJsonList[partitionKeysIndex].AsObject());
    }
    m_partitionKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewOriginalText"))
  {
    m_viewOriginalText = jsonValue.GetString("ViewOriginalText");

    m_viewOriginalTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewExpandedText"))
  {
    m_viewExpandedText = jsonValue.GetString("ViewExpandedText");

    m_viewExpandedTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableType"))
  {
    m_tableType = jsonValue.GetString("TableType");

    m_tableTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTable"))
  {
    m_targetTable = jsonValue.GetObject("TargetTable");

    m_targetTableHasBeenSet = true;
  }

  return *this;
}

JsonValue TableInput::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_lastAccessTimeHasBeenSet)
  {
   payload.WithDouble("LastAccessTime", m_lastAccessTime.SecondsWithMSPrecision());
  }

  if(m_lastAnalyzedTimeHasBeenSet)
  {
   payload.WithDouble("LastAnalyzedTime", m_lastAnalyzedTime.SecondsWithMSPrecision());
  }

  if(m_retentionHasBeenSet)
  {
   payload.WithInteger("Retention", m_retention);

  }

  if(m_storageDescriptorHasBeenSet)
  {
   payload.WithObject("StorageDescriptor", m_storageDescriptor.Jsonize());

  }

  if(m_partitionKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionKeysJsonList(m_partitionKeys.size());
   for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
   {
     partitionKeysJsonList[partitionKeysIndex].AsObject(m_partitionKeys[partitionKeysIndex].Jsonize());
   }
   payload.WithArray("PartitionKeys", std::move(partitionKeysJsonList));

  }

  if(m_viewOriginalTextHasBeenSet)
  {
   payload.WithString("ViewOriginalText", m_viewOriginalText);

  }

  if(m_viewExpandedTextHasBeenSet)
  {
   payload.WithString("ViewExpandedText", m_viewExpandedText);

  }

  if(m_tableTypeHasBeenSet)
  {
   payload.WithString("TableType", m_tableType);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_targetTableHasBeenSet)
  {
   payload.WithObject("TargetTable", m_targetTable.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
