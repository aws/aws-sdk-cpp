/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/DetectPHIRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectPHIRequest::DetectPHIRequest() : 
    m_textHasBeenSet(false)
{
}

Aws::String DetectPHIRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectPHIRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComprehendMedical_20181030.DetectPHI"));
  return headers;

}




