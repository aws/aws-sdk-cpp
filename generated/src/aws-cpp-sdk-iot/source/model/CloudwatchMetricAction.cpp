/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CloudwatchMetricAction::CloudwatchMetricAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_metricUnitHasBeenSet(false),
    m_metricTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

CloudwatchMetricAction& CloudwatchMetricAction::operator =(JsonView jsonValue)
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
