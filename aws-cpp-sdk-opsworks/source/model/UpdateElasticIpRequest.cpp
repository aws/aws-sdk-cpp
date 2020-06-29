/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UpdateElasticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateElasticIpRequest::UpdateElasticIpRequest() : 
    m_elasticIpHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateElasticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateElasticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateElasticIp"));
  return headers;

}




