/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RedactRoomMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RedactRoomMessageRequest::RedactRoomMessageRequest() : 
    m_accountIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

Aws::String RedactRoomMessageRequest::SerializePayload() const
{
  return {};
}




