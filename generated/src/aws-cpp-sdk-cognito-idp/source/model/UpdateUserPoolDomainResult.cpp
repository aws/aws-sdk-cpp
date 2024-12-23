﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateUserPoolDomainResult.h>
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

UpdateUserPoolDomainResult::UpdateUserPoolDomainResult() : 
    m_managedLoginVersion(0)
{
}

UpdateUserPoolDomainResult::UpdateUserPoolDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateUserPoolDomainResult()
{
  *this = result;
}

UpdateUserPoolDomainResult& UpdateUserPoolDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedLoginVersion"))
  {
    m_managedLoginVersion = jsonValue.GetInteger("ManagedLoginVersion");

  }

  if(jsonValue.ValueExists("CloudFrontDomain"))
  {
    m_cloudFrontDomain = jsonValue.GetString("CloudFrontDomain");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
