/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DeleteStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStreamRequest::DeleteStreamRequest() : 
    m_streamARNHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String DeleteStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  return payload.View().WriteReadable();
}




