/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchHoursOfOperationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchHoursOfOperationsResult::SearchHoursOfOperationsResult() : 
    m_approximateTotalCount(0)
{
}

SearchHoursOfOperationsResult::SearchHoursOfOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

SearchHoursOfOperationsResult& SearchHoursOfOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HoursOfOperations"))
  {
    Aws::Utils::Array<JsonView> hoursOfOperationsJsonList = jsonValue.GetArray("HoursOfOperations");
    for(unsigned hoursOfOperationsIndex = 0; hoursOfOperationsIndex < hoursOfOperationsJsonList.GetLength(); ++hoursOfOperationsIndex)
    {
      m_hoursOfOperations.push_back(hoursOfOperationsJsonList[hoursOfOperationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
