/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PutAccessControlRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccessControlRuleRequest::PutAccessControlRuleRequest() : 
    m_nameHasBeenSet(false),
    m_effect(AccessControlRuleEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_notIpRangesHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_notActionsHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_notUserIdsHasBeenSet(false),
    m_organizationIdHasBeenSet(false)
{
}

Aws::String PutAccessControlRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", AccessControlRuleEffectMapper::GetNameForAccessControlRuleEffect(m_effect));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ipRangesHasBeenSet)
  {
   Array<JsonValue> ipRangesJsonList(m_ipRanges.size());
   for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
   {
     ipRangesJsonList[ipRangesIndex].AsString(m_ipRanges[ipRangesIndex]);
   }
   payload.WithArray("IpRanges", std::move(ipRangesJsonList));

  }

  if(m_notIpRangesHasBeenSet)
  {
   Array<JsonValue> notIpRangesJsonList(m_notIpRanges.size());
   for(unsigned notIpRangesIndex = 0; notIpRangesIndex < notIpRangesJsonList.GetLength(); ++notIpRangesIndex)
   {
     notIpRangesJsonList[notIpRangesIndex].AsString(m_notIpRanges[notIpRangesIndex]);
   }
   payload.WithArray("NotIpRanges", std::move(notIpRangesJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_notActionsHasBeenSet)
  {
   Array<JsonValue> notActionsJsonList(m_notActions.size());
   for(unsigned notActionsIndex = 0; notActionsIndex < notActionsJsonList.GetLength(); ++notActionsIndex)
   {
     notActionsJsonList[notActionsIndex].AsString(m_notActions[notActionsIndex]);
   }
   payload.WithArray("NotActions", std::move(notActionsJsonList));

  }

  if(m_userIdsHasBeenSet)
  {
   Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("UserIds", std::move(userIdsJsonList));

  }

  if(m_notUserIdsHasBeenSet)
  {
   Array<JsonValue> notUserIdsJsonList(m_notUserIds.size());
   for(unsigned notUserIdsIndex = 0; notUserIdsIndex < notUserIdsJsonList.GetLength(); ++notUserIdsIndex)
   {
     notUserIdsJsonList[notUserIdsIndex].AsString(m_notUserIds[notUserIdsIndex]);
   }
   payload.WithArray("NotUserIds", std::move(notUserIdsJsonList));

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAccessControlRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutAccessControlRule"));
  return headers;

}




