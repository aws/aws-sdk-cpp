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

  return payload.WriteReadable();
}




