/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/ListOriginEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOriginEndpointsResult::ListOriginEndpointsResult()
{
}

ListOriginEndpointsResult::ListOriginEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOriginEndpointsResult& ListOriginEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("originEndpoints"))
  {
    Aws::Utils::Array<JsonView> originEndpointsJsonList = jsonValue.GetArray("originEndpoints");
    for(unsigned originEndpointsIndex = 0; originEndpointsIndex < originEndpointsJsonList.GetLength(); ++originEndpointsIndex)
    {
      m_originEndpoints.push_back(originEndpointsJsonList[originEndpointsIndex].AsObject());
    }
  }



  return *this;
}
