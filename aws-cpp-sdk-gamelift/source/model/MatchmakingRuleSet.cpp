/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/MatchmakingRuleSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

MatchmakingRuleSet::MatchmakingRuleSet() : 
    m_ruleSetNameHasBeenSet(false),
    m_ruleSetArnHasBeenSet(false),
    m_ruleSetBodyHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

MatchmakingRuleSet::MatchmakingRuleSet(JsonView jsonValue) : 
    m_ruleSetNameHasBeenSet(false),
    m_ruleSetArnHasBeenSet(false),
    m_ruleSetBodyHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MatchmakingRuleSet& MatchmakingRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleSetName"))
  {
    m_ruleSetName = jsonValue.GetString("RuleSetName");

    m_ruleSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleSetArn"))
  {
    m_ruleSetArn = jsonValue.GetString("RuleSetArn");

    m_ruleSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleSetBody"))
  {
    m_ruleSetBody = jsonValue.GetString("RuleSetBody");

    m_ruleSetBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchmakingRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_ruleSetNameHasBeenSet)
  {
   payload.WithString("RuleSetName", m_ruleSetName);

  }

  if(m_ruleSetArnHasBeenSet)
  {
   payload.WithString("RuleSetArn", m_ruleSetArn);

  }

  if(m_ruleSetBodyHasBeenSet)
  {
   payload.WithString("RuleSetBody", m_ruleSetBody);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
