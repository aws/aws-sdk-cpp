/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/InvokeResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeResult::InvokeResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

InvokeResult& InvokeResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_payload = result.TakeOwnershipOfPayload();
  m_payloadHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& functionErrorIter = headers.find("x-amz-function-error");
  if (functionErrorIter != headers.end()) {
    m_functionError = functionErrorIter->second;
    m_functionErrorHasBeenSet = true;
  }

  const auto& logResultIter = headers.find("x-amz-log-result");
  if (logResultIter != headers.end()) {
    m_logResult = logResultIter->second;
    m_logResultHasBeenSet = true;
  }

  const auto& executedVersionIter = headers.find("x-amz-executed-version");
  if (executedVersionIter != headers.end()) {
    m_executedVersion = executedVersionIter->second;
    m_executedVersionHasBeenSet = true;
  }

  const auto& durableExecutionArnIter = headers.find("x-amz-durable-execution-arn");
  if (durableExecutionArnIter != headers.end()) {
    m_durableExecutionArn = durableExecutionArnIter->second;
    m_durableExecutionArnHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_statusCode = static_cast<int>(result.GetResponseCode());
  m_statusCodeHasBeenSet = true;
  return *this;
}
