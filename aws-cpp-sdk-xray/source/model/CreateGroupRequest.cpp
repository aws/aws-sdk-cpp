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
    m_filterExpressionHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




