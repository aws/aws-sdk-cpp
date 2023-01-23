/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetIdentityProviderByIdentifierResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityProviderByIdentifierResult::GetIdentityProviderByIdentifierResult()
{
}

GetIdentityProviderByIdentifierResult::GetIdentityProviderByIdentifierResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIdentityProviderByIdentifierResult& GetIdentityProviderByIdentifierResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityProvider"))
  {
    m_identityProvider = jsonValue.GetObject("IdentityProvider");

  }



  return *this;
}
