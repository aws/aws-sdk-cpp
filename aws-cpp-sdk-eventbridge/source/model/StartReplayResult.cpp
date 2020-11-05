/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/StartReplayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReplayResult::StartReplayResult() : 
    m_state(ReplayState::NOT_SET)
{
}

StartReplayResult::StartReplayResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ReplayState::NOT_SET)
{
  *this = result;
}

StartReplayResult& StartReplayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplayArn"))
  {
    m_replayArn = jsonValue.GetString("ReplayArn");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ReplayStateMapper::GetReplayStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("ReplayStartTime"))
  {
    m_replayStartTime = jsonValue.GetDouble("ReplayStartTime");

  }



  return *this;
}
