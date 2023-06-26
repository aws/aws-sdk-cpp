/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateBasePathMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBasePathMappingRequest::CreateBasePathMappingRequest() : 
    m_domainNameHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_restApiIdHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

Aws::String CreateBasePathMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_basePathHasBeenSet)
  {
   payload.WithString("basePath", m_basePath);

  }

  if(m_restApiIdHasBeenSet)
  {
   payload.WithString("restApiId", m_restApiId);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  return payload.View().WriteReadable();
}




