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

#include <aws/ssm/model/MaintenanceWindowIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowIdentity::MaintenanceWindowIdentity() : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false)
{
}

MaintenanceWindowIdentity::MaintenanceWindowIdentity(const JsonValue& jsonValue) : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowIdentity& MaintenanceWindowIdentity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

    m_windowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cutoff"))
  {
    m_cutoff = jsonValue.GetInteger("Cutoff");

    m_cutoffHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_cutoffHasBeenSet)
  {
   payload.WithInteger("Cutoff", m_cutoff);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws