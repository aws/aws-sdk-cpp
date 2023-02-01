/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetModelPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssetModelPropertiesResult::ListAssetModelPropertiesResult()
{
}

ListAssetModelPropertiesResult::ListAssetModelPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssetModelPropertiesResult& ListAssetModelPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetModelPropertySummaries"))
  {
    Aws::Utils::Array<JsonView> assetModelPropertySummariesJsonList = jsonValue.GetArray("assetModelPropertySummaries");
    for(unsigned assetModelPropertySummariesIndex = 0; assetModelPropertySummariesIndex < assetModelPropertySummariesJsonList.GetLength(); ++assetModelPropertySummariesIndex)
    {
      m_assetModelPropertySummaries.push_back(assetModelPropertySummariesJsonList[assetModelPropertySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
