/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ListDatasetGenerationsResult.h>
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

ListDatasetGenerationsResult::ListDatasetGenerationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDatasetGenerationsResult& ListDatasetGenerationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("datasetGenerations")) {
    Aws::Utils::Array<JsonView> datasetGenerationsJsonList = jsonValue.GetArray("datasetGenerations");
    for (unsigned datasetGenerationsIndex = 0; datasetGenerationsIndex < datasetGenerationsJsonList.GetLength();
         ++datasetGenerationsIndex) {
      m_datasetGenerations.push_back(datasetGenerationsJsonList[datasetGenerationsIndex].AsObject());
    }
    m_datasetGenerationsHasBeenSet = true;
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
