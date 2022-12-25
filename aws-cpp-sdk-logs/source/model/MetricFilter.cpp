/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/MetricFilter.h>
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

MetricFilter::MetricFilter() : 
    m_filterNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_metricTransformationsHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
}

MetricFilter::MetricFilter(JsonView jsonValue) : 
    m_filterNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_metricTransformationsHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

MetricFilter& MetricFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterName"))
  {
    m_filterName = jsonValue.GetString("filterName");

    m_filterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");

    m_filterPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricTransformations"))
  {
    Aws::Utils::Array<JsonView> metricTransformationsJsonList = jsonValue.GetArray("metricTransformations");
    for(unsigned metricTransformationsIndex = 0; metricTransformationsIndex < metricTransformationsJsonList.GetLength(); ++metricTransformationsIndex)
    {
      m_metricTransformations.push_back(metricTransformationsJsonList[metricTransformationsIndex].AsObject());
    }
    m_metricTransformationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", m_filterName);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_metricTransformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricTransformationsJsonList(m_metricTransformations.size());
   for(unsigned metricTransformationsIndex = 0; metricTransformationsIndex < metricTransformationsJsonList.GetLength(); ++metricTransformationsIndex)
   {
     metricTransformationsJsonList[metricTransformationsIndex].AsObject(m_metricTransformations[metricTransformationsIndex].Jsonize());
   }
   payload.WithArray("metricTransformations", std::move(metricTransformationsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
