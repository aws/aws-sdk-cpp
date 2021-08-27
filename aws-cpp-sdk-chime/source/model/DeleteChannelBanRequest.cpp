/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteChannelBanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteChannelBanRequest::DeleteChannelBanRequest() : 
    m_channelArnHasBeenSet(false),
    m_memberArnHasBeenSet(false)
{
}

Aws::String DeleteChannelBanRequest::SerializePayload() const
{
  return {};
}




