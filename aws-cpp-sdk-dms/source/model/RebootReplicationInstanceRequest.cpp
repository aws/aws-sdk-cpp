/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RebootReplicationInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebootReplicationInstanceRequest::RebootReplicationInstanceRequest() : 
    m_replicationInstanceArnHasBeenSet(false),
    m_forceFailover(false),
    m_forceFailoverHasBeenSet(false)
{
}

Aws::String RebootReplicationInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_forceFailoverHasBeenSet)
  {
   payload.WithBool("ForceFailover", m_forceFailover);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebootReplicationInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.RebootReplicationInstance"));
  return headers;

}




