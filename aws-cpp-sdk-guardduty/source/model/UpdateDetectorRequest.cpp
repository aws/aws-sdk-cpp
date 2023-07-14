/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDetectorRequest::UpdateDetectorRequest() : 
    m_detectorIdHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_dataSourcesHasBeenSet(false)
{
}

Aws::String UpdateDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  if(m_findingPublishingFrequencyHasBeenSet)
  {
   payload.WithString("findingPublishingFrequency", FindingPublishingFrequencyMapper::GetNameForFindingPublishingFrequency(m_findingPublishingFrequency));
  }

  if(m_dataSourcesHasBeenSet)
  {
   payload.WithObject("dataSources", m_dataSources.Jsonize());

  }

  return payload.View().WriteReadable();
}




