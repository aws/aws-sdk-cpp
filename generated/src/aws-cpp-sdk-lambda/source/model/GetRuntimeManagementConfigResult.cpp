﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/GetRuntimeManagementConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRuntimeManagementConfigResult::GetRuntimeManagementConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRuntimeManagementConfigResult& GetRuntimeManagementConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpdateRuntimeOn"))
  {
    m_updateRuntimeOn = UpdateRuntimeOnMapper::GetUpdateRuntimeOnForName(jsonValue.GetString("UpdateRuntimeOn"));
    m_updateRuntimeOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeVersionArn"))
  {
    m_runtimeVersionArn = jsonValue.GetString("RuntimeVersionArn");
    m_runtimeVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
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
