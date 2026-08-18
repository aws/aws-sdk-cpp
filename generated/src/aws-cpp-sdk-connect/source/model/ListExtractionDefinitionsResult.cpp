/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListExtractionDefinitionsResult.h>
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

ListExtractionDefinitionsResult::ListExtractionDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListExtractionDefinitionsResult& ListExtractionDefinitionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExtractionDefinitionSummaryList")) {
    Aws::Utils::Array<JsonView> extractionDefinitionSummaryListJsonList = jsonValue.GetArray("ExtractionDefinitionSummaryList");
    for (unsigned extractionDefinitionSummaryListIndex = 0;
         extractionDefinitionSummaryListIndex < extractionDefinitionSummaryListJsonList.GetLength();
         ++extractionDefinitionSummaryListIndex) {
      m_extractionDefinitionSummaryList.push_back(extractionDefinitionSummaryListJsonList[extractionDefinitionSummaryListIndex].AsObject());
    }
    m_extractionDefinitionSummaryListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
