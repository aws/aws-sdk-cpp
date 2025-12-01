/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateWorkspaceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateWorkspaceResult::DisassociateWorkspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DisassociateWorkspaceResult& DisassociateWorkspaceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SuccessfulList")) {
    Aws::Utils::Array<JsonView> successfulListJsonList = jsonValue.GetArray("SuccessfulList");
    for (unsigned successfulListIndex = 0; successfulListIndex < successfulListJsonList.GetLength(); ++successfulListIndex) {
      m_successfulList.push_back(successfulListJsonList[successfulListIndex].AsObject());
    }
    m_successfulListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedList")) {
    Aws::Utils::Array<JsonView> failedListJsonList = jsonValue.GetArray("FailedList");
    for (unsigned failedListIndex = 0; failedListIndex < failedListJsonList.GetLength(); ++failedListIndex) {
      m_failedList.push_back(failedListJsonList[failedListIndex].AsObject());
    }
    m_failedListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
