/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListMilestonesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMilestonesResult::ListMilestonesResult()
{
}

ListMilestonesResult::ListMilestonesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMilestonesResult& ListMilestonesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

  }

  if(jsonValue.ValueExists("MilestoneSummaries"))
  {
    Aws::Utils::Array<JsonView> milestoneSummariesJsonList = jsonValue.GetArray("MilestoneSummaries");
    for(unsigned milestoneSummariesIndex = 0; milestoneSummariesIndex < milestoneSummariesJsonList.GetLength(); ++milestoneSummariesIndex)
    {
      m_milestoneSummaries.push_back(milestoneSummariesJsonList[milestoneSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
