/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AccessControlRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

AccessControlRule::AccessControlRule() : 
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
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
}

AccessControlRule::AccessControlRule(JsonView jsonValue) : 
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
    m_dateCreatedHasBeenSet(false),
    m_dateModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

AccessControlRule& AccessControlRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = AccessControlRuleEffectMapper::GetAccessControlRuleEffectForName(jsonValue.GetString("Effect"));

    m_effectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRanges"))
  {
    Array<JsonView> ipRangesJsonList = jsonValue.GetArray("IpRanges");
    for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
    {
      m_ipRanges.push_back(ipRangesJsonList[ipRangesIndex].AsString());
    }
    m_ipRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotIpRanges"))
  {
    Array<JsonView> notIpRangesJsonList = jsonValue.GetArray("NotIpRanges");
    for(unsigned notIpRangesIndex = 0; notIpRangesIndex < notIpRangesJsonList.GetLength(); ++notIpRangesIndex)
    {
      m_notIpRanges.push_back(notIpRangesJsonList[notIpRangesIndex].AsString());
    }
    m_notIpRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotActions"))
  {
    Array<JsonView> notActionsJsonList = jsonValue.GetArray("NotActions");
    for(unsigned notActionsIndex = 0; notActionsIndex < notActionsJsonList.GetLength(); ++notActionsIndex)
    {
      m_notActions.push_back(notActionsJsonList[notActionsIndex].AsString());
    }
    m_notActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserIds"))
  {
    Array<JsonView> userIdsJsonList = jsonValue.GetArray("UserIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotUserIds"))
  {
    Array<JsonView> notUserIdsJsonList = jsonValue.GetArray("NotUserIds");
    for(unsigned notUserIdsIndex = 0; notUserIdsIndex < notUserIdsJsonList.GetLength(); ++notUserIdsIndex)
    {
      m_notUserIds.push_back(notUserIdsJsonList[notUserIdsIndex].AsString());
    }
    m_notUserIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetDouble("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateModified"))
  {
    m_dateModified = jsonValue.GetDouble("DateModified");

    m_dateModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessControlRule::Jsonize() const
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

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithDouble("DateCreated", m_dateCreated.SecondsWithMSPrecision());
  }

  if(m_dateModifiedHasBeenSet)
  {
   payload.WithDouble("DateModified", m_dateModified.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
