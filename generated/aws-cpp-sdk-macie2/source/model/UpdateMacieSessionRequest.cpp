/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateMacieSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMacieSessionRequest::UpdateMacieSessionRequest() : 
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_status(MacieStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateMacieSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingPublishingFrequencyHasBeenSet)
  {
   payload.WithString("findingPublishingFrequency", FindingPublishingFrequencyMapper::GetNameForFindingPublishingFrequency(m_findingPublishingFrequency));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MacieStatusMapper::GetNameForMacieStatus(m_status));
  }

  return payload.View().WriteReadable();
}




