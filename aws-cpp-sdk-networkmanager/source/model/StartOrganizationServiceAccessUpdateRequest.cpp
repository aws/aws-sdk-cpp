/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/StartOrganizationServiceAccessUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartOrganizationServiceAccessUpdateRequest::StartOrganizationServiceAccessUpdateRequest() : 
    m_actionHasBeenSet(false)
{
}

Aws::String StartOrganizationServiceAccessUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  return payload.View().WriteReadable();
}




