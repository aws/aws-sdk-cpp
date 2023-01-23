/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeleteResourcesByExternalIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourcesByExternalIdRequest::DeleteResourcesByExternalIdRequest() : 
    m_externalIdHasBeenSet(false)
{
}

Aws::String DeleteResourcesByExternalIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteResourcesByExternalIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.DeleteResourcesByExternalId"));
  return headers;

}




