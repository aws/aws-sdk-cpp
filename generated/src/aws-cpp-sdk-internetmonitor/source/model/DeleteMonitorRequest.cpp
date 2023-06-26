/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/DeleteMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMonitorRequest::DeleteMonitorRequest() : 
    m_monitorNameHasBeenSet(false)
{
}

Aws::String DeleteMonitorRequest::SerializePayload() const
{
  return {};
}




