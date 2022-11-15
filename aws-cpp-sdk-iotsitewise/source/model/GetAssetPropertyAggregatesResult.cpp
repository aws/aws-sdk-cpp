/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GetAssetPropertyAggregatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssetPropertyAggregatesResult::GetAssetPropertyAggregatesResult()
{
}

GetAssetPropertyAggregatesResult::GetAssetPropertyAggregatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssetPropertyAggregatesResult& GetAssetPropertyAggregatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("aggregatedValues"))
  {
    Aws::Utils::Array<JsonView> aggregatedValuesJsonList = jsonValue.GetArray("aggregatedValues");
    for(unsigned aggregatedValuesIndex = 0; aggregatedValuesIndex < aggregatedValuesJsonList.GetLength(); ++aggregatedValuesIndex)
    {
      m_aggregatedValues.push_back(aggregatedValuesJsonList[aggregatedValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
