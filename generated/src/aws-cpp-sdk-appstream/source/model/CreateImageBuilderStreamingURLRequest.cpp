/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateImageBuilderStreamingURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateImageBuilderStreamingURLRequest::CreateImageBuilderStreamingURLRequest() : 
    m_nameHasBeenSet(false),
    m_validity(0),
    m_validityHasBeenSet(false)
{
}

Aws::String CreateImageBuilderStreamingURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithInt64("Validity", m_validity);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateImageBuilderStreamingURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateImageBuilderStreamingURL"));
  return headers;

}




