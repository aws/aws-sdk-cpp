/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInterpolatedAssetPropertyValuesResult::GetInterpolatedAssetPropertyValuesResult()
{
}

GetInterpolatedAssetPropertyValuesResult::GetInterpolatedAssetPropertyValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInterpolatedAssetPropertyValuesResult& GetInterpolatedAssetPropertyValuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("interpolatedAssetPropertyValues"))
  {
    Aws::Utils::Array<JsonView> interpolatedAssetPropertyValuesJsonList = jsonValue.GetArray("interpolatedAssetPropertyValues");
    for(unsigned interpolatedAssetPropertyValuesIndex = 0; interpolatedAssetPropertyValuesIndex < interpolatedAssetPropertyValuesJsonList.GetLength(); ++interpolatedAssetPropertyValuesIndex)
    {
      m_interpolatedAssetPropertyValues.push_back(interpolatedAssetPropertyValuesJsonList[interpolatedAssetPropertyValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
