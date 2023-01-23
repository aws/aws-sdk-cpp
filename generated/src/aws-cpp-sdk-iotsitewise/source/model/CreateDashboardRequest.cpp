/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDashboardRequest::CreateDashboardRequest() : 
    m_projectIdHasBeenSet(false),
    m_dashboardNameHasBeenSet(false),
    m_dashboardDescriptionHasBeenSet(false),
    m_dashboardDefinitionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_dashboardNameHasBeenSet)
  {
   payload.WithString("dashboardName", m_dashboardName);

  }

  if(m_dashboardDescriptionHasBeenSet)
  {
   payload.WithString("dashboardDescription", m_dashboardDescription);

  }

  if(m_dashboardDefinitionHasBeenSet)
  {
   payload.WithString("dashboardDefinition", m_dashboardDefinition);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}




