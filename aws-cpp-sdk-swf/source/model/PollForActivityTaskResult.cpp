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
#include <aws/swf/model/PollForActivityTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PollForActivityTaskResult::PollForActivityTaskResult() : 
    m_startedEventId(0)
{
}

PollForActivityTaskResult::PollForActivityTaskResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_startedEventId(0)
{
  *this = result;
}

PollForActivityTaskResult& PollForActivityTaskResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("taskToken"))
  {
    m_taskToken = jsonValue.GetString("taskToken");

  }

  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

  }

  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");

  }

  if(jsonValue.ValueExists("workflowExecution"))
  {
    m_workflowExecution = jsonValue.GetObject("workflowExecution");

  }

  if(jsonValue.ValueExists("activityType"))
  {
    m_activityType = jsonValue.GetObject("activityType");

  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

  }



  return *this;
}
