/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeregisterElasticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterElasticIpRequest::DeregisterElasticIpRequest() : 
    m_elasticIpHasBeenSet(false)
{
}

Aws::String DeregisterElasticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_elasticIpHasBeenSet)
  {
   payload.WithString("ElasticIp", m_elasticIp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterElasticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeregisterElasticIp"));
  return headers;

}




