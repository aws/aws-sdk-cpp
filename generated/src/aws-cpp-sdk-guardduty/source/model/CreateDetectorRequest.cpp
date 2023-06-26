/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CreateDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDetectorRequest::CreateDetectorRequest() : 
    m_enable(false),
    m_enableHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

Aws::String CreateDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enableHasBeenSet)
  {
   payload.WithBool("enable", m_enable);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_findingPublishingFrequencyHasBeenSet)
  {
   payload.WithString("findingPublishingFrequency", FindingPublishingFrequencyMapper::GetNameForFindingPublishingFrequency(m_findingPublishingFrequency));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
   }
   payload.WithArray("features", std::move(featuresJsonList));

  }

  return payload.View().WriteReadable();
}




