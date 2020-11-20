/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteChannelModeratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteChannelModeratorRequest::DeleteChannelModeratorRequest() : 
    m_channelArnHasBeenSet(false),
    m_channelModeratorArnHasBeenSet(false)
{
}

Aws::String DeleteChannelModeratorRequest::SerializePayload() const
{
  return {};
}




