/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CreateClusterV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterV2Request::CreateClusterV2Request() : 
    m_clusterNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_serverlessHasBeenSet(false)
{
}

Aws::String CreateClusterV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_provisionedHasBeenSet)
  {
   payload.WithObject("provisioned", m_provisioned.Jsonize());

  }

  if(m_serverlessHasBeenSet)
  {
   payload.WithObject("serverless", m_serverless.Jsonize());

  }

  return payload.View().WriteReadable();
}




