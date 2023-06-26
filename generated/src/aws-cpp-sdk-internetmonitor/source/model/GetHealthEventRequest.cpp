/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetHealthEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetHealthEventRequest::GetHealthEventRequest() : 
    m_monitorNameHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

Aws::String GetHealthEventRequest::SerializePayload() const
{
  return {};
}




