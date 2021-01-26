/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseMasterUserPasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRelationalDatabaseMasterUserPasswordRequest::GetRelationalDatabaseMasterUserPasswordRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_passwordVersion(RelationalDatabasePasswordVersion::NOT_SET),
    m_passwordVersionHasBeenSet(false)
{
}

Aws::String GetRelationalDatabaseMasterUserPasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_passwordVersionHasBeenSet)
  {
   payload.WithString("passwordVersion", RelationalDatabasePasswordVersionMapper::GetNameForRelationalDatabasePasswordVersion(m_passwordVersion));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRelationalDatabaseMasterUserPasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetRelationalDatabaseMasterUserPassword"));
  return headers;

}




