/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTokenResult::CreateTokenResult() : 
    m_tokenType(TokenType::NOT_SET)
{
}

CreateTokenResult::CreateTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_tokenType(TokenType::NOT_SET)
{
  *this = result;
}

CreateTokenResult& CreateTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TokenId"))
  {
    m_tokenId = jsonValue.GetString("TokenId");

  }

  if(jsonValue.ValueExists("TokenType"))
  {
    m_tokenType = TokenTypeMapper::GetTokenTypeForName(jsonValue.GetString("TokenType"));

  }

  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
