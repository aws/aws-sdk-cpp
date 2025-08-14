/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateGlueIdentityCenterConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGlueIdentityCenterConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("Scopes", std::move(scopesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGlueIdentityCenterConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateGlueIdentityCenterConfiguration"));
  return headers;

}




