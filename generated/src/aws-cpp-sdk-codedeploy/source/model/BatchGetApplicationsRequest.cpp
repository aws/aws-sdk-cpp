/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetApplicationsRequest::BatchGetApplicationsRequest() : 
    m_applicationNamesHasBeenSet(false)
{
}

Aws::String BatchGetApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationNamesJsonList(m_applicationNames.size());
   for(unsigned applicationNamesIndex = 0; applicationNamesIndex < applicationNamesJsonList.GetLength(); ++applicationNamesIndex)
   {
     applicationNamesJsonList[applicationNamesIndex].AsString(m_applicationNames[applicationNamesIndex]);
   }
   payload.WithArray("applicationNames", std::move(applicationNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetApplicationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetApplications"));
  return headers;

}




