/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DeleteLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLinkRequest::DeleteLinkRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_linkIdHasBeenSet(false)
{
}

Aws::String DeleteLinkRequest::SerializePayload() const
{
  return {};
}




