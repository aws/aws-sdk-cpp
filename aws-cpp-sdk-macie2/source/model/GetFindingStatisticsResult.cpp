﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetFindingStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingStatisticsResult::GetFindingStatisticsResult()
{
}

GetFindingStatisticsResult::GetFindingStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingStatisticsResult& GetFindingStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("countsByGroup"))
  {
    Array<JsonView> countsByGroupJsonList = jsonValue.GetArray("countsByGroup");
    for(unsigned countsByGroupIndex = 0; countsByGroupIndex < countsByGroupJsonList.GetLength(); ++countsByGroupIndex)
    {
      m_countsByGroup.push_back(countsByGroupJsonList[countsByGroupIndex].AsObject());
    }
  }



  return *this;
}
