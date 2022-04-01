/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppMonitorRequest::DeleteAppMonitorRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteAppMonitorRequest::SerializePayload() const
{
  return {};
}




