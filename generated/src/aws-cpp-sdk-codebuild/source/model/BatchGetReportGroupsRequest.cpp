/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> reportGroupArnsJsonList(m_reportGroupArns.size());
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




