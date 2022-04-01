/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListInferenceExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInferenceExecutionsRequest::ListInferenceExecutionsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_inferenceSchedulerNameHasBeenSet(false),
    m_dataStartTimeAfterHasBeenSet(false),
    m_dataEndTimeBeforeHasBeenSet(false),
    m_status(InferenceExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListInferenceExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_inferenceSchedulerNameHasBeenSet)
  {
   payload.WithString("InferenceSchedulerName", m_inferenceSchedulerName);

  }

  if(m_dataStartTimeAfterHasBeenSet)
  {
   payload.WithDouble("DataStartTimeAfter", m_dataStartTimeAfter.SecondsWithMSPrecision());
  }

  if(m_dataEndTimeBeforeHasBeenSet)
  {
   payload.WithDouble("DataEndTimeBefore", m_dataEndTimeBefore.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InferenceExecutionStatusMapper::GetNameForInferenceExecutionStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInferenceExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListInferenceExecutions"));
  return headers;

}




