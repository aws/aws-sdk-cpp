/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateRoleAliasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRoleAliasResult::UpdateRoleAliasResult()
{
}

UpdateRoleAliasResult::UpdateRoleAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateRoleAliasResult& UpdateRoleAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleAlias"))
  {
    m_roleAlias = jsonValue.GetString("roleAlias");

  }

  if(jsonValue.ValueExists("roleAliasArn"))
  {
    m_roleAliasArn = jsonValue.GetString("roleAliasArn");

  }



  return *this;
}
