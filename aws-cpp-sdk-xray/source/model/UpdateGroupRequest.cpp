/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/UpdateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupRequest::UpdateGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_insightsConfigurationHasBeenSet(false)
{
}

Aws::String UpdateGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_insightsConfigurationHasBeenSet)
  {
   payload.WithObject("InsightsConfiguration", m_insightsConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




