/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssetPropertiesResult::ListAssetPropertiesResult()
{
}

ListAssetPropertiesResult::ListAssetPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssetPropertiesResult& ListAssetPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetPropertySummaries"))
  {
    Aws::Utils::Array<JsonView> assetPropertySummariesJsonList = jsonValue.GetArray("assetPropertySummaries");
    for(unsigned assetPropertySummariesIndex = 0; assetPropertySummariesIndex < assetPropertySummariesJsonList.GetLength(); ++assetPropertySummariesIndex)
    {
      m_assetPropertySummaries.push_back(assetPropertySummariesJsonList[assetPropertySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
