/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ResendConfirmationCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResendConfirmationCodeResult::ResendConfirmationCodeResult()
{
}

ResendConfirmationCodeResult::ResendConfirmationCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResendConfirmationCodeResult& ResendConfirmationCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeDeliveryDetails"))
  {
    m_codeDeliveryDetails = jsonValue.GetObject("CodeDeliveryDetails");

  }



  return *this;
}
