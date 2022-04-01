/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




