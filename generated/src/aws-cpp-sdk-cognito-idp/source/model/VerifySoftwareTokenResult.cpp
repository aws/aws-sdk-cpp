/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/VerifySoftwareTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifySoftwareTokenResult::VerifySoftwareTokenResult() : 
    m_status(VerifySoftwareTokenResponseType::NOT_SET)
{
}

VerifySoftwareTokenResult::VerifySoftwareTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(VerifySoftwareTokenResponseType::NOT_SET)
{
  *this = result;
}

VerifySoftwareTokenResult& VerifySoftwareTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = VerifySoftwareTokenResponseTypeMapper::GetVerifySoftwareTokenResponseTypeForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetString("Session");

  }



  return *this;
}
