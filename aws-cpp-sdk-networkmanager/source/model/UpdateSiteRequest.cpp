/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSiteRequest::UpdateSiteRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_siteIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Aws::String UpdateSiteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  return payload.View().WriteReadable();
}




