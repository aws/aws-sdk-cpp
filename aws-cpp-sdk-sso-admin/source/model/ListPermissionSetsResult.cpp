/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListPermissionSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPermissionSetsResult::ListPermissionSetsResult()
{
}

ListPermissionSetsResult::ListPermissionSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPermissionSetsResult& ListPermissionSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PermissionSets"))
  {
    Aws::Utils::Array<JsonView> permissionSetsJsonList = jsonValue.GetArray("PermissionSets");
    for(unsigned permissionSetsIndex = 0; permissionSetsIndex < permissionSetsJsonList.GetLength(); ++permissionSetsIndex)
    {
      m_permissionSets.push_back(permissionSetsJsonList[permissionSetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
