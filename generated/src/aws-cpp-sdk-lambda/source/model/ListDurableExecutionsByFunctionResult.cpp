/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDurableExecutionsByFunctionResult::ListDurableExecutionsByFunctionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListDurableExecutionsByFunctionResult& ListDurableExecutionsByFunctionResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DurableExecutions")) {
    Aws::Utils::Array<JsonView> durableExecutionsJsonList = jsonValue.GetArray("DurableExecutions");
    for (unsigned durableExecutionsIndex = 0; durableExecutionsIndex < durableExecutionsJsonList.GetLength(); ++durableExecutionsIndex) {
      m_durableExecutions.push_back(durableExecutionsJsonList[durableExecutionsIndex].AsObject());
    }
    m_durableExecutionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
