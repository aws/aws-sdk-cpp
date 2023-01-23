/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetAdminAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAdminAccountResult::GetAdminAccountResult() : 
    m_roleStatus(AccountRoleStatus::NOT_SET)
{
}

GetAdminAccountResult::GetAdminAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_roleStatus(AccountRoleStatus::NOT_SET)
{
  *this = result;
}

GetAdminAccountResult& GetAdminAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdminAccount"))
  {
    m_adminAccount = jsonValue.GetString("AdminAccount");

  }

  if(jsonValue.ValueExists("RoleStatus"))
  {
    m_roleStatus = AccountRoleStatusMapper::GetAccountRoleStatusForName(jsonValue.GetString("RoleStatus"));

  }



  return *this;
}
