/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ForgotPasswordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ForgotPasswordResult::ForgotPasswordResult()
{
}

ForgotPasswordResult::ForgotPasswordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ForgotPasswordResult& ForgotPasswordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeDeliveryDetails"))
  {
    m_codeDeliveryDetails = jsonValue.GetObject("CodeDeliveryDetails");

  }



  return *this;
}
