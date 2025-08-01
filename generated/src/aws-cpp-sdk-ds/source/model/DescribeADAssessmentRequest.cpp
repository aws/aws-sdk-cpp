/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeADAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeADAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("AssessmentId", m_assessmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeADAssessmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeADAssessment"));
  return headers;

}




