/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetFindingsStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingsStatisticsResult::GetFindingsStatisticsResult()
{
}

GetFindingsStatisticsResult::GetFindingsStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingsStatisticsResult& GetFindingsStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("findingStatistics"))
  {
    m_findingStatistics = jsonValue.GetObject("findingStatistics");

  }



  return *this;
}
