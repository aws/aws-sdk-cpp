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

#include <aws/elasticmapreduce/model/BlockPublicAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

BlockPublicAccessConfiguration::BlockPublicAccessConfiguration() : 
    m_blockPublicSecurityGroupRules(false),
    m_blockPublicSecurityGroupRulesHasBeenSet(false),
    m_permittedPublicSecurityGroupRuleRangesHasBeenSet(false)
{
}

BlockPublicAccessConfiguration::BlockPublicAccessConfiguration(JsonView jsonValue) : 
    m_blockPublicSecurityGroupRules(false),
    m_blockPublicSecurityGroupRulesHasBeenSet(false),
    m_permittedPublicSecurityGroupRuleRangesHasBeenSet(false)
{
  *this = jsonValue;
}

BlockPublicAccessConfiguration& BlockPublicAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockPublicSecurityGroupRules"))
  {
    m_blockPublicSecurityGroupRules = jsonValue.GetBool("BlockPublicSecurityGroupRules");

    m_blockPublicSecurityGroupRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermittedPublicSecurityGroupRuleRanges"))
  {
    Array<JsonView> permittedPublicSecurityGroupRuleRangesJsonList = jsonValue.GetArray("PermittedPublicSecurityGroupRuleRanges");
    for(unsigned permittedPublicSecurityGroupRuleRangesIndex = 0; permittedPublicSecurityGroupRuleRangesIndex < permittedPublicSecurityGroupRuleRangesJsonList.GetLength(); ++permittedPublicSecurityGroupRuleRangesIndex)
    {
      m_permittedPublicSecurityGroupRuleRanges.push_back(permittedPublicSecurityGroupRuleRangesJsonList[permittedPublicSecurityGroupRuleRangesIndex].AsObject());
    }
    m_permittedPublicSecurityGroupRuleRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockPublicAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicSecurityGroupRulesHasBeenSet)
  {
   payload.WithBool("BlockPublicSecurityGroupRules", m_blockPublicSecurityGroupRules);

  }

  if(m_permittedPublicSecurityGroupRuleRangesHasBeenSet)
  {
   Array<JsonValue> permittedPublicSecurityGroupRuleRangesJsonList(m_permittedPublicSecurityGroupRuleRanges.size());
   for(unsigned permittedPublicSecurityGroupRuleRangesIndex = 0; permittedPublicSecurityGroupRuleRangesIndex < permittedPublicSecurityGroupRuleRangesJsonList.GetLength(); ++permittedPublicSecurityGroupRuleRangesIndex)
   {
     permittedPublicSecurityGroupRuleRangesJsonList[permittedPublicSecurityGroupRuleRangesIndex].AsObject(m_permittedPublicSecurityGroupRuleRanges[permittedPublicSecurityGroupRuleRangesIndex].Jsonize());
   }
   payload.WithArray("PermittedPublicSecurityGroupRuleRanges", std::move(permittedPublicSecurityGroupRuleRangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
