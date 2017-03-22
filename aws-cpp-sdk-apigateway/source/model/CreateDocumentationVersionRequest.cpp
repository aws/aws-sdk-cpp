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
#include <aws/apigateway/model/CreateDocumentationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDocumentationVersionRequest::CreateDocumentationVersionRequest() : 
    m_restApiIdHasBeenSet(false),
    m_documentationVersionHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateDocumentationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentationVersionHasBeenSet)
  {
   payload.WithString("documentationVersion", m_documentationVersion);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.WriteReadable();
}




