/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StopProjectVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopProjectVersionRequest::StopProjectVersionRequest() : 
    m_projectVersionArnHasBeenSet(false)
{
}

Aws::String StopProjectVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectVersionArnHasBeenSet)
  {
   payload.WithString("ProjectVersionArn", m_projectVersionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopProjectVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StopProjectVersion"));
  return headers;

}




