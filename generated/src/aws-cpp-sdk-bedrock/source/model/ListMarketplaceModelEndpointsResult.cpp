/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListMarketplaceModelEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMarketplaceModelEndpointsResult::ListMarketplaceModelEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMarketplaceModelEndpointsResult& ListMarketplaceModelEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("marketplaceModelEndpoints"))
  {
    Aws::Utils::Array<JsonView> marketplaceModelEndpointsJsonList = jsonValue.GetArray("marketplaceModelEndpoints");
    for(unsigned marketplaceModelEndpointsIndex = 0; marketplaceModelEndpointsIndex < marketplaceModelEndpointsJsonList.GetLength(); ++marketplaceModelEndpointsIndex)
    {
      m_marketplaceModelEndpoints.push_back(marketplaceModelEndpointsJsonList[marketplaceModelEndpointsIndex].AsObject());
    }
    m_marketplaceModelEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
