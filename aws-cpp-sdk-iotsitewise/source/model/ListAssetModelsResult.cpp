/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssetModelsResult::ListAssetModelsResult()
{
}

ListAssetModelsResult::ListAssetModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssetModelsResult& ListAssetModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelSummaries"))
  {
    Aws::Utils::Array<JsonView> assetModelSummariesJsonList = jsonValue.GetArray("assetModelSummaries");
    for(unsigned assetModelSummariesIndex = 0; assetModelSummariesIndex < assetModelSummariesJsonList.GetLength(); ++assetModelSummariesIndex)
    {
      m_assetModelSummaries.push_back(assetModelSummariesJsonList[assetModelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
