/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRuleResult::DescribeRuleResult() : 
    m_state(RuleState::NOT_SET)
{
}

DescribeRuleResult::DescribeRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(RuleState::NOT_SET)
{
  *this = result;
}

DescribeRuleResult& DescribeRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("EventPattern"))
  {
    m_eventPattern = jsonValue.GetString("EventPattern");

  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RuleStateMapper::GetRuleStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ManagedBy"))
  {
    m_managedBy = jsonValue.GetString("ManagedBy");

  }

  if(jsonValue.ValueExists("EventBusName"))
  {
    m_eventBusName = jsonValue.GetString("EventBusName");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

  }



  return *this;
}
