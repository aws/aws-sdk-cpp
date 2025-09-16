/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/TestPayloadStructureResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestPayloadStructureResult::TestPayloadStructureResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

TestPayloadStructureResult& TestPayloadStructureResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  m_payloadConfig = jsonValue;
  m_payloadConfigHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& testIdIter = headers.find("x-amz-test-id");
  if (testIdIter != headers.end()) {
    m_testId = testIdIter->second;
    m_testIdHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
