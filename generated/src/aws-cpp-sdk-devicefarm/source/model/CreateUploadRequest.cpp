/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/CreateUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUploadRequest::CreateUploadRequest() : 
    m_projectArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(UploadType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

Aws::String CreateUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UploadTypeMapper::GetNameForUploadType(m_type));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateUpload"));
  return headers;

}




