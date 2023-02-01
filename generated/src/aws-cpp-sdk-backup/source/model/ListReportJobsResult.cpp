/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListReportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReportJobsResult::ListReportJobsResult()
{
}

ListReportJobsResult::ListReportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReportJobsResult& ListReportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportJobs"))
  {
    Aws::Utils::Array<JsonView> reportJobsJsonList = jsonValue.GetArray("ReportJobs");
    for(unsigned reportJobsIndex = 0; reportJobsIndex < reportJobsJsonList.GetLength(); ++reportJobsIndex)
    {
      m_reportJobs.push_back(reportJobsJsonList[reportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
