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
#include <aws/iot/model/TopicRuleListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TopicRuleListItem::TopicRuleListItem() : 
    m_ruleArnHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_topicPatternHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false)
{
}

TopicRuleListItem::TopicRuleListItem(const JsonValue& jsonValue) : 
    m_ruleArnHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_topicPatternHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRuleListItem& TopicRuleListItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ruleArn"))
  {
    m_ruleArn = jsonValue.GetString("ruleArn");

    m_ruleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicPattern"))
  {
    m_topicPattern = jsonValue.GetString("topicPattern");

    m_topicPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleDisabled"))
  {
    m_ruleDisabled = jsonValue.GetBool("ruleDisabled");

    m_ruleDisabledHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRuleListItem::Jsonize() const
{
  JsonValue payload;

  if(m_ruleArnHasBeenSet)
  {
   payload.WithString("ruleArn", m_ruleArn);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_topicPatternHasBeenSet)
  {
   payload.WithString("topicPattern", m_topicPattern);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_ruleDisabledHasBeenSet)
  {
   payload.WithBool("ruleDisabled", m_ruleDisabled);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws