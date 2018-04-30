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

#include <aws/workspaces/model/IpRuleItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

IpRuleItem::IpRuleItem() : 
    m_ipRuleHasBeenSet(false),
    m_ruleDescHasBeenSet(false)
{
}

IpRuleItem::IpRuleItem(const JsonValue& jsonValue) : 
    m_ipRuleHasBeenSet(false),
    m_ruleDescHasBeenSet(false)
{
  *this = jsonValue;
}

IpRuleItem& IpRuleItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ipRule"))
  {
    m_ipRule = jsonValue.GetString("ipRule");

    m_ipRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleDesc"))
  {
    m_ruleDesc = jsonValue.GetString("ruleDesc");

    m_ruleDescHasBeenSet = true;
  }

  return *this;
}

JsonValue IpRuleItem::Jsonize() const
{
  JsonValue payload;

  if(m_ipRuleHasBeenSet)
  {
   payload.WithString("ipRule", m_ipRule);

  }

  if(m_ruleDescHasBeenSet)
  {
   payload.WithString("ruleDesc", m_ruleDesc);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
