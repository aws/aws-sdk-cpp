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

#include <aws/eventbridge/model/RemoveTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveTargetsResult::RemoveTargetsResult() : 
    m_failedEntryCount(0)
{
}

RemoveTargetsResult::RemoveTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedEntryCount(0)
{
  *this = result;
}

RemoveTargetsResult& RemoveTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedEntryCount"))
  {
    m_failedEntryCount = jsonValue.GetInteger("FailedEntryCount");

  }

  if(jsonValue.ValueExists("FailedEntries"))
  {
    Array<JsonView> failedEntriesJsonList = jsonValue.GetArray("FailedEntries");
    for(unsigned failedEntriesIndex = 0; failedEntriesIndex < failedEntriesJsonList.GetLength(); ++failedEntriesIndex)
    {
      m_failedEntries.push_back(failedEntriesJsonList[failedEntriesIndex].AsObject());
    }
  }



  return *this;
}
