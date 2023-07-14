/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectionRequest::UpdateConnectionRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_connectedLinkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  if(m_connectedLinkIdHasBeenSet)
  {
   payload.WithString("ConnectedLinkId", m_connectedLinkId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




