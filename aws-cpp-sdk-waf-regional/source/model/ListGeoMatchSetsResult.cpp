/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ListGeoMatchSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGeoMatchSetsResult::ListGeoMatchSetsResult()
{
}

ListGeoMatchSetsResult::ListGeoMatchSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGeoMatchSetsResult& ListGeoMatchSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("GeoMatchSets"))
  {
    Aws::Utils::Array<JsonView> geoMatchSetsJsonList = jsonValue.GetArray("GeoMatchSets");
    for(unsigned geoMatchSetsIndex = 0; geoMatchSetsIndex < geoMatchSetsJsonList.GetLength(); ++geoMatchSetsIndex)
    {
      m_geoMatchSets.push_back(geoMatchSetsJsonList[geoMatchSetsIndex].AsObject());
    }
  }



  return *this;
}
