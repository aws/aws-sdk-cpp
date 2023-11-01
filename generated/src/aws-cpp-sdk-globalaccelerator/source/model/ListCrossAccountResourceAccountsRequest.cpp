/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCrossAccountResourceAccountsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCrossAccountResourceAccountsRequest::ListCrossAccountResourceAccountsRequest()
{
}

Aws::String ListCrossAccountResourceAccountsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection ListCrossAccountResourceAccountsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.ListCrossAccountResourceAccounts"));
  return headers;

}




