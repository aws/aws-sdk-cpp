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

#include <aws/application-insights/model/Observation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

Observation::Observation() : 
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_lineTimeHasBeenSet(false),
    m_logTextHasBeenSet(false),
    m_logFilter(LogFilter::NOT_SET),
    m_logFilterHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

Observation::Observation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_lineTimeHasBeenSet(false),
    m_logTextHasBeenSet(false),
    m_logFilter(LogFilter::NOT_SET),
    m_logFilterHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Observation& Observation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceARN"))
  {
    m_sourceARN = jsonValue.GetString("SourceARN");

    m_sourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroup"))
  {
    m_logGroup = jsonValue.GetString("LogGroup");

    m_logGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineTime"))
  {
    m_lineTime = jsonValue.GetDouble("LineTime");

    m_lineTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogText"))
  {
    m_logText = jsonValue.GetString("LogText");

    m_logTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFilter"))
  {
    m_logFilter = LogFilterMapper::GetLogFilterForName(jsonValue.GetString("LogFilter"));

    m_logFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("MetricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Observation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_sourceARNHasBeenSet)
  {
   payload.WithString("SourceARN", m_sourceARN);

  }

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("LogGroup", m_logGroup);

  }

  if(m_lineTimeHasBeenSet)
  {
   payload.WithDouble("LineTime", m_lineTime.SecondsWithMSPrecision());
  }

  if(m_logTextHasBeenSet)
  {
   payload.WithString("LogText", m_logText);

  }

  if(m_logFilterHasBeenSet)
  {
   payload.WithString("LogFilter", LogFilterMapper::GetNameForLogFilter(m_logFilter));
  }

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("MetricNamespace", m_metricNamespace);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
