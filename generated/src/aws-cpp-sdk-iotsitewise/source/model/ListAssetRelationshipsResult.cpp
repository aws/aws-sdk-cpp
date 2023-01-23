/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetRelationshipsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssetRelationshipsResult::ListAssetRelationshipsResult()
{
}

ListAssetRelationshipsResult::ListAssetRelationshipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssetRelationshipsResult& ListAssetRelationshipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetRelationshipSummaries"))
  {
    Aws::Utils::Array<JsonView> assetRelationshipSummariesJsonList = jsonValue.GetArray("assetRelationshipSummaries");
    for(unsigned assetRelationshipSummariesIndex = 0; assetRelationshipSummariesIndex < assetRelationshipSummariesJsonList.GetLength(); ++assetRelationshipSummariesIndex)
    {
      m_assetRelationshipSummaries.push_back(assetRelationshipSummariesJsonList[assetRelationshipSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
