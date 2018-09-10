﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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




