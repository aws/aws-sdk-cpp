/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/ListPackagingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackagingConfigurationsResult::ListPackagingConfigurationsResult()
{
}

ListPackagingConfigurationsResult::ListPackagingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPackagingConfigurationsResult& ListPackagingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("packagingConfigurations"))
  {
    Aws::Utils::Array<JsonView> packagingConfigurationsJsonList = jsonValue.GetArray("packagingConfigurations");
    for(unsigned packagingConfigurationsIndex = 0; packagingConfigurationsIndex < packagingConfigurationsJsonList.GetLength(); ++packagingConfigurationsIndex)
    {
      m_packagingConfigurations.push_back(packagingConfigurationsJsonList[packagingConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
