/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DeleteInstanceProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceProfileRequest::DeleteInstanceProfileRequest() : 
    m_instanceProfileIdentifierHasBeenSet(false)
{
}

Aws::String DeleteInstanceProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceProfileIdentifierHasBeenSet)
  {
   payload.WithString("InstanceProfileIdentifier", m_instanceProfileIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInstanceProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DeleteInstanceProfile"));
  return headers;

}




