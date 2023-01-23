/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/UpdatePipelineStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineStatusRequest::UpdatePipelineStatusRequest() : 
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdatePipelineStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload.View().WriteReadable();
}




