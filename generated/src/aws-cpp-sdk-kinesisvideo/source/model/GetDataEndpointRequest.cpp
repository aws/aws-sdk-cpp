/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/GetDataEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataEndpointRequest::GetDataEndpointRequest() : 
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_aPIName(APIName::NOT_SET),
    m_aPINameHasBeenSet(false)
{
}

Aws::String GetDataEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_aPINameHasBeenSet)
  {
   payload.WithString("APIName", APINameMapper::GetNameForAPIName(m_aPIName));
  }

  return payload.View().WriteReadable();
}




