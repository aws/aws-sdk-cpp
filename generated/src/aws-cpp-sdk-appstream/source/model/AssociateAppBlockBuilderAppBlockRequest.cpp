﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AssociateAppBlockBuilderAppBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateAppBlockBuilderAppBlockRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_appBlockBuilderNameHasBeenSet)
  {
   payload.WithString("AppBlockBuilderName", m_appBlockBuilderName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateAppBlockBuilderAppBlockRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.AssociateAppBlockBuilderAppBlock"));
  return headers;

}




