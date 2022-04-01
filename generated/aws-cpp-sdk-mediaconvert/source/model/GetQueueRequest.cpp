﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/GetQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueueRequest::GetQueueRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetQueueRequest::SerializePayload() const
{
  return {};
}




