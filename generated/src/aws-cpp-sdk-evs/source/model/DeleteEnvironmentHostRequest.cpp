/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/DeleteEnvironmentHostRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteEnvironmentHostRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEnvironmentHostRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.DeleteEnvironmentHost"));
  return headers;

}




