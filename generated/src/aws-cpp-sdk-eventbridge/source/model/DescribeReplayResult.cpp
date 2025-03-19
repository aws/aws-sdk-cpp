/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeReplayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplayResult::DescribeReplayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplayResult& DescribeReplayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplayName"))
  {
    m_replayName = jsonValue.GetString("ReplayName");
    m_replayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplayArn"))
  {
    m_replayArn = jsonValue.GetString("ReplayArn");
    m_replayArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ReplayStateMapper::GetReplayStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");
    m_eventSourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventStartTime"))
  {
    m_eventStartTime = jsonValue.GetDouble("EventStartTime");
    m_eventStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventEndTime"))
  {
    m_eventEndTime = jsonValue.GetDouble("EventEndTime");
    m_eventEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventLastReplayedTime"))
  {
    m_eventLastReplayedTime = jsonValue.GetDouble("EventLastReplayedTime");
    m_eventLastReplayedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplayStartTime"))
  {
    m_replayStartTime = jsonValue.GetDouble("ReplayStartTime");
    m_replayStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplayEndTime"))
  {
    m_replayEndTime = jsonValue.GetDouble("ReplayEndTime");
    m_replayEndTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
