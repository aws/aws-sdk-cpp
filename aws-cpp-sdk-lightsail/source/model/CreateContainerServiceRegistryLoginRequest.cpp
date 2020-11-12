/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateContainerServiceRegistryLoginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContainerServiceRegistryLoginRequest::CreateContainerServiceRegistryLoginRequest()
{
}

Aws::String CreateContainerServiceRegistryLoginRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection CreateContainerServiceRegistryLoginRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateContainerServiceRegistryLogin"));
  return headers;

}




