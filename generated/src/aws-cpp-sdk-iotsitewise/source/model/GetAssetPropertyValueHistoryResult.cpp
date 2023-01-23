/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssetPropertyValueHistoryResult::GetAssetPropertyValueHistoryResult()
{
}

GetAssetPropertyValueHistoryResult::GetAssetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssetPropertyValueHistoryResult& GetAssetPropertyValueHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetPropertyValueHistory"))
  {
    Aws::Utils::Array<JsonView> assetPropertyValueHistoryJsonList = jsonValue.GetArray("assetPropertyValueHistory");
    for(unsigned assetPropertyValueHistoryIndex = 0; assetPropertyValueHistoryIndex < assetPropertyValueHistoryJsonList.GetLength(); ++assetPropertyValueHistoryIndex)
    {
      m_assetPropertyValueHistory.push_back(assetPropertyValueHistoryJsonList[assetPropertyValueHistoryIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
