/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JDBCConnectorOptions.h>
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

JDBCConnectorOptions::JDBCConnectorOptions() : 
    m_filterPredicateHasBeenSet(false),
    m_partitionColumnHasBeenSet(false),
    m_lowerBound(0),
    m_lowerBoundHasBeenSet(false),
    m_upperBound(0),
    m_upperBoundHasBeenSet(false),
    m_numPartitions(0),
    m_numPartitionsHasBeenSet(false),
    m_jobBookmarkKeysHasBeenSet(false),
    m_jobBookmarkKeysSortOrderHasBeenSet(false),
    m_dataTypeMappingHasBeenSet(false)
{
}

JDBCConnectorOptions::JDBCConnectorOptions(JsonView jsonValue) : 
    m_filterPredicateHasBeenSet(false),
    m_partitionColumnHasBeenSet(false),
    m_lowerBound(0),
    m_lowerBoundHasBeenSet(false),
    m_upperBound(0),
    m_upperBoundHasBeenSet(false),
    m_numPartitions(0),
    m_numPartitionsHasBeenSet(false),
    m_jobBookmarkKeysHasBeenSet(false),
    m_jobBookmarkKeysSortOrderHasBeenSet(false),
    m_dataTypeMappingHasBeenSet(false)
{
  *this = jsonValue;
}

JDBCConnectorOptions& JDBCConnectorOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterPredicate"))
  {
    m_filterPredicate = jsonValue.GetString("FilterPredicate");

    m_filterPredicateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionColumn"))
  {
    m_partitionColumn = jsonValue.GetString("PartitionColumn");

    m_partitionColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LowerBound"))
  {
    m_lowerBound = jsonValue.GetInt64("LowerBound");

    m_lowerBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpperBound"))
  {
    m_upperBound = jsonValue.GetInt64("UpperBound");

    m_upperBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumPartitions"))
  {
    m_numPartitions = jsonValue.GetInt64("NumPartitions");

    m_numPartitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobBookmarkKeys"))
  {
    Aws::Utils::Array<JsonView> jobBookmarkKeysJsonList = jsonValue.GetArray("JobBookmarkKeys");
    for(unsigned jobBookmarkKeysIndex = 0; jobBookmarkKeysIndex < jobBookmarkKeysJsonList.GetLength(); ++jobBookmarkKeysIndex)
    {
      m_jobBookmarkKeys.push_back(jobBookmarkKeysJsonList[jobBookmarkKeysIndex].AsString());
    }
    m_jobBookmarkKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobBookmarkKeysSortOrder"))
  {
    m_jobBookmarkKeysSortOrder = jsonValue.GetString("JobBookmarkKeysSortOrder");

    m_jobBookmarkKeysSortOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTypeMapping"))
  {
    Aws::Map<Aws::String, JsonView> dataTypeMappingJsonMap = jsonValue.GetObject("DataTypeMapping").GetAllObjects();
    for(auto& dataTypeMappingItem : dataTypeMappingJsonMap)
    {
      m_dataTypeMapping[JDBCDataTypeMapper::GetJDBCDataTypeForName(dataTypeMappingItem.first)] = GlueRecordTypeMapper::GetGlueRecordTypeForName(dataTypeMappingItem.second.AsString());
    }
    m_dataTypeMappingHasBeenSet = true;
  }

  return *this;
}

JsonValue JDBCConnectorOptions::Jsonize() const
{
  JsonValue payload;

  if(m_filterPredicateHasBeenSet)
  {
   payload.WithString("FilterPredicate", m_filterPredicate);

  }

  if(m_partitionColumnHasBeenSet)
  {
   payload.WithString("PartitionColumn", m_partitionColumn);

  }

  if(m_lowerBoundHasBeenSet)
  {
   payload.WithInt64("LowerBound", m_lowerBound);

  }

  if(m_upperBoundHasBeenSet)
  {
   payload.WithInt64("UpperBound", m_upperBound);

  }

  if(m_numPartitionsHasBeenSet)
  {
   payload.WithInt64("NumPartitions", m_numPartitions);

  }

  if(m_jobBookmarkKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobBookmarkKeysJsonList(m_jobBookmarkKeys.size());
   for(unsigned jobBookmarkKeysIndex = 0; jobBookmarkKeysIndex < jobBookmarkKeysJsonList.GetLength(); ++jobBookmarkKeysIndex)
   {
     jobBookmarkKeysJsonList[jobBookmarkKeysIndex].AsString(m_jobBookmarkKeys[jobBookmarkKeysIndex]);
   }
   payload.WithArray("JobBookmarkKeys", std::move(jobBookmarkKeysJsonList));

  }

  if(m_jobBookmarkKeysSortOrderHasBeenSet)
  {
   payload.WithString("JobBookmarkKeysSortOrder", m_jobBookmarkKeysSortOrder);

  }

  if(m_dataTypeMappingHasBeenSet)
  {
   JsonValue dataTypeMappingJsonMap;
   for(auto& dataTypeMappingItem : m_dataTypeMapping)
   {
     dataTypeMappingJsonMap.WithString(JDBCDataTypeMapper::GetNameForJDBCDataType(dataTypeMappingItem.first), GlueRecordTypeMapper::GetNameForGlueRecordType(dataTypeMappingItem.second));
   }
   payload.WithObject("DataTypeMapping", std::move(dataTypeMappingJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
