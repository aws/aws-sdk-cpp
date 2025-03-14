﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserPoolMfaConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SetUserPoolMfaConfigResult::SetUserPoolMfaConfigResult() : 
    m_mfaConfiguration(UserPoolMfaType::NOT_SET)
{
}

SetUserPoolMfaConfigResult::SetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SetUserPoolMfaConfigResult()
{
  *this = result;
}

SetUserPoolMfaConfigResult& SetUserPoolMfaConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SmsMfaConfiguration"))
  {
    m_smsMfaConfiguration = jsonValue.GetObject("SmsMfaConfiguration");

  }

  if(jsonValue.ValueExists("SoftwareTokenMfaConfiguration"))
  {
    m_softwareTokenMfaConfiguration = jsonValue.GetObject("SoftwareTokenMfaConfiguration");

  }

  if(jsonValue.ValueExists("EmailMfaConfiguration"))
  {
    m_emailMfaConfiguration = jsonValue.GetObject("EmailMfaConfiguration");

  }

  if(jsonValue.ValueExists("MfaConfiguration"))
  {
    m_mfaConfiguration = UserPoolMfaTypeMapper::GetUserPoolMfaTypeForName(jsonValue.GetString("MfaConfiguration"));

  }

  if(jsonValue.ValueExists("WebAuthnConfiguration"))
  {
    m_webAuthnConfiguration = jsonValue.GetObject("WebAuthnConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
