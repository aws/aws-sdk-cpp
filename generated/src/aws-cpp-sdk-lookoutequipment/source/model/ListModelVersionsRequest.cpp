/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListModelVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListModelVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

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
   payload.WithString("Status", ModelVersionStatusMapper::GetNameForModelVersionStatus(m_status));
  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", ModelVersionSourceTypeMapper::GetNameForModelVersionSourceType(m_sourceType));
  }

  if(m_createdAtEndTimeHasBeenSet)
  {
   payload.WithDouble("CreatedAtEndTime", m_createdAtEndTime.SecondsWithMSPrecision());
  }

  if(m_createdAtStartTimeHasBeenSet)
  {
   payload.WithDouble("CreatedAtStartTime", m_createdAtStartTime.SecondsWithMSPrecision());
  }

  if(m_maxModelVersionHasBeenSet)
  {
   payload.WithInt64("MaxModelVersion", m_maxModelVersion);

  }

  if(m_minModelVersionHasBeenSet)
  {
   payload.WithInt64("MinModelVersion", m_minModelVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListModelVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.ListModelVersions"));
  return headers;

}




