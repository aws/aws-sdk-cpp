/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateRequestValidatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRequestValidatorRequest::CreateRequestValidatorRequest() : 
    m_restApiIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_validateRequestBody(false),
    m_validateRequestBodyHasBeenSet(false),
    m_validateRequestParameters(false),
    m_validateRequestParametersHasBeenSet(false)
{
}

Aws::String CreateRequestValidatorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_validateRequestBodyHasBeenSet)
  {
   payload.WithBool("validateRequestBody", m_validateRequestBody);

  }

  if(m_validateRequestParametersHasBeenSet)
  {
   payload.WithBool("validateRequestParameters", m_validateRequestParameters);

  }

  return payload.View().WriteReadable();
}




