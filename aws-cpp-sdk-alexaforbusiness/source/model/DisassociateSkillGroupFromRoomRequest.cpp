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

#include <aws/alexaforbusiness/model/DisassociateSkillGroupFromRoomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateSkillGroupFromRoomRequest::DisassociateSkillGroupFromRoomRequest() : 
    m_skillGroupArnHasBeenSet(false),
    m_roomArnHasBeenSet(false)
{
}

Aws::String DisassociateSkillGroupFromRoomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skillGroupArnHasBeenSet)
  {
   payload.WithString("SkillGroupArn", m_skillGroupArn);

  }

  if(m_roomArnHasBeenSet)
  {
   payload.WithString("RoomArn", m_roomArn);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateSkillGroupFromRoomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DisassociateSkillGroupFromRoom"));
  return headers;

}




