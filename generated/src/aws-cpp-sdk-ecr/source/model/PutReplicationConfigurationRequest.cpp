/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/PutReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutReplicationConfigurationRequest::PutReplicationConfigurationRequest() : 
    m_replicationConfigurationHasBeenSet(false)
{
}

Aws::String PutReplicationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationConfigurationHasBeenSet)
  {
   payload.WithObject("replicationConfiguration", m_replicationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutReplicationConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.PutReplicationConfiguration"));
  return headers;

}




