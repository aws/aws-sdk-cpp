/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/DescribeRuleGroupsNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRuleGroupsNamespaceRequest::DescribeRuleGroupsNamespaceRequest() : 
    m_nameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DescribeRuleGroupsNamespaceRequest::SerializePayload() const
{
  return {};
}




