/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ImpersonationRule.h>
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

ImpersonationRule::ImpersonationRule() : 
    m_impersonationRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_effect(AccessEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_targetUsersHasBeenSet(false),
    m_notTargetUsersHasBeenSet(false)
{
}

ImpersonationRule::ImpersonationRule(JsonView jsonValue) : 
    m_impersonationRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_effect(AccessEffect::NOT_SET),
    m_effectHasBeenSet(false),
    m_targetUsersHasBeenSet(false),
    m_notTargetUsersHasBeenSet(false)
{
  *this = jsonValue;
}

ImpersonationRule& ImpersonationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImpersonationRuleId"))
  {
    m_impersonationRuleId = jsonValue.GetString("ImpersonationRuleId");

    m_impersonationRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = AccessEffectMapper::GetAccessEffectForName(jsonValue.GetString("Effect"));

    m_effectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetUsers"))
  {
    Aws::Utils::Array<JsonView> targetUsersJsonList = jsonValue.GetArray("TargetUsers");
    for(unsigned targetUsersIndex = 0; targetUsersIndex < targetUsersJsonList.GetLength(); ++targetUsersIndex)
    {
      m_targetUsers.push_back(targetUsersJsonList[targetUsersIndex].AsString());
    }
    m_targetUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotTargetUsers"))
  {
    Aws::Utils::Array<JsonView> notTargetUsersJsonList = jsonValue.GetArray("NotTargetUsers");
    for(unsigned notTargetUsersIndex = 0; notTargetUsersIndex < notTargetUsersJsonList.GetLength(); ++notTargetUsersIndex)
    {
      m_notTargetUsers.push_back(notTargetUsersJsonList[notTargetUsersIndex].AsString());
    }
    m_notTargetUsersHasBeenSet = true;
  }

  return *this;
}

JsonValue ImpersonationRule::Jsonize() const
{
  JsonValue payload;

  if(m_impersonationRuleIdHasBeenSet)
  {
   payload.WithString("ImpersonationRuleId", m_impersonationRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("Effect", AccessEffectMapper::GetNameForAccessEffect(m_effect));
  }

  if(m_targetUsersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetUsersJsonList(m_targetUsers.size());
   for(unsigned targetUsersIndex = 0; targetUsersIndex < targetUsersJsonList.GetLength(); ++targetUsersIndex)
   {
     targetUsersJsonList[targetUsersIndex].AsString(m_targetUsers[targetUsersIndex]);
   }
   payload.WithArray("TargetUsers", std::move(targetUsersJsonList));

  }

  if(m_notTargetUsersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notTargetUsersJsonList(m_notTargetUsers.size());
   for(unsigned notTargetUsersIndex = 0; notTargetUsersIndex < notTargetUsersJsonList.GetLength(); ++notTargetUsersIndex)
   {
     notTargetUsersJsonList[notTargetUsersIndex].AsString(m_notTargetUsers[notTargetUsersIndex]);
   }
   payload.WithArray("NotTargetUsers", std::move(notTargetUsersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
