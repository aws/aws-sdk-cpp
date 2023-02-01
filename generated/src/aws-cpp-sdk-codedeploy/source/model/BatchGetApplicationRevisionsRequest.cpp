/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetApplicationRevisionsRequest::BatchGetApplicationRevisionsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_revisionsHasBeenSet(false)
{
}

Aws::String BatchGetApplicationRevisionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_revisionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revisionsJsonList(m_revisions.size());
   for(unsigned revisionsIndex = 0; revisionsIndex < revisionsJsonList.GetLength(); ++revisionsIndex)
   {
     revisionsJsonList[revisionsIndex].AsObject(m_revisions[revisionsIndex].Jsonize());
   }
   payload.WithArray("revisions", std::move(revisionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetApplicationRevisionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetApplicationRevisions"));
  return headers;

}




