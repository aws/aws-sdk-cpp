/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/GetMergeCasesStatusResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMergeCasesStatusResult::GetMergeCasesStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMergeCasesStatusResult& GetMergeCasesStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = MergeStatusMapper::GetMergeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryCaseId")) {
    m_primaryCaseId = jsonValue.GetString("primaryCaseId");
    m_primaryCaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secondaryCaseIds")) {
    Aws::Utils::Array<JsonView> secondaryCaseIdsJsonList = jsonValue.GetArray("secondaryCaseIds");
    for (unsigned secondaryCaseIdsIndex = 0; secondaryCaseIdsIndex < secondaryCaseIdsJsonList.GetLength(); ++secondaryCaseIdsIndex) {
      m_secondaryCaseIds.push_back(secondaryCaseIdsJsonList[secondaryCaseIdsIndex].AsString());
    }
    m_secondaryCaseIdsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
