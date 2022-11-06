/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/ListReportDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReportDefinitionsResult::ListReportDefinitionsResult()
{
}

ListReportDefinitionsResult::ListReportDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReportDefinitionsResult& ListReportDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reportDefinitions"))
  {
    Aws::Utils::Array<JsonView> reportDefinitionsJsonList = jsonValue.GetArray("reportDefinitions");
    for(unsigned reportDefinitionsIndex = 0; reportDefinitionsIndex < reportDefinitionsJsonList.GetLength(); ++reportDefinitionsIndex)
    {
      m_reportDefinitions.push_back(reportDefinitionsJsonList[reportDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
