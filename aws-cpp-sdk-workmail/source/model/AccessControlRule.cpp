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
    m_dateModifiedHasBeenSet(false),
    m_impersonationRoleIdsHasBeenSet(false),
    m_notImpersonationRoleIdsHasBeenSet(false)
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
    m_dateModifiedHasBeenSet(false),
    m_impersonationRoleIdsHasBeenSet(false),
    m_notImpersonationRoleIdsHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> ipRangesJsonList = jsonValue.GetArray("IpRanges");
    for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
    {
      m_ipRanges.push_back(ipRangesJsonList[ipRangesIndex].AsString());
    }
    m_ipRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotIpRanges"))
  {
    Aws::Utils::Array<JsonView> notIpRangesJsonList = jsonValue.GetArray("NotIpRanges");
    for(unsigned notIpRangesIndex = 0; notIpRangesIndex < notIpRangesJsonList.GetLength(); ++notIpRangesIndex)
    {
      m_notIpRanges.push_back(notIpRangesJsonList[notIpRangesIndex].AsString());
    }
    m_notIpRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotActions"))
  {
    Aws::Utils::Array<JsonView> notActionsJsonList = jsonValue.GetArray("NotActions");
    for(unsigned notActionsIndex = 0; notActionsIndex < notActionsJsonList.GetLength(); ++notActionsIndex)
    {
      m_notActions.push_back(notActionsJsonList[notActionsIndex].AsString());
    }
    m_notActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserIds"))
  {
    Aws::Utils::Array<JsonView> userIdsJsonList = jsonValue.GetArray("UserIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotUserIds"))
  {
    Aws::Utils::Array<JsonView> notUserIdsJsonList = jsonValue.GetArray("NotUserIds");
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

  if(jsonValue.ValueExists("ImpersonationRoleIds"))
  {
    Aws::Utils::Array<JsonView> impersonationRoleIdsJsonList = jsonValue.GetArray("ImpersonationRoleIds");
    for(unsigned impersonationRoleIdsIndex = 0; impersonationRoleIdsIndex < impersonationRoleIdsJsonList.GetLength(); ++impersonationRoleIdsIndex)
    {
      m_impersonationRoleIds.push_back(impersonationRoleIdsJsonList[impersonationRoleIdsIndex].AsString());
    }
    m_impersonationRoleIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotImpersonationRoleIds"))
  {
    Aws::Utils::Array<JsonView> notImpersonationRoleIdsJsonList = jsonValue.GetArray("NotImpersonationRoleIds");
    for(unsigned notImpersonationRoleIdsIndex = 0; notImpersonationRoleIdsIndex < notImpersonationRoleIdsJsonList.GetLength(); ++notImpersonationRoleIdsIndex)
    {
      m_notImpersonationRoleIds.push_back(notImpersonationRoleIdsJsonList[notImpersonationRoleIdsIndex].AsString());
    }
    m_notImpersonationRoleIdsHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> ipRangesJsonList(m_ipRanges.size());
   for(unsigned ipRangesIndex = 0; ipRangesIndex < ipRangesJsonList.GetLength(); ++ipRangesIndex)
   {
     ipRangesJsonList[ipRangesIndex].AsString(m_ipRanges[ipRangesIndex]);
   }
   payload.WithArray("IpRanges", std::move(ipRangesJsonList));

  }

  if(m_notIpRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notIpRangesJsonList(m_notIpRanges.size());
   for(unsigned notIpRangesIndex = 0; notIpRangesIndex < notIpRangesJsonList.GetLength(); ++notIpRangesIndex)
   {
     notIpRangesJsonList[notIpRangesIndex].AsString(m_notIpRanges[notIpRangesIndex]);
   }
   payload.WithArray("NotIpRanges", std::move(notIpRangesJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_notActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notActionsJsonList(m_notActions.size());
   for(unsigned notActionsIndex = 0; notActionsIndex < notActionsJsonList.GetLength(); ++notActionsIndex)
   {
     notActionsJsonList[notActionsIndex].AsString(m_notActions[notActionsIndex]);
   }
   payload.WithArray("NotActions", std::move(notActionsJsonList));

  }

  if(m_userIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("UserIds", std::move(userIdsJsonList));

  }

  if(m_notUserIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notUserIdsJsonList(m_notUserIds.size());
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

  if(m_impersonationRoleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impersonationRoleIdsJsonList(m_impersonationRoleIds.size());
   for(unsigned impersonationRoleIdsIndex = 0; impersonationRoleIdsIndex < impersonationRoleIdsJsonList.GetLength(); ++impersonationRoleIdsIndex)
   {
     impersonationRoleIdsJsonList[impersonationRoleIdsIndex].AsString(m_impersonationRoleIds[impersonationRoleIdsIndex]);
   }
   payload.WithArray("ImpersonationRoleIds", std::move(impersonationRoleIdsJsonList));

  }

  if(m_notImpersonationRoleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notImpersonationRoleIdsJsonList(m_notImpersonationRoleIds.size());
   for(unsigned notImpersonationRoleIdsIndex = 0; notImpersonationRoleIdsIndex < notImpersonationRoleIdsJsonList.GetLength(); ++notImpersonationRoleIdsIndex)
   {
     notImpersonationRoleIdsJsonList[notImpersonationRoleIdsIndex].AsString(m_notImpersonationRoleIds[notImpersonationRoleIdsIndex]);
   }
   payload.WithArray("NotImpersonationRoleIds", std::move(notImpersonationRoleIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
