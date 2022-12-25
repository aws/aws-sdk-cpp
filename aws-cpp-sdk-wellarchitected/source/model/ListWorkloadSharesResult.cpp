/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListWorkloadSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkloadSharesResult::ListWorkloadSharesResult()
{
}

ListWorkloadSharesResult::ListWorkloadSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkloadSharesResult& ListWorkloadSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

  }

  if(jsonValue.ValueExists("WorkloadShareSummaries"))
  {
    Aws::Utils::Array<JsonView> workloadShareSummariesJsonList = jsonValue.GetArray("WorkloadShareSummaries");
    for(unsigned workloadShareSummariesIndex = 0; workloadShareSummariesIndex < workloadShareSummariesJsonList.GetLength(); ++workloadShareSummariesIndex)
    {
      m_workloadShareSummaries.push_back(workloadShareSummariesJsonList[workloadShareSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
