/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/DescribeReportDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReportDefinitionsResult::DescribeReportDefinitionsResult()
{
}

DescribeReportDefinitionsResult::DescribeReportDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReportDefinitionsResult& DescribeReportDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportDefinitions"))
  {
    Aws::Utils::Array<JsonView> reportDefinitionsJsonList = jsonValue.GetArray("ReportDefinitions");
    for(unsigned reportDefinitionsIndex = 0; reportDefinitionsIndex < reportDefinitionsJsonList.GetLength(); ++reportDefinitionsIndex)
    {
      m_reportDefinitions.push_back(reportDefinitionsJsonList[reportDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
