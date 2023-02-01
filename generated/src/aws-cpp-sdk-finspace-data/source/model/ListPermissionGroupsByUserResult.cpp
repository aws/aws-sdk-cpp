/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ListPermissionGroupsByUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPermissionGroupsByUserResult::ListPermissionGroupsByUserResult()
{
}

ListPermissionGroupsByUserResult::ListPermissionGroupsByUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPermissionGroupsByUserResult& ListPermissionGroupsByUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("permissionGroups"))
  {
    Aws::Utils::Array<JsonView> permissionGroupsJsonList = jsonValue.GetArray("permissionGroups");
    for(unsigned permissionGroupsIndex = 0; permissionGroupsIndex < permissionGroupsJsonList.GetLength(); ++permissionGroupsIndex)
    {
      m_permissionGroups.push_back(permissionGroupsJsonList[permissionGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
