/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleTypeId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RuleTypeId::RuleTypeId(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleTypeId& RuleTypeId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = RuleCategoryMapper::GetRuleCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = RuleOwnerMapper::GetRuleOwnerForName(jsonValue.GetString("owner"));
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");
    m_providerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleTypeId::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", RuleCategoryMapper::GetNameForRuleCategory(m_category));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", RuleOwnerMapper::GetNameForRuleOwner(m_owner));
  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
