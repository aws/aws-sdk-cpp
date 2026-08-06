/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AgentRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDiscoverableRegistryRecordsResult::ListDiscoverableRegistryRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListDiscoverableRegistryRecordsResult& ListDiscoverableRegistryRecordsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("registryRecords")) {
    Aws::Utils::Array<JsonView> registryRecordsJsonList = jsonValue.GetArray("registryRecords");
    for (unsigned registryRecordsIndex = 0; registryRecordsIndex < registryRecordsJsonList.GetLength(); ++registryRecordsIndex) {
      m_registryRecords.push_back(registryRecordsJsonList[registryRecordsIndex].AsObject());
    }
    m_registryRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
