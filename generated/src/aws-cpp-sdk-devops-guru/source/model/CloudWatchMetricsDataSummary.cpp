/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudWatchMetricsDataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

CloudWatchMetricsDataSummary::CloudWatchMetricsDataSummary() : 
    m_timestampMetricValuePairListHasBeenSet(false),
    m_statusCode(CloudWatchMetricDataStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

CloudWatchMetricsDataSummary::CloudWatchMetricsDataSummary(JsonView jsonValue) : 
    m_timestampMetricValuePairListHasBeenSet(false),
    m_statusCode(CloudWatchMetricDataStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchMetricsDataSummary& CloudWatchMetricsDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestampMetricValuePairList"))
  {
    Aws::Utils::Array<JsonView> timestampMetricValuePairListJsonList = jsonValue.GetArray("TimestampMetricValuePairList");
    for(unsigned timestampMetricValuePairListIndex = 0; timestampMetricValuePairListIndex < timestampMetricValuePairListJsonList.GetLength(); ++timestampMetricValuePairListIndex)
    {
      m_timestampMetricValuePairList.push_back(timestampMetricValuePairListJsonList[timestampMetricValuePairListIndex].AsObject());
    }
    m_timestampMetricValuePairListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = CloudWatchMetricDataStatusCodeMapper::GetCloudWatchMetricDataStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchMetricsDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_timestampMetricValuePairListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampMetricValuePairListJsonList(m_timestampMetricValuePairList.size());
   for(unsigned timestampMetricValuePairListIndex = 0; timestampMetricValuePairListIndex < timestampMetricValuePairListJsonList.GetLength(); ++timestampMetricValuePairListIndex)
   {
     timestampMetricValuePairListJsonList[timestampMetricValuePairListIndex].AsObject(m_timestampMetricValuePairList[timestampMetricValuePairListIndex].Jsonize());
   }
   payload.WithArray("TimestampMetricValuePairList", std::move(timestampMetricValuePairListJsonList));

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", CloudWatchMetricDataStatusCodeMapper::GetNameForCloudWatchMetricDataStatusCode(m_statusCode));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
