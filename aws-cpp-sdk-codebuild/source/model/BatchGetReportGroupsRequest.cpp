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

#include <aws/codebuild/model/BatchGetReportGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetReportGroupsRequest::BatchGetReportGroupsRequest() : 
    m_reportGroupArnsHasBeenSet(false)
{
}

Aws::String BatchGetReportGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportGroupArnsHasBeenSet)
  {
   Array<JsonValue> reportGroupArnsJsonList(m_reportGroupArns.size());
   for(unsigned reportGroupArnsIndex = 0; reportGroupArnsIndex < reportGroupArnsJsonList.GetLength(); ++reportGroupArnsIndex)
   {
     reportGroupArnsJsonList[reportGroupArnsIndex].AsString(m_reportGroupArns[reportGroupArnsIndex]);
   }
   payload.WithArray("reportGroupArns", std::move(reportGroupArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetReportGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.BatchGetReportGroups"));
  return headers;

}




