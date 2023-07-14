/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/UpdateUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUploadRequest::UpdateUploadRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_editContent(false),
    m_editContentHasBeenSet(false)
{
}

Aws::String UpdateUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_editContentHasBeenSet)
  {
   payload.WithBool("editContent", m_editContent);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.UpdateUpload"));
  return headers;

}




