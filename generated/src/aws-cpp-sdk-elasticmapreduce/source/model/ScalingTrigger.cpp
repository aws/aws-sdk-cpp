/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ScalingTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ScalingTrigger::ScalingTrigger() : 
    m_cloudWatchAlarmDefinitionHasBeenSet(false)
{
}

ScalingTrigger::ScalingTrigger(JsonView jsonValue) : 
    m_cloudWatchAlarmDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingTrigger& ScalingTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchAlarmDefinition"))
  {
    m_cloudWatchAlarmDefinition = jsonValue.GetObject("CloudWatchAlarmDefinition");

    m_cloudWatchAlarmDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchAlarmDefinitionHasBeenSet)
  {
   payload.WithObject("CloudWatchAlarmDefinition", m_cloudWatchAlarmDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
