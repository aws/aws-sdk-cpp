/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ListFindingsReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFindingsReportsResult::ListFindingsReportsResult()
{
}

ListFindingsReportsResult::ListFindingsReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFindingsReportsResult& ListFindingsReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("findingsReportSummaries"))
  {
    Aws::Utils::Array<JsonView> findingsReportSummariesJsonList = jsonValue.GetArray("findingsReportSummaries");
    for(unsigned findingsReportSummariesIndex = 0; findingsReportSummariesIndex < findingsReportSummariesJsonList.GetLength(); ++findingsReportSummariesIndex)
    {
      m_findingsReportSummaries.push_back(findingsReportSummariesJsonList[findingsReportSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
