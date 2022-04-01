/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardRequest::UpdateDashboardRequest() : 
    m_dashboardIdHasBeenSet(false),
    m_dashboardNameHasBeenSet(false),
    m_dashboardDescriptionHasBeenSet(false),
    m_dashboardDefinitionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




