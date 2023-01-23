/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCoverageStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoverageStatisticsResult::ListCoverageStatisticsResult() : 
    m_totalCounts(0)
{
}

ListCoverageStatisticsResult::ListCoverageStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCounts(0)
{
  *this = result;
}

ListCoverageStatisticsResult& ListCoverageStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("countsByGroup"))
  {
    Aws::Utils::Array<JsonView> countsByGroupJsonList = jsonValue.GetArray("countsByGroup");
    for(unsigned countsByGroupIndex = 0; countsByGroupIndex < countsByGroupJsonList.GetLength(); ++countsByGroupIndex)
    {
      m_countsByGroup.push_back(countsByGroupJsonList[countsByGroupIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("totalCounts"))
  {
    m_totalCounts = jsonValue.GetInt64("totalCounts");

  }



  return *this;
}
