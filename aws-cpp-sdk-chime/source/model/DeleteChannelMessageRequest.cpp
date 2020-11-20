/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteChannelMessageRequest::DeleteChannelMessageRequest() : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

Aws::String DeleteChannelMessageRequest::SerializePayload() const
{
  return {};
}




