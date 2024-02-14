/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ListEnabledBaselinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnabledBaselinesResult::ListEnabledBaselinesResult()
{
}

ListEnabledBaselinesResult::ListEnabledBaselinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnabledBaselinesResult& ListEnabledBaselinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("enabledBaselines"))
  {
    Aws::Utils::Array<JsonView> enabledBaselinesJsonList = jsonValue.GetArray("enabledBaselines");
    for(unsigned enabledBaselinesIndex = 0; enabledBaselinesIndex < enabledBaselinesJsonList.GetLength(); ++enabledBaselinesIndex)
    {
      m_enabledBaselines.push_back(enabledBaselinesJsonList[enabledBaselinesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
