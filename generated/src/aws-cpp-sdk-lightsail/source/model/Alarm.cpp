/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Alarm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Alarm::Alarm() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_monitoredResourceInfoHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_treatMissingData(TreatMissingData::NOT_SET),
    m_treatMissingDataHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_state(AlarmState::NOT_SET),
    m_stateHasBeenSet(false),
    m_unit(MetricUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_contactProtocolsHasBeenSet(false),
    m_notificationTriggersHasBeenSet(false),
    m_notificationEnabled(false),
    m_notificationEnabledHasBeenSet(false)
{
}

Alarm::Alarm(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_monitoredResourceInfoHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_treatMissingData(TreatMissingData::NOT_SET),
    m_treatMissingDataHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_state(AlarmState::NOT_SET),
    m_stateHasBeenSet(false),
    m_unit(MetricUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_contactProtocolsHasBeenSet(false),
    m_notificationTriggersHasBeenSet(false),
    m_notificationEnabled(false),
    m_notificationEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

Alarm& Alarm::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monitoredResourceInfo"))
  {
    m_monitoredResourceInfo = jsonValue.GetObject("monitoredResourceInfo");

    m_monitoredResourceInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("comparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("evaluationPeriods");

    m_evaluationPeriodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("period"))
  {
    m_period = jsonValue.GetInteger("period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datapointsToAlarm"))
  {
    m_datapointsToAlarm = jsonValue.GetInteger("datapointsToAlarm");

    m_datapointsToAlarmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatMissingData"))
  {
    m_treatMissingData = TreatMissingDataMapper::GetTreatMissingDataForName(jsonValue.GetString("treatMissingData"));

    m_treatMissingDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = MetricStatisticMapper::GetMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = MetricNameMapper::GetMetricNameForName(jsonValue.GetString("metricName"));

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = AlarmStateMapper::GetAlarmStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = MetricUnitMapper::GetMetricUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contactProtocols"))
  {
    Aws::Utils::Array<JsonView> contactProtocolsJsonList = jsonValue.GetArray("contactProtocols");
    for(unsigned contactProtocolsIndex = 0; contactProtocolsIndex < contactProtocolsJsonList.GetLength(); ++contactProtocolsIndex)
    {
      m_contactProtocols.push_back(ContactProtocolMapper::GetContactProtocolForName(contactProtocolsJsonList[contactProtocolsIndex].AsString()));
    }
    m_contactProtocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationTriggers"))
  {
    Aws::Utils::Array<JsonView> notificationTriggersJsonList = jsonValue.GetArray("notificationTriggers");
    for(unsigned notificationTriggersIndex = 0; notificationTriggersIndex < notificationTriggersJsonList.GetLength(); ++notificationTriggersIndex)
    {
      m_notificationTriggers.push_back(AlarmStateMapper::GetAlarmStateForName(notificationTriggersJsonList[notificationTriggersIndex].AsString()));
    }
    m_notificationTriggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationEnabled"))
  {
    m_notificationEnabled = jsonValue.GetBool("notificationEnabled");

    m_notificationEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Alarm::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_monitoredResourceInfoHasBeenSet)
  {
   payload.WithObject("monitoredResourceInfo", m_monitoredResourceInfo.Jsonize());

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("evaluationPeriods", m_evaluationPeriods);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("period", m_period);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  if(m_datapointsToAlarmHasBeenSet)
  {
   payload.WithInteger("datapointsToAlarm", m_datapointsToAlarm);

  }

  if(m_treatMissingDataHasBeenSet)
  {
   payload.WithString("treatMissingData", TreatMissingDataMapper::GetNameForTreatMissingData(m_treatMissingData));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", MetricStatisticMapper::GetNameForMetricStatistic(m_statistic));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", MetricNameMapper::GetNameForMetricName(m_metricName));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AlarmStateMapper::GetNameForAlarmState(m_state));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  if(m_contactProtocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactProtocolsJsonList(m_contactProtocols.size());
   for(unsigned contactProtocolsIndex = 0; contactProtocolsIndex < contactProtocolsJsonList.GetLength(); ++contactProtocolsIndex)
   {
     contactProtocolsJsonList[contactProtocolsIndex].AsString(ContactProtocolMapper::GetNameForContactProtocol(m_contactProtocols[contactProtocolsIndex]));
   }
   payload.WithArray("contactProtocols", std::move(contactProtocolsJsonList));

  }

  if(m_notificationTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationTriggersJsonList(m_notificationTriggers.size());
   for(unsigned notificationTriggersIndex = 0; notificationTriggersIndex < notificationTriggersJsonList.GetLength(); ++notificationTriggersIndex)
   {
     notificationTriggersJsonList[notificationTriggersIndex].AsString(AlarmStateMapper::GetNameForAlarmState(m_notificationTriggers[notificationTriggersIndex]));
   }
   payload.WithArray("notificationTriggers", std::move(notificationTriggersJsonList));

  }

  if(m_notificationEnabledHasBeenSet)
  {
   payload.WithBool("notificationEnabled", m_notificationEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
