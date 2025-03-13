/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetEffectiveHoursOfOperationsResult.h>
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

GetEffectiveHoursOfOperationsResult::GetEffectiveHoursOfOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEffectiveHoursOfOperationsResult& GetEffectiveHoursOfOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EffectiveHoursOfOperationList"))
  {
    Aws::Utils::Array<JsonView> effectiveHoursOfOperationListJsonList = jsonValue.GetArray("EffectiveHoursOfOperationList");
    for(unsigned effectiveHoursOfOperationListIndex = 0; effectiveHoursOfOperationListIndex < effectiveHoursOfOperationListJsonList.GetLength(); ++effectiveHoursOfOperationListIndex)
    {
      m_effectiveHoursOfOperationList.push_back(effectiveHoursOfOperationListJsonList[effectiveHoursOfOperationListIndex].AsObject());
    }
    m_effectiveHoursOfOperationListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");
    m_timeZoneHasBeenSet = true;
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
