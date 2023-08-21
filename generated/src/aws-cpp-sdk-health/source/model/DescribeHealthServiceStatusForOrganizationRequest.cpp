/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeHealthServiceStatusForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeHealthServiceStatusForOrganizationRequest::DescribeHealthServiceStatusForOrganizationRequest()
{
}

Aws::String DescribeHealthServiceStatusForOrganizationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeHealthServiceStatusForOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeHealthServiceStatusForOrganization"));
  return headers;

}




