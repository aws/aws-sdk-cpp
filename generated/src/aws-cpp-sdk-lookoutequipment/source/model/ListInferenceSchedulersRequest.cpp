/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListInferenceSchedulersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInferenceSchedulersRequest::ListInferenceSchedulersRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_inferenceSchedulerNameBeginsWithHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_status(InferenceSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListInferenceSchedulersRequest::SerializePayload() const
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

  if(m_inferenceSchedulerNameBeginsWithHasBeenSet)
  {
   payload.WithString("InferenceSchedulerNameBeginsWith", m_inferenceSchedulerNameBeginsWith);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InferenceSchedulerStatusMapper::GetNameForInferenceSchedulerStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInferenceSchedulersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListInferenceSchedulers"));
  return headers;

}




