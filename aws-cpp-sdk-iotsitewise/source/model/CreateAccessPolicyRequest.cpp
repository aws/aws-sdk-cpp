/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccessPolicyRequest::CreateAccessPolicyRequest() : 
    m_accessPolicyIdentityHasBeenSet(false),
    m_accessPolicyResourceHasBeenSet(false),
    m_accessPolicyPermission(Permission::NOT_SET),
    m_accessPolicyPermissionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessPolicyIdentityHasBeenSet)
  {
   payload.WithObject("accessPolicyIdentity", m_accessPolicyIdentity.Jsonize());

  }

  if(m_accessPolicyResourceHasBeenSet)
  {
   payload.WithObject("accessPolicyResource", m_accessPolicyResource.Jsonize());

  }

  if(m_accessPolicyPermissionHasBeenSet)
  {
   payload.WithString("accessPolicyPermission", PermissionMapper::GetNameForPermission(m_accessPolicyPermission));
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




