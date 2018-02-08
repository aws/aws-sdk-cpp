/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RebootReplicationInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.RebootReplicationInstance"));
  return headers;

}




