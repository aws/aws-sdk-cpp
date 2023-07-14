/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRoomRequest::GetRoomRequest() : 
    m_accountIdHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

Aws::String GetRoomRequest::SerializePayload() const
{
  return {};
}




