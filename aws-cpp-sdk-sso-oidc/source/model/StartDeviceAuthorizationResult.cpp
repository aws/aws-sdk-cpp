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

#include <aws/sso-oidc/model/StartDeviceAuthorizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDeviceAuthorizationResult::StartDeviceAuthorizationResult() : 
    m_expiresIn(0),
    m_interval(0)
{
}

StartDeviceAuthorizationResult::StartDeviceAuthorizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_expiresIn(0),
    m_interval(0)
{
  *this = result;
}

StartDeviceAuthorizationResult& StartDeviceAuthorizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceCode"))
  {
    m_deviceCode = jsonValue.GetString("deviceCode");

  }

  if(jsonValue.ValueExists("userCode"))
  {
    m_userCode = jsonValue.GetString("userCode");

  }

  if(jsonValue.ValueExists("verificationUri"))
  {
    m_verificationUri = jsonValue.GetString("verificationUri");

  }

  if(jsonValue.ValueExists("verificationUriComplete"))
  {
    m_verificationUriComplete = jsonValue.GetString("verificationUriComplete");

  }

  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");

  }

  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetInteger("interval");

  }



  return *this;
}
