﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreatePolicyVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePolicyVersionResult::CreatePolicyVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePolicyVersionResult& CreatePolicyVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");
    m_policyDocumentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyVersionId"))
  {
    m_policyVersionId = jsonValue.GetString("policyVersionId");
    m_policyVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");
    m_isDefaultVersionHasBeenSet = true;
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
