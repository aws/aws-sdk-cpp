/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RuleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RuleSummary::RuleSummary() : 
    m_nameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleArnHasBeenSet(false),
    m_eventSourceName(EventSourceName::NOT_SET),
    m_eventSourceNameHasBeenSet(false),
    m_publishStatus(RulePublishStatus::NOT_SET),
    m_publishStatusHasBeenSet(false),
    m_actionSummariesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

RuleSummary::RuleSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleArnHasBeenSet(false),
    m_eventSourceName(EventSourceName::NOT_SET),
    m_eventSourceNameHasBeenSet(false),
    m_publishStatus(RulePublishStatus::NOT_SET),
    m_publishStatusHasBeenSet(false),
    m_actionSummariesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RuleSummary& RuleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");

    m_ruleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSourceName"))
  {
    m_eventSourceName = EventSourceNameMapper::GetEventSourceNameForName(jsonValue.GetString("EventSourceName"));

    m_eventSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishStatus"))
  {
    m_publishStatus = RulePublishStatusMapper::GetRulePublishStatusForName(jsonValue.GetString("PublishStatus"));

    m_publishStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionSummaries"))
  {
    Aws::Utils::Array<JsonView> actionSummariesJsonList = jsonValue.GetArray("ActionSummaries");
    for(unsigned actionSummariesIndex = 0; actionSummariesIndex < actionSummariesJsonList.GetLength(); ++actionSummariesIndex)
    {
      m_actionSummaries.push_back(actionSummariesJsonList[actionSummariesIndex].AsObject());
    }
    m_actionSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_ruleArnHasBeenSet)
  {
   payload.WithString("RuleArn", m_ruleArn);

  }

  if(m_eventSourceNameHasBeenSet)
  {
   payload.WithString("EventSourceName", EventSourceNameMapper::GetNameForEventSourceName(m_eventSourceName));
  }

  if(m_publishStatusHasBeenSet)
  {
   payload.WithString("PublishStatus", RulePublishStatusMapper::GetNameForRulePublishStatus(m_publishStatus));
  }

  if(m_actionSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionSummariesJsonList(m_actionSummaries.size());
   for(unsigned actionSummariesIndex = 0; actionSummariesIndex < actionSummariesJsonList.GetLength(); ++actionSummariesIndex)
   {
     actionSummariesJsonList[actionSummariesIndex].AsObject(m_actionSummaries[actionSummariesIndex].Jsonize());
   }
   payload.WithArray("ActionSummaries", std::move(actionSummariesJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
