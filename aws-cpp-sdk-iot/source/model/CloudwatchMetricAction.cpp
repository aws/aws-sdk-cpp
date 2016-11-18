/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/CloudwatchMetricAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CloudwatchMetricAction::CloudwatchMetricAction() : 
    m_roleArnHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_metricUnitHasBeenSet(false),
    m_metricTimestampHasBeenSet(false)
{
}

CloudwatchMetricAction::CloudwatchMetricAction(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_metricUnitHasBeenSet(false),
    m_metricTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

CloudwatchMetricAction& CloudwatchMetricAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("metricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricValue"))
  {
    m_metricValue = jsonValue.GetString("metricValue");

    m_metricValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricUnit"))
  {
    m_metricUnit = jsonValue.GetString("metricUnit");

    m_metricUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricTimestamp"))
  {
    m_metricTimestamp = jsonValue.GetString("metricTimestamp");

    m_metricTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudwatchMetricAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("metricNamespace", m_metricNamespace);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithString("metricValue", m_metricValue);

  }

  if(m_metricUnitHasBeenSet)
  {
   payload.WithString("metricUnit", m_metricUnit);

  }

  if(m_metricTimestampHasBeenSet)
  {
   payload.WithString("metricTimestamp", m_metricTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws