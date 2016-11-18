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
#include <aws/logs/model/MetricTransformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

MetricTransformation::MetricTransformation() : 
    m_metricNameHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false)
{
}

MetricTransformation::MetricTransformation(const JsonValue& jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

MetricTransformation& MetricTransformation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("metricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricValue"))
  {
    m_metricValue = jsonValue.GetString("metricValue");

    m_metricValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetDouble("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("metricNamespace", m_metricNamespace);

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithString("metricValue", m_metricValue);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithDouble("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws