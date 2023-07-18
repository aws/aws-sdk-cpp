/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/DescribeAlertManagerDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAlertManagerDefinitionRequest::DescribeAlertManagerDefinitionRequest() : 
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DescribeAlertManagerDefinitionRequest::SerializePayload() const
{
  return {};
}




