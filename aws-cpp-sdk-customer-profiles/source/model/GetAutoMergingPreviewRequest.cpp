/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetAutoMergingPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAutoMergingPreviewRequest::GetAutoMergingPreviewRequest() : 
    m_domainNameHasBeenSet(false),
    m_consolidationHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_minAllowedConfidenceScoreForMerging(0.0),
    m_minAllowedConfidenceScoreForMergingHasBeenSet(false)
{
}

Aws::String GetAutoMergingPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consolidationHasBeenSet)
  {
   payload.WithObject("Consolidation", m_consolidation.Jsonize());

  }

  if(m_conflictResolutionHasBeenSet)
  {
   payload.WithObject("ConflictResolution", m_conflictResolution.Jsonize());

  }

  if(m_minAllowedConfidenceScoreForMergingHasBeenSet)
  {
   payload.WithDouble("MinAllowedConfidenceScoreForMerging", m_minAllowedConfidenceScoreForMerging);

  }

  return payload.View().WriteReadable();
}




