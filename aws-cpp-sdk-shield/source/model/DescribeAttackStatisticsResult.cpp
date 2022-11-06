/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeAttackStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAttackStatisticsResult::DescribeAttackStatisticsResult()
{
}

DescribeAttackStatisticsResult::DescribeAttackStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAttackStatisticsResult& DescribeAttackStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TimeRange"))
  {
    m_timeRange = jsonValue.GetObject("TimeRange");

  }

  if(jsonValue.ValueExists("DataItems"))
  {
    Aws::Utils::Array<JsonView> dataItemsJsonList = jsonValue.GetArray("DataItems");
    for(unsigned dataItemsIndex = 0; dataItemsIndex < dataItemsJsonList.GetLength(); ++dataItemsIndex)
    {
      m_dataItems.push_back(dataItemsJsonList[dataItemsIndex].AsObject());
    }
  }



  return *this;
}
