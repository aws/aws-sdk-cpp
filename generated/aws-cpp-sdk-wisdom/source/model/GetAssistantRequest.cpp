/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/GetAssistantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssistantRequest::GetAssistantRequest() : 
    m_assistantIdHasBeenSet(false)
{
}

Aws::String GetAssistantRequest::SerializePayload() const
{
  return {};
}




