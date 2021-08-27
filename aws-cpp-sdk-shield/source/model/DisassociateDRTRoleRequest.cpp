/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DisassociateDRTRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateDRTRoleRequest::DisassociateDRTRoleRequest()
{
}

Aws::String DisassociateDRTRoleRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DisassociateDRTRoleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DisassociateDRTRole"));
  return headers;

}




