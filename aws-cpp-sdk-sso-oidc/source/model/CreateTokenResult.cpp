/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/CreateTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTokenResult::CreateTokenResult() : 
    m_expiresIn(0)
{
}

CreateTokenResult::CreateTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_expiresIn(0)
{
  *this = result;
}

CreateTokenResult& CreateTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");

  }

  if(jsonValue.ValueExists("tokenType"))
  {
    m_tokenType = jsonValue.GetString("tokenType");

  }

  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");

  }

  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");

  }

  if(jsonValue.ValueExists("idToken"))
  {
    m_idToken = jsonValue.GetString("idToken");

  }



  return *this;
}
