/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelRequest::CreateModelRequest() : 
    m_restApiIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

Aws::String CreateModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  return payload.View().WriteReadable();
}




