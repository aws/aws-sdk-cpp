/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListRetrainingSchedulersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRetrainingSchedulersRequest::ListRetrainingSchedulersRequest() : 
    m_modelNameBeginsWithHasBeenSet(false),
    m_status(RetrainingSchedulerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListRetrainingSchedulersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameBeginsWithHasBeenSet)
  {
   payload.WithString("ModelNameBeginsWith", m_modelNameBeginsWith);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RetrainingSchedulerStatusMapper::GetNameForRetrainingSchedulerStatus(m_status));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRetrainingSchedulersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListRetrainingSchedulers"));
  return headers;

}




