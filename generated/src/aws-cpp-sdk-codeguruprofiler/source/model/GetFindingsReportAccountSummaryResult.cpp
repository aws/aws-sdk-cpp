/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingsReportAccountSummaryResult::GetFindingsReportAccountSummaryResult()
{
}

GetFindingsReportAccountSummaryResult::GetFindingsReportAccountSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingsReportAccountSummaryResult& GetFindingsReportAccountSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("reportSummaries"))
  {
    Aws::Utils::Array<JsonView> reportSummariesJsonList = jsonValue.GetArray("reportSummaries");
    for(unsigned reportSummariesIndex = 0; reportSummariesIndex < reportSummariesJsonList.GetLength(); ++reportSummariesIndex)
    {
      m_reportSummaries.push_back(reportSummariesJsonList[reportSummariesIndex].AsObject());
    }
  }



  return *this;
}
