/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/GetAccountAliasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountAliasResult::GetAccountAliasResult()
{
}

GetAccountAliasResult::GetAccountAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAccountAliasResult& GetAccountAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountAlias"))
  {
    m_accountAlias = jsonValue.GetString("accountAlias");

  }



  return *this;
}
