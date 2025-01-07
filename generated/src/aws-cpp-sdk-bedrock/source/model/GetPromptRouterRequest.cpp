﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetPromptRouterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPromptRouterRequest::GetPromptRouterRequest() : 
    m_promptRouterArnHasBeenSet(false)
{
}

Aws::String GetPromptRouterRequest::SerializePayload() const
{
  return {};
}




