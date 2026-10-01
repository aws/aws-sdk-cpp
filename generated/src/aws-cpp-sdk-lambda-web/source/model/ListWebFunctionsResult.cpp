/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-web/model/ListWebFunctionsResult.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebFunctionsResult::ListWebFunctionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWebFunctionsResult& ListWebFunctionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("functions")) {
    Aws::Utils::Array<JsonView> functionsJsonList = jsonValue.GetArray("functions");
    for (unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex) {
      m_functions.push_back(functionsJsonList[functionsIndex].AsObject());
    }
    m_functionsHasBeenSet = true;
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
