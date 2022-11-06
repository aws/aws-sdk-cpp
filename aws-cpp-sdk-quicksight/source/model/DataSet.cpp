/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DataSet::DataSet() : 
    m_arnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_physicalTableMapHasBeenSet(false),
    m_logicalTableMapHasBeenSet(false),
    m_outputColumnsHasBeenSet(false),
    m_importMode(DataSetImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_consumedSpiceCapacityInBytes(0),
    m_consumedSpiceCapacityInBytesHasBeenSet(false),
    m_columnGroupsHasBeenSet(false),
    m_fieldFoldersHasBeenSet(false),
    m_rowLevelPermissionDataSetHasBeenSet(false),
    m_rowLevelPermissionTagConfigurationHasBeenSet(false),
    m_columnLevelPermissionRulesHasBeenSet(false),
    m_dataSetUsageConfigurationHasBeenSet(false)
{
}

DataSet::DataSet(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_physicalTableMapHasBeenSet(false),
    m_logicalTableMapHasBeenSet(false),
    m_outputColumnsHasBeenSet(false),
    m_importMode(DataSetImportMode::NOT_SET),
    m_importModeHasBeenSet(false),
    m_consumedSpiceCapacityInBytes(0),
    m_consumedSpiceCapacityInBytesHasBeenSet(false),
    m_columnGroupsHasBeenSet(false),
    m_fieldFoldersHasBeenSet(false),
    m_rowLevelPermissionDataSetHasBeenSet(false),
    m_rowLevelPermissionTagConfigurationHasBeenSet(false),
    m_columnLevelPermissionRulesHasBeenSet(false),
    m_dataSetUsageConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSet& DataSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhysicalTableMap"))
  {
    Aws::Map<Aws::String, JsonView> physicalTableMapJsonMap = jsonValue.GetObject("PhysicalTableMap").GetAllObjects();
    for(auto& physicalTableMapItem : physicalTableMapJsonMap)
    {
      m_physicalTableMap[physicalTableMapItem.first] = physicalTableMapItem.second.AsObject();
    }
    m_physicalTableMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogicalTableMap"))
  {
    Aws::Map<Aws::String, JsonView> logicalTableMapJsonMap = jsonValue.GetObject("LogicalTableMap").GetAllObjects();
    for(auto& logicalTableMapItem : logicalTableMapJsonMap)
    {
      m_logicalTableMap[logicalTableMapItem.first] = logicalTableMapItem.second.AsObject();
    }
    m_logicalTableMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputColumns"))
  {
    Aws::Utils::Array<JsonView> outputColumnsJsonList = jsonValue.GetArray("OutputColumns");
    for(unsigned outputColumnsIndex = 0; outputColumnsIndex < outputColumnsJsonList.GetLength(); ++outputColumnsIndex)
    {
      m_outputColumns.push_back(outputColumnsJsonList[outputColumnsIndex].AsObject());
    }
    m_outputColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportMode"))
  {
    m_importMode = DataSetImportModeMapper::GetDataSetImportModeForName(jsonValue.GetString("ImportMode"));

    m_importModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedSpiceCapacityInBytes"))
  {
    m_consumedSpiceCapacityInBytes = jsonValue.GetInt64("ConsumedSpiceCapacityInBytes");

    m_consumedSpiceCapacityInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnGroups"))
  {
    Aws::Utils::Array<JsonView> columnGroupsJsonList = jsonValue.GetArray("ColumnGroups");
    for(unsigned columnGroupsIndex = 0; columnGroupsIndex < columnGroupsJsonList.GetLength(); ++columnGroupsIndex)
    {
      m_columnGroups.push_back(columnGroupsJsonList[columnGroupsIndex].AsObject());
    }
    m_columnGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldFolders"))
  {
    Aws::Map<Aws::String, JsonView> fieldFoldersJsonMap = jsonValue.GetObject("FieldFolders").GetAllObjects();
    for(auto& fieldFoldersItem : fieldFoldersJsonMap)
    {
      m_fieldFolders[fieldFoldersItem.first] = fieldFoldersItem.second.AsObject();
    }
    m_fieldFoldersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowLevelPermissionDataSet"))
  {
    m_rowLevelPermissionDataSet = jsonValue.GetObject("RowLevelPermissionDataSet");

    m_rowLevelPermissionDataSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowLevelPermissionTagConfiguration"))
  {
    m_rowLevelPermissionTagConfiguration = jsonValue.GetObject("RowLevelPermissionTagConfiguration");

    m_rowLevelPermissionTagConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnLevelPermissionRules"))
  {
    Aws::Utils::Array<JsonView> columnLevelPermissionRulesJsonList = jsonValue.GetArray("ColumnLevelPermissionRules");
    for(unsigned columnLevelPermissionRulesIndex = 0; columnLevelPermissionRulesIndex < columnLevelPermissionRulesJsonList.GetLength(); ++columnLevelPermissionRulesIndex)
    {
      m_columnLevelPermissionRules.push_back(columnLevelPermissionRulesJsonList[columnLevelPermissionRulesIndex].AsObject());
    }
    m_columnLevelPermissionRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetUsageConfiguration"))
  {
    m_dataSetUsageConfiguration = jsonValue.GetObject("DataSetUsageConfiguration");

    m_dataSetUsageConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSet::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_physicalTableMapHasBeenSet)
  {
   JsonValue physicalTableMapJsonMap;
   for(auto& physicalTableMapItem : m_physicalTableMap)
   {
     physicalTableMapJsonMap.WithObject(physicalTableMapItem.first, physicalTableMapItem.second.Jsonize());
   }
   payload.WithObject("PhysicalTableMap", std::move(physicalTableMapJsonMap));

  }

  if(m_logicalTableMapHasBeenSet)
  {
   JsonValue logicalTableMapJsonMap;
   for(auto& logicalTableMapItem : m_logicalTableMap)
   {
     logicalTableMapJsonMap.WithObject(logicalTableMapItem.first, logicalTableMapItem.second.Jsonize());
   }
   payload.WithObject("LogicalTableMap", std::move(logicalTableMapJsonMap));

  }

  if(m_outputColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputColumnsJsonList(m_outputColumns.size());
   for(unsigned outputColumnsIndex = 0; outputColumnsIndex < outputColumnsJsonList.GetLength(); ++outputColumnsIndex)
   {
     outputColumnsJsonList[outputColumnsIndex].AsObject(m_outputColumns[outputColumnsIndex].Jsonize());
   }
   payload.WithArray("OutputColumns", std::move(outputColumnsJsonList));

  }

  if(m_importModeHasBeenSet)
  {
   payload.WithString("ImportMode", DataSetImportModeMapper::GetNameForDataSetImportMode(m_importMode));
  }

  if(m_consumedSpiceCapacityInBytesHasBeenSet)
  {
   payload.WithInt64("ConsumedSpiceCapacityInBytes", m_consumedSpiceCapacityInBytes);

  }

  if(m_columnGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnGroupsJsonList(m_columnGroups.size());
   for(unsigned columnGroupsIndex = 0; columnGroupsIndex < columnGroupsJsonList.GetLength(); ++columnGroupsIndex)
   {
     columnGroupsJsonList[columnGroupsIndex].AsObject(m_columnGroups[columnGroupsIndex].Jsonize());
   }
   payload.WithArray("ColumnGroups", std::move(columnGroupsJsonList));

  }

  if(m_fieldFoldersHasBeenSet)
  {
   JsonValue fieldFoldersJsonMap;
   for(auto& fieldFoldersItem : m_fieldFolders)
   {
     fieldFoldersJsonMap.WithObject(fieldFoldersItem.first, fieldFoldersItem.second.Jsonize());
   }
   payload.WithObject("FieldFolders", std::move(fieldFoldersJsonMap));

  }

  if(m_rowLevelPermissionDataSetHasBeenSet)
  {
   payload.WithObject("RowLevelPermissionDataSet", m_rowLevelPermissionDataSet.Jsonize());

  }

  if(m_rowLevelPermissionTagConfigurationHasBeenSet)
  {
   payload.WithObject("RowLevelPermissionTagConfiguration", m_rowLevelPermissionTagConfiguration.Jsonize());

  }

  if(m_columnLevelPermissionRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnLevelPermissionRulesJsonList(m_columnLevelPermissionRules.size());
   for(unsigned columnLevelPermissionRulesIndex = 0; columnLevelPermissionRulesIndex < columnLevelPermissionRulesJsonList.GetLength(); ++columnLevelPermissionRulesIndex)
   {
     columnLevelPermissionRulesJsonList[columnLevelPermissionRulesIndex].AsObject(m_columnLevelPermissionRules[columnLevelPermissionRulesIndex].Jsonize());
   }
   payload.WithArray("ColumnLevelPermissionRules", std::move(columnLevelPermissionRulesJsonList));

  }

  if(m_dataSetUsageConfigurationHasBeenSet)
  {
   payload.WithObject("DataSetUsageConfiguration", m_dataSetUsageConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
