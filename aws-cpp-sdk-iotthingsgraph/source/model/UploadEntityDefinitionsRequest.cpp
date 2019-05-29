/*
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

#include <aws/iotthingsgraph/model/UploadEntityDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UploadEntityDefinitionsRequest::UploadEntityDefinitionsRequest() : 
    m_documentHasBeenSet(false),
    m_syncWithPublicNamespace(false),
    m_syncWithPublicNamespaceHasBeenSet(false),
    m_deprecateExistingEntities(false),
    m_deprecateExistingEntitiesHasBeenSet(false)
{
}

Aws::String UploadEntityDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  if(m_syncWithPublicNamespaceHasBeenSet)
  {
   payload.WithBool("syncWithPublicNamespace", m_syncWithPublicNamespace);

  }

  if(m_deprecateExistingEntitiesHasBeenSet)
  {
   payload.WithBool("deprecateExistingEntities", m_deprecateExistingEntities);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UploadEntityDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.UploadEntityDefinitions"));
  return headers;

}




