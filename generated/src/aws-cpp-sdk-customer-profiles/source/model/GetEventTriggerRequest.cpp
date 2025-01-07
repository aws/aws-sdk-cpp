﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetEventTriggerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEventTriggerRequest::GetEventTriggerRequest() : 
    m_domainNameHasBeenSet(false),
    m_eventTriggerNameHasBeenSet(false)
{
}

Aws::String GetEventTriggerRequest::SerializePayload() const
{
  return {};
}




