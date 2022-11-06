/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ListPermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPermissionsResult::ListPermissionsResult()
{
}

ListPermissionsResult::ListPermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPermissionsResult& ListPermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PrincipalResourcePermissions"))
  {
    Aws::Utils::Array<JsonView> principalResourcePermissionsJsonList = jsonValue.GetArray("PrincipalResourcePermissions");
    for(unsigned principalResourcePermissionsIndex = 0; principalResourcePermissionsIndex < principalResourcePermissionsJsonList.GetLength(); ++principalResourcePermissionsIndex)
    {
      m_principalResourcePermissions.push_back(principalResourcePermissionsJsonList[principalResourcePermissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
