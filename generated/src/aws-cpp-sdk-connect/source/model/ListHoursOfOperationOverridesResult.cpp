/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListHoursOfOperationOverridesResult.h>
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

ListHoursOfOperationOverridesResult::ListHoursOfOperationOverridesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHoursOfOperationOverridesResult& ListHoursOfOperationOverridesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HoursOfOperationOverrideList"))
  {
    Aws::Utils::Array<JsonView> hoursOfOperationOverrideListJsonList = jsonValue.GetArray("HoursOfOperationOverrideList");
    for(unsigned hoursOfOperationOverrideListIndex = 0; hoursOfOperationOverrideListIndex < hoursOfOperationOverrideListJsonList.GetLength(); ++hoursOfOperationOverrideListIndex)
    {
      m_hoursOfOperationOverrideList.push_back(hoursOfOperationOverrideListJsonList[hoursOfOperationOverrideListIndex].AsObject());
    }
    m_hoursOfOperationOverrideListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
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
