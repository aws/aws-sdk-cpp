/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MetricTransformation::MetricTransformation()
{
}

MetricTransformation::MetricTransformation(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

MetricTransformation& MetricTransformation::operator =(const JsonValue& jsonValue)
{
  m_metricName = jsonValue.GetString("metricName");

  m_metricNamespace = jsonValue.GetString("metricNamespace");

  m_metricValue = jsonValue.GetString("metricValue");

  return *this;
}

JsonValue MetricTransformation::Jsonize() const
{
  JsonValue payload;

  payload.WithString("metricName", m_metricName);

  payload.WithString("metricNamespace", m_metricNamespace);

  payload.WithString("metricValue", m_metricValue);

  return std::move(payload);
}