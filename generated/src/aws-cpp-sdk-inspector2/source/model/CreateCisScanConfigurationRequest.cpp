/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CreateCisScanConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCisScanConfigurationRequest::CreateCisScanConfigurationRequest() : 
    m_scanNameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_securityLevel(CisSecurityLevel::NOT_SET),
    m_securityLevelHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Aws::String CreateCisScanConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_securityLevelHasBeenSet)
  {
   payload.WithString("securityLevel", CisSecurityLevelMapper::GetNameForCisSecurityLevel(m_securityLevel));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_targetsHasBeenSet)
  {
   payload.WithObject("targets", m_targets.Jsonize());

  }

  return payload.View().WriteReadable();
}




