/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/MetricGoal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

MetricGoal::MetricGoal() : 
    m_desiredChange(ChangeDirectionEnum::NOT_SET),
    m_desiredChangeHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false)
{
}

MetricGoal::MetricGoal(JsonView jsonValue) : 
    m_desiredChange(ChangeDirectionEnum::NOT_SET),
    m_desiredChangeHasBeenSet(false),
    m_metricDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

MetricGoal& MetricGoal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("desiredChange"))
  {
    m_desiredChange = ChangeDirectionEnumMapper::GetChangeDirectionEnumForName(jsonValue.GetString("desiredChange"));

    m_desiredChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricDefinition"))
  {
    m_metricDefinition = jsonValue.GetObject("metricDefinition");

    m_metricDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricGoal::Jsonize() const
{
  JsonValue payload;

  if(m_desiredChangeHasBeenSet)
  {
   payload.WithString("desiredChange", ChangeDirectionEnumMapper::GetNameForChangeDirectionEnum(m_desiredChange));
  }

  if(m_metricDefinitionHasBeenSet)
  {
   payload.WithObject("metricDefinition", m_metricDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
