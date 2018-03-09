/*
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

#include <aws/lightsail/model/InstanceHealthSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InstanceHealthSummary::InstanceHealthSummary() : 
    m_instanceNameHasBeenSet(false),
    m_instanceHealth(InstanceHealthState::NOT_SET),
    m_instanceHealthHasBeenSet(false),
    m_instanceHealthReason(InstanceHealthReason::NOT_SET),
    m_instanceHealthReasonHasBeenSet(false)
{
}

InstanceHealthSummary::InstanceHealthSummary(const JsonValue& jsonValue) : 
    m_instanceNameHasBeenSet(false),
    m_instanceHealth(InstanceHealthState::NOT_SET),
    m_instanceHealthHasBeenSet(false),
    m_instanceHealthReason(InstanceHealthReason::NOT_SET),
    m_instanceHealthReasonHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceHealthSummary& InstanceHealthSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceHealth"))
  {
    m_instanceHealth = InstanceHealthStateMapper::GetInstanceHealthStateForName(jsonValue.GetString("instanceHealth"));

    m_instanceHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceHealthReason"))
  {
    m_instanceHealthReason = InstanceHealthReasonMapper::GetInstanceHealthReasonForName(jsonValue.GetString("instanceHealthReason"));

    m_instanceHealthReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceHealthSummary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_instanceHealthHasBeenSet)
  {
   payload.WithString("instanceHealth", InstanceHealthStateMapper::GetNameForInstanceHealthState(m_instanceHealth));
  }

  if(m_instanceHealthReasonHasBeenSet)
  {
   payload.WithString("instanceHealthReason", InstanceHealthReasonMapper::GetNameForInstanceHealthReason(m_instanceHealthReason));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
