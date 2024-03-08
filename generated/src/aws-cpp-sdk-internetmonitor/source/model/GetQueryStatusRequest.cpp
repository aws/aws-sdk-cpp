/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetQueryStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryStatusRequest::GetQueryStatusRequest() : 
    m_monitorNameHasBeenSet(false),
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetQueryStatusRequest::SerializePayload() const
{
  return {};
}




