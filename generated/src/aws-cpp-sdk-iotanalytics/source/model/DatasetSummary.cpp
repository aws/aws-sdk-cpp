/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatasetSummary::DatasetSummary() : 
    m_datasetNameHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

DatasetSummary::DatasetSummary(JsonView jsonValue) : 
    m_datasetNameHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSummary& DatasetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetName"))
  {
    m_datasetName = jsonValue.GetString("datasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggers"))
  {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
    m_triggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("datasetName", m_datasetName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_triggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
