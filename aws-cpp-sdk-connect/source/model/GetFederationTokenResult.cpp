/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetFederationTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFederationTokenResult::GetFederationTokenResult()
{
}

GetFederationTokenResult::GetFederationTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFederationTokenResult& GetFederationTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

  }

  if(jsonValue.ValueExists("SignInUrl"))
  {
    m_signInUrl = jsonValue.GetString("SignInUrl");

  }

  if(jsonValue.ValueExists("UserArn"))
  {
    m_userArn = jsonValue.GetString("UserArn");

  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }



  return *this;
}
