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
#include <aws/elasticmapreduce/model/SpotProvisioningSpecification.h>
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

SpotProvisioningSpecification::SpotProvisioningSpecification() : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false),
    m_timeoutAction(SpotProvisioningTimeoutAction::NOT_SET),
    m_timeoutActionHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false)
{
}

SpotProvisioningSpecification::SpotProvisioningSpecification(const JsonValue& jsonValue) : 
    m_timeoutDurationMinutes(0),
    m_timeoutDurationMinutesHasBeenSet(false),
    m_timeoutAction(SpotProvisioningTimeoutAction::NOT_SET),
    m_timeoutActionHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

SpotProvisioningSpecification& SpotProvisioningSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TimeoutDurationMinutes"))
  {
    m_timeoutDurationMinutes = jsonValue.GetInteger("TimeoutDurationMinutes");

    m_timeoutDurationMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutAction"))
  {
    m_timeoutAction = SpotProvisioningTimeoutActionMapper::GetSpotProvisioningTimeoutActionForName(jsonValue.GetString("TimeoutAction"));

    m_timeoutActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlockDurationMinutes"))
  {
    m_blockDurationMinutes = jsonValue.GetInteger("BlockDurationMinutes");

    m_blockDurationMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue SpotProvisioningSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutDurationMinutesHasBeenSet)
  {
   payload.WithInteger("TimeoutDurationMinutes", m_timeoutDurationMinutes);

  }

  if(m_timeoutActionHasBeenSet)
  {
   payload.WithString("TimeoutAction", SpotProvisioningTimeoutActionMapper::GetNameForSpotProvisioningTimeoutAction(m_timeoutAction));
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
   payload.WithInteger("BlockDurationMinutes", m_blockDurationMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws