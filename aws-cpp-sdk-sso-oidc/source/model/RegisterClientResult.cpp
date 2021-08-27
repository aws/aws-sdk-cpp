/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/RegisterClientResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterClientResult::RegisterClientResult() : 
    m_clientIdIssuedAt(0),
    m_clientSecretExpiresAt(0)
{
}

RegisterClientResult::RegisterClientResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_clientIdIssuedAt(0),
    m_clientSecretExpiresAt(0)
{
  *this = result;
}

RegisterClientResult& RegisterClientResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

  }

  if(jsonValue.ValueExists("clientSecret"))
  {
    m_clientSecret = jsonValue.GetString("clientSecret");

  }

  if(jsonValue.ValueExists("clientIdIssuedAt"))
  {
    m_clientIdIssuedAt = jsonValue.GetInt64("clientIdIssuedAt");

  }

  if(jsonValue.ValueExists("clientSecretExpiresAt"))
  {
    m_clientSecretExpiresAt = jsonValue.GetInt64("clientSecretExpiresAt");

  }

  if(jsonValue.ValueExists("authorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("authorizationEndpoint");

  }

  if(jsonValue.ValueExists("tokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("tokenEndpoint");

  }



  return *this;
}
