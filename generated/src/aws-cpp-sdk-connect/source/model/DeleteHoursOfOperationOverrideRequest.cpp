﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteHoursOfOperationOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHoursOfOperationOverrideRequest::DeleteHoursOfOperationOverrideRequest() : 
    m_instanceIdHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_hoursOfOperationOverrideIdHasBeenSet(false)
{
}

Aws::String DeleteHoursOfOperationOverrideRequest::SerializePayload() const
{
  return {};
}




