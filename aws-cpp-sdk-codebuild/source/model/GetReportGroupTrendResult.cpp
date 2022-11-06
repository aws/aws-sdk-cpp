/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/GetReportGroupTrendResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReportGroupTrendResult::GetReportGroupTrendResult()
{
}

GetReportGroupTrendResult::GetReportGroupTrendResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReportGroupTrendResult& GetReportGroupTrendResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stats"))
  {
    m_stats = jsonValue.GetObject("stats");

  }

  if(jsonValue.ValueExists("rawData"))
  {
    Aws::Utils::Array<JsonView> rawDataJsonList = jsonValue.GetArray("rawData");
    for(unsigned rawDataIndex = 0; rawDataIndex < rawDataJsonList.GetLength(); ++rawDataIndex)
    {
      m_rawData.push_back(rawDataJsonList[rawDataIndex].AsObject());
    }
  }



  return *this;
}
