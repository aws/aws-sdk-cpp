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

#include <aws/cognito-idp/model/SetUserPoolMfaConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SetUserPoolMfaConfigResult::SetUserPoolMfaConfigResult() : 
    m_mfaConfiguration(UserPoolMfaType::NOT_SET)
{
}

SetUserPoolMfaConfigResult::SetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_mfaConfiguration(UserPoolMfaType::NOT_SET)
{
  *this = result;
}

SetUserPoolMfaConfigResult& SetUserPoolMfaConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("SmsMfaConfiguration"))
  {
    m_smsMfaConfiguration = jsonValue.GetObject("SmsMfaConfiguration");

  }

  if(jsonValue.ValueExists("SoftwareTokenMfaConfiguration"))
  {
    m_softwareTokenMfaConfiguration = jsonValue.GetObject("SoftwareTokenMfaConfiguration");

  }

  if(jsonValue.ValueExists("MfaConfiguration"))
  {
    m_mfaConfiguration = UserPoolMfaTypeMapper::GetUserPoolMfaTypeForName(jsonValue.GetString("MfaConfiguration"));

  }



  return *this;
}
