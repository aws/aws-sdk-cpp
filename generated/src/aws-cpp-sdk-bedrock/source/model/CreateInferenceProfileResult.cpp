﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateInferenceProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateInferenceProfileResult::CreateInferenceProfileResult() : 
    m_status(InferenceProfileStatus::NOT_SET)
{
}

CreateInferenceProfileResult::CreateInferenceProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateInferenceProfileResult()
{
  *this = result;
}

CreateInferenceProfileResult& CreateInferenceProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("inferenceProfileArn"))
  {
    m_inferenceProfileArn = jsonValue.GetString("inferenceProfileArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InferenceProfileStatusMapper::GetInferenceProfileStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
