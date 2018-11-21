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

#include <aws/xray/model/UpdateGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupRequest::UpdateGroupRequest() : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




