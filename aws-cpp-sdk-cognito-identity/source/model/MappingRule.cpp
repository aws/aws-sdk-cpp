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

#include <aws/cognito-identity/model/MappingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

MappingRule::MappingRule() : 
    m_claimHasBeenSet(false),
    m_matchType(MappingRuleMatchType::NOT_SET),
    m_matchTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
}

MappingRule::MappingRule(const JsonValue& jsonValue) : 
    m_claimHasBeenSet(false),
    m_matchType(MappingRuleMatchType::NOT_SET),
    m_matchTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_roleARNHasBeenSet(false)
{
  *this = jsonValue;
}

MappingRule& MappingRule::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Claim"))
  {
    m_claim = jsonValue.GetString("Claim");

    m_claimHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchType"))
  {
    m_matchType = MappingRuleMatchTypeMapper::GetMappingRuleMatchTypeForName(jsonValue.GetString("MatchType"));

    m_matchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  return *this;
}

JsonValue MappingRule::Jsonize() const
{
  JsonValue payload;

  if(m_claimHasBeenSet)
  {
   payload.WithString("Claim", m_claim);

  }

  if(m_matchTypeHasBeenSet)
  {
   payload.WithString("MatchType", MappingRuleMatchTypeMapper::GetNameForMappingRuleMatchType(m_matchType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws