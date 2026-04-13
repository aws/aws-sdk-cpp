/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SearchRegistryRecordsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchRegistryRecordsResult::SearchRegistryRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchRegistryRecordsResult& SearchRegistryRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("registryRecords")) {
    Aws::Utils::Array<JsonView> registryRecordsJsonList = jsonValue.GetArray("registryRecords");
    for (unsigned registryRecordsIndex = 0; registryRecordsIndex < registryRecordsJsonList.GetLength(); ++registryRecordsIndex) {
      m_registryRecords.push_back(registryRecordsJsonList[registryRecordsIndex].AsObject());
    }
    m_registryRecordsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
