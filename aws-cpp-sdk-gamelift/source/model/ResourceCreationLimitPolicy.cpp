/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
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

ResourceCreationLimitPolicy::ResourceCreationLimitPolicy() : 
    m_newGameSessionsPerCreator(0),
    m_newGameSessionsPerCreatorHasBeenSet(false),
    m_policyPeriodInMinutes(0),
    m_policyPeriodInMinutesHasBeenSet(false)
{
}

ResourceCreationLimitPolicy::ResourceCreationLimitPolicy(const JsonValue& jsonValue) : 
    m_newGameSessionsPerCreator(0),
    m_newGameSessionsPerCreatorHasBeenSet(false),
    m_policyPeriodInMinutes(0),
    m_policyPeriodInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceCreationLimitPolicy& ResourceCreationLimitPolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NewGameSessionsPerCreator"))
  {
    m_newGameSessionsPerCreator = jsonValue.GetInteger("NewGameSessionsPerCreator");

    m_newGameSessionsPerCreatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyPeriodInMinutes"))
  {
    m_policyPeriodInMinutes = jsonValue.GetInteger("PolicyPeriodInMinutes");

    m_policyPeriodInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceCreationLimitPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_newGameSessionsPerCreatorHasBeenSet)
  {
   payload.WithInteger("NewGameSessionsPerCreator", m_newGameSessionsPerCreator);

  }

  if(m_policyPeriodInMinutesHasBeenSet)
  {
   payload.WithInteger("PolicyPeriodInMinutes", m_policyPeriodInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws