/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/UpdateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLinkRequest::UpdateLinkRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_providerHasBeenSet(false)
{
}

Aws::String UpdateLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithObject("Bandwidth", m_bandwidth.Jsonize());

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", m_provider);

  }

  return payload.View().WriteReadable();
}




