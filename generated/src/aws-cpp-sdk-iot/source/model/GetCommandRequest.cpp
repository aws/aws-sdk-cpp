﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCommandRequest::GetCommandRequest() : 
    m_commandIdHasBeenSet(false)
{
}

Aws::String GetCommandRequest::SerializePayload() const
{
  return {};
}




