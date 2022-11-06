/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetReportsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetReportsRequest::BatchGetReportsRequest() : 
    m_reportArnsHasBeenSet(false)
{
}

Aws::String BatchGetReportsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reportArnsJsonList(m_reportArns.size());
   for(unsigned reportArnsIndex = 0; reportArnsIndex < reportArnsJsonList.GetLength(); ++reportArnsIndex)
   {
     reportArnsJsonList[reportArnsIndex].AsString(m_reportArns[reportArnsIndex]);
   }
   payload.WithArray("reportArns", std::move(reportArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetReportsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.BatchGetReports"));
  return headers;

}




