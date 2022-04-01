/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ListAvailableZonesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAvailableZonesRequest::ListAvailableZonesRequest()
{
}

Aws::String ListAvailableZonesRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection ListAvailableZonesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ListAvailableZones"));
  return headers;

}




