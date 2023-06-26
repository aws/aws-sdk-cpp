﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/RemoveNotificationChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveNotificationChannelRequest::RemoveNotificationChannelRequest() : 
    m_channelIdHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false)
{
}

Aws::String RemoveNotificationChannelRequest::SerializePayload() const
{
  return {};
}




