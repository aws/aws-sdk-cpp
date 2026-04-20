/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/groundstation/model/ListAntennasResult.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAntennasResult::ListAntennasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAntennasResult& ListAntennasResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("antennaList")) {
    Aws::Utils::Array<JsonView> antennaListJsonList = jsonValue.GetArray("antennaList");
    for (unsigned antennaListIndex = 0; antennaListIndex < antennaListJsonList.GetLength(); ++antennaListIndex) {
      m_antennaList.push_back(antennaListJsonList[antennaListIndex].AsObject());
    }
    m_antennaListHasBeenSet = true;
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
