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

#include <aws/mq/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_brokerIdHasBeenSet(false),
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consoleAccessHasBeenSet)
  {
   payload.WithBool("consoleAccess", m_consoleAccess);

  }

  if(m_groupsHasBeenSet)
  {
   Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  return payload.WriteReadable();
}




