/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountSettingsRequest::DescribeAccountSettingsRequest() : 
    m_awsAccountIdHasBeenSet(false)
{
}

Aws::String DescribeAccountSettingsRequest::SerializePayload() const
{
  return {};
}




