/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeTemplatePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTemplatePermissionsRequest::DescribeTemplatePermissionsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

Aws::String DescribeTemplatePermissionsRequest::SerializePayload() const
{
  return {};
}




