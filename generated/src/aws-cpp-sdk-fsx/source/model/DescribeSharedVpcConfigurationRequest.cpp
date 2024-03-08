/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeSharedVpcConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSharedVpcConfigurationRequest::DescribeSharedVpcConfigurationRequest()
{
}

Aws::String DescribeSharedVpcConfigurationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeSharedVpcConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeSharedVpcConfiguration"));
  return headers;

}




