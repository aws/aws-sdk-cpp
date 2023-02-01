/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetUserDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserDetailsResult::GetUserDetailsResult()
{
}

GetUserDetailsResult::GetUserDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUserDetailsResult& GetUserDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

  }

  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("primaryEmail"))
  {
    m_primaryEmail = jsonValue.GetObject("primaryEmail");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }



  return *this;
}
