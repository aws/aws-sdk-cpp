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

#include <aws/xray/model/GetTraceSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTraceSummariesResult::GetTraceSummariesResult() : 
    m_tracesProcessedCount(0)
{
}

GetTraceSummariesResult::GetTraceSummariesResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_tracesProcessedCount(0)
{
  *this = result;
}

GetTraceSummariesResult& GetTraceSummariesResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("TraceSummaries"))
  {
    Array<JsonValue> traceSummariesJsonList = jsonValue.GetArray("TraceSummaries");
    for(unsigned traceSummariesIndex = 0; traceSummariesIndex < traceSummariesJsonList.GetLength(); ++traceSummariesIndex)
    {
      m_traceSummaries.push_back(traceSummariesJsonList[traceSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ApproximateTime"))
  {
    m_approximateTime = jsonValue.GetDouble("ApproximateTime");

  }

  if(jsonValue.ValueExists("TracesProcessedCount"))
  {
    m_tracesProcessedCount = jsonValue.GetInt64("TracesProcessedCount");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
