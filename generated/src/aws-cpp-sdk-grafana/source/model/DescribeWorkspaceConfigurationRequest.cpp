/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceConfigurationRequest::DescribeWorkspaceConfigurationRequest() : 
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceConfigurationRequest::SerializePayload() const
{
  return {};
}




