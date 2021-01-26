/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/UpdateShardCountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateShardCountRequest::UpdateShardCountRequest() : 
    m_streamNameHasBeenSet(false),
    m_targetShardCount(0),
    m_targetShardCountHasBeenSet(false),
    m_scalingType(ScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false)
{
}

Aws::String UpdateShardCountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_targetShardCountHasBeenSet)
  {
   payload.WithInteger("TargetShardCount", m_targetShardCount);

  }

  if(m_scalingTypeHasBeenSet)
  {
   payload.WithString("ScalingType", ScalingTypeMapper::GetNameForScalingType(m_scalingType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateShardCountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.UpdateShardCount"));
  return headers;

}




