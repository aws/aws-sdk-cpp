/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetPermissionGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPermissionGroupResult::GetPermissionGroupResult()
{
}

GetPermissionGroupResult::GetPermissionGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPermissionGroupResult& GetPermissionGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("permissionGroup"))
  {
    m_permissionGroup = jsonValue.GetObject("permissionGroup");

  }



  return *this;
}
