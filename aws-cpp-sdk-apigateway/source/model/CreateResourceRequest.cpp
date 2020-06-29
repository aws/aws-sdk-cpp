/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceRequest::CreateResourceRequest() : 
    m_restApiIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_pathPartHasBeenSet(false)
{
}

Aws::String CreateResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pathPartHasBeenSet)
  {
   payload.WithString("pathPart", m_pathPart);

  }

  return payload.View().WriteReadable();
}




