/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/GetFunctionScalingConfigResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFunctionScalingConfigResult::GetFunctionScalingConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFunctionScalingConfigResult& GetFunctionScalingConfigResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("FunctionArn")) {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppliedFunctionScalingConfig")) {
    m_appliedFunctionScalingConfig = jsonValue.GetObject("AppliedFunctionScalingConfig");
    m_appliedFunctionScalingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestedFunctionScalingConfig")) {
    m_requestedFunctionScalingConfig = jsonValue.GetObject("RequestedFunctionScalingConfig");
    m_requestedFunctionScalingConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
