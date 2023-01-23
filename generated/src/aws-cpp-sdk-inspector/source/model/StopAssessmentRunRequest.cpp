/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/StopAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopAssessmentRunRequest::StopAssessmentRunRequest() : 
    m_assessmentRunArnHasBeenSet(false),
    m_stopAction(StopAction::NOT_SET),
    m_stopActionHasBeenSet(false)
{
}

Aws::String StopAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  if(m_stopActionHasBeenSet)
  {
   payload.WithString("stopAction", StopActionMapper::GetNameForStopAction(m_stopAction));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.StopAssessmentRun"));
  return headers;

}




