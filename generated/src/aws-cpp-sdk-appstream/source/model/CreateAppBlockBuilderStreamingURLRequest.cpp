﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateAppBlockBuilderStreamingURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAppBlockBuilderStreamingURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBlockBuilderNameHasBeenSet)
  {
   payload.WithString("AppBlockBuilderName", m_appBlockBuilderName);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithInt64("Validity", m_validity);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppBlockBuilderStreamingURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateAppBlockBuilderStreamingURL"));
  return headers;

}




