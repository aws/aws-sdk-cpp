/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/RemoveFlowMediaStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveFlowMediaStreamRequest::RemoveFlowMediaStreamRequest() : 
    m_flowArnHasBeenSet(false),
    m_mediaStreamNameHasBeenSet(false)
{
}

Aws::String RemoveFlowMediaStreamRequest::SerializePayload() const
{
  return {};
}




