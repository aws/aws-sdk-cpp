/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeIdentityPoolUsageRequest::DescribeIdentityPoolUsageRequest() : 
    m_identityPoolIdHasBeenSet(false)
{
}

Aws::String DescribeIdentityPoolUsageRequest::SerializePayload() const
{
  return {};
}




