/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ExecuteCoreNetworkChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteCoreNetworkChangeSetRequest::ExecuteCoreNetworkChangeSetRequest() : 
    m_coreNetworkIdHasBeenSet(false),
    m_policyVersionId(0),
    m_policyVersionIdHasBeenSet(false)
{
}

Aws::String ExecuteCoreNetworkChangeSetRequest::SerializePayload() const
{
  return {};
}




