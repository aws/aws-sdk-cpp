/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PutAlarmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAlarmRequest::PutAlarmRequest() : 
    m_alarmNameHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_monitoredResourceNameHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_datapointsToAlarm(0),
    m_datapointsToAlarmHasBeenSet(false),
    m_treatMissingData(TreatMissingData::NOT_SET),
    m_treatMissingDataHasBeenSet(false),
    m_contactProtocolsHasBeenSet(false),
    m_notificationTriggersHasBeenSet(false),
    m_notificationEnabled(false),
    m_notificationEnabledHasBeenSet(false)
{
}

Aws::String PutAlarmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("alarmName", m_alarmName);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", MetricNameMapper::GetNameForMetricName(m_metricName));
  }

  if(m_monitoredResourceNameHasBeenSet)
  {
   payload.WithString("monitoredResourceName", m_monitoredResourceName);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("evaluationPeriods", m_evaluationPeriods);

  }

  if(m_datapointsToAlarmHasBeenSet)
  {
   payload.WithInteger("datapointsToAlarm", m_datapointsToAlarm);

  }

  if(m_treatMissingDataHasBeenSet)
  {
   payload.WithString("treatMissingData", TreatMissingDataMapper::GetNameForTreatMissingData(m_treatMissingData));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAlarmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.PutAlarm"));
  return headers;

}




