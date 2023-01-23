/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListModelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListModelsRequest::ListModelsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_modelNameBeginsWithHasBeenSet(false),
    m_datasetNameBeginsWithHasBeenSet(false)
{
}

Aws::String ListModelsRequest::SerializePayload() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_modelNameBeginsWithHasBeenSet)
  {
   payload.WithString("ModelNameBeginsWith", m_modelNameBeginsWith);

  }

  if(m_datasetNameBeginsWithHasBeenSet)
  {
   payload.WithString("DatasetNameBeginsWith", m_datasetNameBeginsWith);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListModelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListModels"));
  return headers;

}




