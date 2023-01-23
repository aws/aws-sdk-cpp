/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateApiMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApiMappingRequest::UpdateApiMappingRequest() : 
    m_apiIdHasBeenSet(false),
    m_apiMappingIdHasBeenSet(false),
    m_apiMappingKeyHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

Aws::String UpdateApiMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_apiMappingKeyHasBeenSet)
  {
   payload.WithString("apiMappingKey", m_apiMappingKey);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  return payload.View().WriteReadable();
}




