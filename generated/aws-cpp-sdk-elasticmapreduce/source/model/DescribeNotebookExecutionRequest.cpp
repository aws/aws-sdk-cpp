/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/DescribeNotebookExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeNotebookExecutionRequest::DescribeNotebookExecutionRequest() : 
    m_notebookExecutionIdHasBeenSet(false)
{
}

Aws::String DescribeNotebookExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookExecutionIdHasBeenSet)
  {
   payload.WithString("NotebookExecutionId", m_notebookExecutionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeNotebookExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.DescribeNotebookExecution"));
  return headers;

}




