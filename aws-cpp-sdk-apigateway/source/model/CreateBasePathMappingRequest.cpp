/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}



