/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/GetServiceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServiceResult::GetServiceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServiceResult& GetServiceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetObject("Service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogGroupReferences"))
  {
    Aws::Utils::Array<JsonView> logGroupReferencesJsonList = jsonValue.GetArray("LogGroupReferences");
    for(unsigned logGroupReferencesIndex = 0; logGroupReferencesIndex < logGroupReferencesJsonList.GetLength(); ++logGroupReferencesIndex)
    {
      Aws::Map<Aws::String, JsonView> attributesJsonMap = logGroupReferencesJsonList[logGroupReferencesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> attributesMap;
      for(auto& attributesItem : attributesJsonMap)
      {
        attributesMap[attributesItem.first] = attributesItem.second.AsString();
      }
      m_logGroupReferences.push_back(std::move(attributesMap));
    }
    m_logGroupReferencesHasBeenSet = true;
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
