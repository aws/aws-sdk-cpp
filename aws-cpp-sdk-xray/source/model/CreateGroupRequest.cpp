/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/CreateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGroupRequest::CreateGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_insightsConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_insightsConfigurationHasBeenSet)
  {
   payload.WithObject("InsightsConfiguration", m_insightsConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




