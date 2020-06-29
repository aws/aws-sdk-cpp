/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateComponentConfigurationRequest::UpdateComponentConfigurationRequest() : 
    m_resourceGroupNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_componentConfigurationHasBeenSet(false)
{
}

Aws::String UpdateComponentConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_monitorHasBeenSet)
  {
   payload.WithBool("Monitor", m_monitor);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  if(m_componentConfigurationHasBeenSet)
  {
   payload.WithString("ComponentConfiguration", m_componentConfiguration);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateComponentConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EC2WindowsBarleyService.UpdateComponentConfiguration"));
  return headers;

}




