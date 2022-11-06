/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardPermissionsRequest::UpdateDashboardPermissionsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_grantPermissionsHasBeenSet(false),
    m_revokePermissionsHasBeenSet(false),
    m_grantLinkPermissionsHasBeenSet(false),
    m_revokeLinkPermissionsHasBeenSet(false)
{
}

Aws::String UpdateDashboardPermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantPermissionsJsonList(m_grantPermissions.size());
   for(unsigned grantPermissionsIndex = 0; grantPermissionsIndex < grantPermissionsJsonList.GetLength(); ++grantPermissionsIndex)
   {
     grantPermissionsJsonList[grantPermissionsIndex].AsObject(m_grantPermissions[grantPermissionsIndex].Jsonize());
   }
   payload.WithArray("GrantPermissions", std::move(grantPermissionsJsonList));

  }

  if(m_revokePermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revokePermissionsJsonList(m_revokePermissions.size());
   for(unsigned revokePermissionsIndex = 0; revokePermissionsIndex < revokePermissionsJsonList.GetLength(); ++revokePermissionsIndex)
   {
     revokePermissionsJsonList[revokePermissionsIndex].AsObject(m_revokePermissions[revokePermissionsIndex].Jsonize());
   }
   payload.WithArray("RevokePermissions", std::move(revokePermissionsJsonList));

  }

  if(m_grantLinkPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantLinkPermissionsJsonList(m_grantLinkPermissions.size());
   for(unsigned grantLinkPermissionsIndex = 0; grantLinkPermissionsIndex < grantLinkPermissionsJsonList.GetLength(); ++grantLinkPermissionsIndex)
   {
     grantLinkPermissionsJsonList[grantLinkPermissionsIndex].AsObject(m_grantLinkPermissions[grantLinkPermissionsIndex].Jsonize());
   }
   payload.WithArray("GrantLinkPermissions", std::move(grantLinkPermissionsJsonList));

  }

  if(m_revokeLinkPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revokeLinkPermissionsJsonList(m_revokeLinkPermissions.size());
   for(unsigned revokeLinkPermissionsIndex = 0; revokeLinkPermissionsIndex < revokeLinkPermissionsJsonList.GetLength(); ++revokeLinkPermissionsIndex)
   {
     revokeLinkPermissionsJsonList[revokeLinkPermissionsIndex].AsObject(m_revokeLinkPermissions[revokeLinkPermissionsIndex].Jsonize());
   }
   payload.WithArray("RevokeLinkPermissions", std::move(revokeLinkPermissionsJsonList));

  }

  return payload.View().WriteReadable();
}




