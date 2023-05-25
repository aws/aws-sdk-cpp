/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateSkillGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSkillGroupRequest::UpdateSkillGroupRequest() : 
    m_skillGroupArnHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateSkillGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skillGroupArnHasBeenSet)
  {
   payload.WithString("SkillGroupArn", m_skillGroupArn);

  }

  if(m_skillGroupNameHasBeenSet)
  {
   payload.WithString("SkillGroupName", m_skillGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSkillGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.UpdateSkillGroup"));
  return headers;

}




