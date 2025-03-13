/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/model/GetPrincipalTagAttributeMapResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPrincipalTagAttributeMapResult::GetPrincipalTagAttributeMapResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPrincipalTagAttributeMapResult& GetPrincipalTagAttributeMapResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");
    m_identityPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderName"))
  {
    m_identityProviderName = jsonValue.GetString("IdentityProviderName");
    m_identityProviderNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseDefaults"))
  {
    m_useDefaults = jsonValue.GetBool("UseDefaults");
    m_useDefaultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrincipalTags"))
  {
    Aws::Map<Aws::String, JsonView> principalTagsJsonMap = jsonValue.GetObject("PrincipalTags").GetAllObjects();
    for(auto& principalTagsItem : principalTagsJsonMap)
    {
      m_principalTags[principalTagsItem.first] = principalTagsItem.second.AsString();
    }
    m_principalTagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
