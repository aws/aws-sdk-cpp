/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetPromptFileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPromptFileRequest::GetPromptFileRequest() : 
    m_instanceIdHasBeenSet(false),
    m_promptIdHasBeenSet(false)
{
}

Aws::String GetPromptFileRequest::SerializePayload() const
{
  return {};
}




