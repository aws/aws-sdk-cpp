/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreatePortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePortalRequest::CreatePortalRequest() : 
    m_portalNameHasBeenSet(false),
    m_portalDescriptionHasBeenSet(false),
    m_portalContactEmailHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_portalLogoImageFileHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_portalAuthMode(AuthMode::NOT_SET),
    m_portalAuthModeHasBeenSet(false)
{
}

Aws::String CreatePortalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portalNameHasBeenSet)
  {
   payload.WithString("portalName", m_portalName);

  }

  if(m_portalDescriptionHasBeenSet)
  {
   payload.WithString("portalDescription", m_portalDescription);

  }

  if(m_portalContactEmailHasBeenSet)
  {
   payload.WithString("portalContactEmail", m_portalContactEmail);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_portalLogoImageFileHasBeenSet)
  {
   payload.WithObject("portalLogoImageFile", m_portalLogoImageFile.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_portalAuthModeHasBeenSet)
  {
   payload.WithString("portalAuthMode", AuthModeMapper::GetNameForAuthMode(m_portalAuthMode));
  }

  return payload.View().WriteReadable();
}




