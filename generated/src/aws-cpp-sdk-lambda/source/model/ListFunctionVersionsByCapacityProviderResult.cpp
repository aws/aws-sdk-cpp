/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/ListFunctionVersionsByCapacityProviderResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFunctionVersionsByCapacityProviderResult::ListFunctionVersionsByCapacityProviderResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListFunctionVersionsByCapacityProviderResult& ListFunctionVersionsByCapacityProviderResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CapacityProviderArn")) {
    m_capacityProviderArn = jsonValue.GetString("CapacityProviderArn");
    m_capacityProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionVersions")) {
    Aws::Utils::Array<JsonView> functionVersionsJsonList = jsonValue.GetArray("FunctionVersions");
    for (unsigned functionVersionsIndex = 0; functionVersionsIndex < functionVersionsJsonList.GetLength(); ++functionVersionsIndex) {
      m_functionVersions.push_back(functionVersionsJsonList[functionVersionsIndex].AsObject());
    }
    m_functionVersionsHasBeenSet = true;
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
