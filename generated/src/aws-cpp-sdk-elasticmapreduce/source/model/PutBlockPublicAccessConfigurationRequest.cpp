/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBlockPublicAccessConfigurationRequest::PutBlockPublicAccessConfigurationRequest() : 
    m_blockPublicAccessConfigurationHasBeenSet(false)
{
}

Aws::String PutBlockPublicAccessConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blockPublicAccessConfigurationHasBeenSet)
  {
   payload.WithObject("BlockPublicAccessConfiguration", m_blockPublicAccessConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutBlockPublicAccessConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.PutBlockPublicAccessConfiguration"));
  return headers;

}




