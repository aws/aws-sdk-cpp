/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeReplayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplayResult::DescribeReplayResult() : 
    m_state(ReplayState::NOT_SET)
{
}

DescribeReplayResult::DescribeReplayResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ReplayState::NOT_SET)
{
  *this = result;
}

DescribeReplayResult& DescribeReplayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplayName"))
  {
    m_replayName = jsonValue.GetString("ReplayName");

  }

  if(jsonValue.ValueExists("ReplayArn"))
  {
    m_replayArn = jsonValue.GetString("ReplayArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ReplayStateMapper::GetReplayStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

  }

  if(jsonValue.ValueExists("EventStartTime"))
  {
    m_eventStartTime = jsonValue.GetDouble("EventStartTime");

  }

  if(jsonValue.ValueExists("EventEndTime"))
  {
    m_eventEndTime = jsonValue.GetDouble("EventEndTime");

  }

  if(jsonValue.ValueExists("EventLastReplayedTime"))
  {
    m_eventLastReplayedTime = jsonValue.GetDouble("EventLastReplayedTime");

  }

  if(jsonValue.ValueExists("ReplayStartTime"))
  {
    m_replayStartTime = jsonValue.GetDouble("ReplayStartTime");

  }

  if(jsonValue.ValueExists("ReplayEndTime"))
  {
    m_replayEndTime = jsonValue.GetDouble("ReplayEndTime");

  }



  return *this;
}
