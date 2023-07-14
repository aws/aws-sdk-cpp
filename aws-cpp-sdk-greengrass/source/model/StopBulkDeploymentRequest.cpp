/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/StopBulkDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopBulkDeploymentRequest::StopBulkDeploymentRequest() : 
    m_bulkDeploymentIdHasBeenSet(false)
{
}

Aws::String StopBulkDeploymentRequest::SerializePayload() const
{
  return {};
}




