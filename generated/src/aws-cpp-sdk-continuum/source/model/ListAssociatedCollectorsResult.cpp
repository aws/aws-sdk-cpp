/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ListAssociatedCollectorsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedCollectorsResult::ListAssociatedCollectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAssociatedCollectorsResult& ListAssociatedCollectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("associatedCollectors")) {
    Aws::Utils::Array<JsonView> associatedCollectorsJsonList = jsonValue.GetArray("associatedCollectors");
    for (unsigned associatedCollectorsIndex = 0; associatedCollectorsIndex < associatedCollectorsJsonList.GetLength();
         ++associatedCollectorsIndex) {
      m_associatedCollectors.push_back(associatedCollectorsJsonList[associatedCollectorsIndex].AsObject());
    }
    m_associatedCollectorsHasBeenSet = true;
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
