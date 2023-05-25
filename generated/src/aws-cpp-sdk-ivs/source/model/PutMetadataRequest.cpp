/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/PutMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMetadataRequest::PutMetadataRequest() : 
    m_channelArnHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

Aws::String PutMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("metadata", m_metadata);

  }

  return payload.View().WriteReadable();
}




