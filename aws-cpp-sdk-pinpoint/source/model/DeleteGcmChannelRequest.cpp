/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeleteGcmChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGcmChannelRequest::DeleteGcmChannelRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String DeleteGcmChannelRequest::SerializePayload() const
{
  return {};
}




