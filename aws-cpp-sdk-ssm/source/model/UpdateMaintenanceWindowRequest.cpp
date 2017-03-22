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
#include <aws/ssm/model/UpdateMaintenanceWindowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMaintenanceWindowRequest::UpdateMaintenanceWindowRequest() : 
    m_windowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_cutoff(0),
    m_cutoffHasBeenSet(false),
    m_allowUnassociatedTargets(false),
    m_allowUnassociatedTargetsHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String UpdateMaintenanceWindowRequest::SerializePayload() const
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

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_cutoffHasBeenSet)
  {
   payload.WithInteger("Cutoff", m_cutoff);

  }

  if(m_allowUnassociatedTargetsHasBeenSet)
  {
   payload.WithBool("AllowUnassociatedTargets", m_allowUnassociatedTargets);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMaintenanceWindowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UpdateMaintenanceWindow"));
  return headers;

}




