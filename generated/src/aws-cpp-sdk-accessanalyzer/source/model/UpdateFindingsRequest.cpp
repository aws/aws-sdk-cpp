/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UpdateFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFindingsRequest::UpdateFindingsRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_status(FindingStatusUpdate::NOT_SET),
    m_statusHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusUpdateMapper::GetNameForFindingStatusUpdate(m_status));
  }

  if(m_idsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
   for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
   {
     idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
   }
   payload.WithArray("ids", std::move(idsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




