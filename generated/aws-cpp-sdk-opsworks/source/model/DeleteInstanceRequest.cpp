/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeleteInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceRequest::DeleteInstanceRequest() : 
    m_instanceIdHasBeenSet(false),
    m_deleteElasticIp(false),
    m_deleteElasticIpHasBeenSet(false),
    m_deleteVolumes(false),
    m_deleteVolumesHasBeenSet(false)
{
}

Aws::String DeleteInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_deleteElasticIpHasBeenSet)
  {
   payload.WithBool("DeleteElasticIp", m_deleteElasticIp);

  }

  if(m_deleteVolumesHasBeenSet)
  {
   payload.WithBool("DeleteVolumes", m_deleteVolumes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeleteInstance"));
  return headers;

}




