/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/ListPackagingGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackagingGroupsResult::ListPackagingGroupsResult()
{
}

ListPackagingGroupsResult::ListPackagingGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPackagingGroupsResult& ListPackagingGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("packagingGroups"))
  {
    Aws::Utils::Array<JsonView> packagingGroupsJsonList = jsonValue.GetArray("packagingGroups");
    for(unsigned packagingGroupsIndex = 0; packagingGroupsIndex < packagingGroupsJsonList.GetLength(); ++packagingGroupsIndex)
    {
      m_packagingGroups.push_back(packagingGroupsJsonList[packagingGroupsIndex].AsObject());
    }
  }



  return *this;
}
