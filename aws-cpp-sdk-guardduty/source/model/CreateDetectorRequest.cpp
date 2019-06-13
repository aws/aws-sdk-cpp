/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_findingPublishingFrequency(FindingPublishingFrequency::NOT_SET),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_tagsHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




