﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchHoursOfOperationOverridesResult.h>
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

SearchHoursOfOperationOverridesResult::SearchHoursOfOperationOverridesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchHoursOfOperationOverridesResult& SearchHoursOfOperationOverridesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HoursOfOperationOverrides"))
  {
    Aws::Utils::Array<JsonView> hoursOfOperationOverridesJsonList = jsonValue.GetArray("HoursOfOperationOverrides");
    for(unsigned hoursOfOperationOverridesIndex = 0; hoursOfOperationOverridesIndex < hoursOfOperationOverridesJsonList.GetLength(); ++hoursOfOperationOverridesIndex)
    {
      m_hoursOfOperationOverrides.push_back(hoursOfOperationOverridesJsonList[hoursOfOperationOverridesIndex].AsObject());
    }
    m_hoursOfOperationOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");
    m_approximateTotalCountHasBeenSet = true;
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
