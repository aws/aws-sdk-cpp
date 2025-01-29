﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EndpointWithHostLabelOperationRequest::EndpointWithHostLabelOperationRequest() : 
    m_labelHasBeenSet(false)
{
}

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EndpointWithHostLabelOperationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.EndpointWithHostLabelOperation"));
  return headers;

}




