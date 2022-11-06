/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/Dataset.h>
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

Dataset::Dataset() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_contentDeliveryRulesHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_versioningConfigurationHasBeenSet(false),
    m_lateDataRulesHasBeenSet(false)
{
}

Dataset::Dataset(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_contentDeliveryRulesHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_versioningConfigurationHasBeenSet(false),
    m_lateDataRulesHasBeenSet(false)
{
  *this = jsonValue;
}

Dataset& Dataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("triggers"))
  {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
    m_triggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentDeliveryRules"))
  {
    Aws::Utils::Array<JsonView> contentDeliveryRulesJsonList = jsonValue.GetArray("contentDeliveryRules");
    for(unsigned contentDeliveryRulesIndex = 0; contentDeliveryRulesIndex < contentDeliveryRulesJsonList.GetLength(); ++contentDeliveryRulesIndex)
    {
      m_contentDeliveryRules.push_back(contentDeliveryRulesJsonList[contentDeliveryRulesIndex].AsObject());
    }
    m_contentDeliveryRulesHasBeenSet = true;
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

  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("retentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versioningConfiguration"))
  {
    m_versioningConfiguration = jsonValue.GetObject("versioningConfiguration");

    m_versioningConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lateDataRules"))
  {
    Aws::Utils::Array<JsonView> lateDataRulesJsonList = jsonValue.GetArray("lateDataRules");
    for(unsigned lateDataRulesIndex = 0; lateDataRulesIndex < lateDataRulesJsonList.GetLength(); ++lateDataRulesIndex)
    {
      m_lateDataRules.push_back(lateDataRulesJsonList[lateDataRulesIndex].AsObject());
    }
    m_lateDataRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue Dataset::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  if(m_triggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  if(m_contentDeliveryRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentDeliveryRulesJsonList(m_contentDeliveryRules.size());
   for(unsigned contentDeliveryRulesIndex = 0; contentDeliveryRulesIndex < contentDeliveryRulesJsonList.GetLength(); ++contentDeliveryRulesIndex)
   {
     contentDeliveryRulesJsonList[contentDeliveryRulesIndex].AsObject(m_contentDeliveryRules[contentDeliveryRulesIndex].Jsonize());
   }
   payload.WithArray("contentDeliveryRules", std::move(contentDeliveryRulesJsonList));

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

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_versioningConfigurationHasBeenSet)
  {
   payload.WithObject("versioningConfiguration", m_versioningConfiguration.Jsonize());

  }

  if(m_lateDataRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lateDataRulesJsonList(m_lateDataRules.size());
   for(unsigned lateDataRulesIndex = 0; lateDataRulesIndex < lateDataRulesJsonList.GetLength(); ++lateDataRulesIndex)
   {
     lateDataRulesJsonList[lateDataRulesIndex].AsObject(m_lateDataRules[lateDataRulesIndex].Jsonize());
   }
   payload.WithArray("lateDataRules", std::move(lateDataRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
