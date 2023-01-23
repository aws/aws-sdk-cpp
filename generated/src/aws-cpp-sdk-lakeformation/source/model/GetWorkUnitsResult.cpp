/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetWorkUnitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkUnitsResult::GetWorkUnitsResult()
{
}

GetWorkUnitsResult::GetWorkUnitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkUnitsResult& GetWorkUnitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

  }

  if(jsonValue.ValueExists("WorkUnitRanges"))
  {
    Aws::Utils::Array<JsonView> workUnitRangesJsonList = jsonValue.GetArray("WorkUnitRanges");
    for(unsigned workUnitRangesIndex = 0; workUnitRangesIndex < workUnitRangesJsonList.GetLength(); ++workUnitRangesIndex)
    {
      m_workUnitRanges.push_back(workUnitRangesJsonList[workUnitRangesIndex].AsObject());
    }
  }



  return *this;
}
