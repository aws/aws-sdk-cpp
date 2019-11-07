/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
