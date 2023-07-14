/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AssociateElasticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateElasticIpRequest::AssociateElasticIpRequest() : 
    m_elasticIpHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String AssociateElasticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateElasticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.AssociateElasticIp"));
  return headers;

}




