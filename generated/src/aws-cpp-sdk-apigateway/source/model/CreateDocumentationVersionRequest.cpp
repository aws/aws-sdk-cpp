/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}




