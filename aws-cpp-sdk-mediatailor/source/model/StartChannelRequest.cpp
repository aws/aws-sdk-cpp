/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/StartChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartChannelRequest::StartChannelRequest() : 
    m_channelNameHasBeenSet(false)
{
}

Aws::String StartChannelRequest::SerializePayload() const
{
  return {};
}




