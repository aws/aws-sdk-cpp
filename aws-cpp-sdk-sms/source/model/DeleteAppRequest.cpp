/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/DeleteAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppRequest::DeleteAppRequest() : 
    m_appIdHasBeenSet(false),
    m_forceStopAppReplication(false),
    m_forceStopAppReplicationHasBeenSet(false),
    m_forceTerminateApp(false),
    m_forceTerminateAppHasBeenSet(false)
{
}

Aws::String DeleteAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_forceStopAppReplicationHasBeenSet)
  {
   payload.WithBool("forceStopAppReplication", m_forceStopAppReplication);

  }

  if(m_forceTerminateAppHasBeenSet)
  {
   payload.WithBool("forceTerminateApp", m_forceTerminateApp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.DeleteApp"));
  return headers;

}




