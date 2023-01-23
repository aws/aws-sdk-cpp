/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDocumentationPartRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDocumentationPartRequest::CreateDocumentationPartRequest() : 
    m_restApiIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

Aws::String CreateDocumentationPartRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  return payload.View().WriteReadable();
}




