/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/DescribeWorkspaceAuthenticationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorkspaceAuthenticationRequest::DescribeWorkspaceAuthenticationRequest() : 
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DescribeWorkspaceAuthenticationRequest::SerializePayload() const
{
  return {};
}




