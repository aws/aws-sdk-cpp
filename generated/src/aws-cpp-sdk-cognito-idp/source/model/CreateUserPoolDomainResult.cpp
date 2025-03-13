/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CreateUserPoolDomainResult.h>
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

CreateUserPoolDomainResult::CreateUserPoolDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateUserPoolDomainResult& CreateUserPoolDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedLoginVersion"))
  {
    m_managedLoginVersion = jsonValue.GetInteger("ManagedLoginVersion");
    m_managedLoginVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudFrontDomain"))
  {
    m_cloudFrontDomain = jsonValue.GetString("CloudFrontDomain");
    m_cloudFrontDomainHasBeenSet = true;
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
