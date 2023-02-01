/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/IsVpcPeeredRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IsVpcPeeredRequest::IsVpcPeeredRequest()
{
}

Aws::String IsVpcPeeredRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection IsVpcPeeredRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.IsVpcPeered"));
  return headers;

}




