﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetProxySessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProxySessionRequest::GetProxySessionRequest() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_proxySessionIdHasBeenSet(false)
{
}

Aws::String GetProxySessionRequest::SerializePayload() const
{
  return {};
}




