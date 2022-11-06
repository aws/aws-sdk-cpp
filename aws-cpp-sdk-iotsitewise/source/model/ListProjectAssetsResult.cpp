/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListProjectAssetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProjectAssetsResult::ListProjectAssetsResult()
{
}

ListProjectAssetsResult::ListProjectAssetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProjectAssetsResult& ListProjectAssetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetIds"))
  {
    Aws::Utils::Array<JsonView> assetIdsJsonList = jsonValue.GetArray("assetIds");
    for(unsigned assetIdsIndex = 0; assetIdsIndex < assetIdsJsonList.GetLength(); ++assetIdsIndex)
    {
      m_assetIds.push_back(assetIdsJsonList[assetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
