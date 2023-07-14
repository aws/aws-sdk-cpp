/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAppMonitorRequest::GetAppMonitorRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetAppMonitorRequest::SerializePayload() const
{
  return {};
}




