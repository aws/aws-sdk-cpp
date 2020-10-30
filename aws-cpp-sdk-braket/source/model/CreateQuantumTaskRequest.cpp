/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CreateQuantumTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQuantumTaskRequest::CreateQuantumTaskRequest() : 
    m_actionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_deviceArnHasBeenSet(false),
    m_deviceParametersHasBeenSet(false),
    m_outputS3BucketHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_shots(0),
    m_shotsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateQuantumTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_deviceParametersHasBeenSet)
  {
   payload.WithString("deviceParameters", m_deviceParameters);

  }

  if(m_outputS3BucketHasBeenSet)
  {
   payload.WithString("outputS3Bucket", m_outputS3Bucket);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("outputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_shotsHasBeenSet)
  {
   payload.WithInt64("shots", m_shots);

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

  return payload.View().WriteReadable();
}




