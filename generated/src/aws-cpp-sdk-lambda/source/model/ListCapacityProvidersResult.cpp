/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/ListCapacityProvidersResult.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCapacityProvidersResult::ListCapacityProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListCapacityProvidersResult& ListCapacityProvidersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CapacityProviders")) {
    Aws::Utils::Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("CapacityProviders");
    for (unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex) {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsObject());
    }
    m_capacityProvidersHasBeenSet = true;
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
