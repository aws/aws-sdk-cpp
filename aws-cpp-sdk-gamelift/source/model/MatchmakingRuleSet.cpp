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
