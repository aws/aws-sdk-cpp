/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeCrossAccountAccessRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCrossAccountAccessRoleRequest::DescribeCrossAccountAccessRoleRequest()
{
}

Aws::String DescribeCrossAccountAccessRoleRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeCrossAccountAccessRoleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeCrossAccountAccessRole"));
  return headers;

}




