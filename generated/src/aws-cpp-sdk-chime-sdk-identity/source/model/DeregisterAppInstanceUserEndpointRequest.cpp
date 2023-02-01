/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/DeregisterAppInstanceUserEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterAppInstanceUserEndpointRequest::DeregisterAppInstanceUserEndpointRequest() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_endpointIdHasBeenSet(false)
{
}

Aws::String DeregisterAppInstanceUserEndpointRequest::SerializePayload() const
{
  return {};
}




