/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/GetNetworkSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNetworkSettingsRequest::GetNetworkSettingsRequest() : 
    m_networkSettingsArnHasBeenSet(false)
{
}

Aws::String GetNetworkSettingsRequest::SerializePayload() const
{
  return {};
}




