﻿/*
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
