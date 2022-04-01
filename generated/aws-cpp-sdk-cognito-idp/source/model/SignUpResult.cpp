/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SignUpResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SignUpResult::SignUpResult() : 
    m_userConfirmed(false)
{
}

SignUpResult::SignUpResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_userConfirmed(false)
{
  *this = result;
}

SignUpResult& SignUpResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserConfirmed"))
  {
    m_userConfirmed = jsonValue.GetBool("UserConfirmed");

  }

  if(jsonValue.ValueExists("CodeDeliveryDetails"))
  {
    m_codeDeliveryDetails = jsonValue.GetObject("CodeDeliveryDetails");

  }

  if(jsonValue.ValueExists("UserSub"))
  {
    m_userSub = jsonValue.GetString("UserSub");

  }



  return *this;
}
