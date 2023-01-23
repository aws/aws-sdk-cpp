/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListReportPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReportPlansResult::ListReportPlansResult()
{
}

ListReportPlansResult::ListReportPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReportPlansResult& ListReportPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportPlans"))
  {
    Aws::Utils::Array<JsonView> reportPlansJsonList = jsonValue.GetArray("ReportPlans");
    for(unsigned reportPlansIndex = 0; reportPlansIndex < reportPlansJsonList.GetLength(); ++reportPlansIndex)
    {
      m_reportPlans.push_back(reportPlansJsonList[reportPlansIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
