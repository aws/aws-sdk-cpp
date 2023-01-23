/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListRoleAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoleAliasesResult::ListRoleAliasesResult()
{
}

ListRoleAliasesResult::ListRoleAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoleAliasesResult& ListRoleAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleAliases"))
  {
    Aws::Utils::Array<JsonView> roleAliasesJsonList = jsonValue.GetArray("roleAliases");
    for(unsigned roleAliasesIndex = 0; roleAliasesIndex < roleAliasesJsonList.GetLength(); ++roleAliasesIndex)
    {
      m_roleAliases.push_back(roleAliasesJsonList[roleAliasesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextMarker"))
  {
    m_nextMarker = jsonValue.GetString("nextMarker");

  }



  return *this;
}
