/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kendra/model/GetSnapshotsResult.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSnapshotsResult::GetSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSnapshotsResult& GetSnapshotsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SnapShotTimeFilter")) {
    m_snapShotTimeFilter = jsonValue.GetObject("SnapShotTimeFilter");
    m_snapShotTimeFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotsDataHeader")) {
    Aws::Utils::Array<JsonView> snapshotsDataHeaderJsonList = jsonValue.GetArray("SnapshotsDataHeader");
    for (unsigned snapshotsDataHeaderIndex = 0; snapshotsDataHeaderIndex < snapshotsDataHeaderJsonList.GetLength();
         ++snapshotsDataHeaderIndex) {
      m_snapshotsDataHeader.push_back(snapshotsDataHeaderJsonList[snapshotsDataHeaderIndex].AsString());
    }
    m_snapshotsDataHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotsData")) {
    Aws::Utils::Array<JsonView> snapshotsDataJsonList = jsonValue.GetArray("SnapshotsData");
    for (unsigned snapshotsDataIndex = 0; snapshotsDataIndex < snapshotsDataJsonList.GetLength(); ++snapshotsDataIndex) {
      Aws::Utils::Array<JsonView> snapshotsDataRecord2JsonList = snapshotsDataJsonList[snapshotsDataIndex].AsArray();
      Aws::Vector<Aws::String> snapshotsDataRecord2List;
      snapshotsDataRecord2List.reserve((size_t)snapshotsDataRecord2JsonList.GetLength());
      for (unsigned snapshotsDataRecord2Index = 0; snapshotsDataRecord2Index < snapshotsDataRecord2JsonList.GetLength();
           ++snapshotsDataRecord2Index) {
        snapshotsDataRecord2List.push_back(snapshotsDataRecord2JsonList[snapshotsDataRecord2Index].AsString());
      }
      m_snapshotsData.push_back(std::move(snapshotsDataRecord2List));
    }
    m_snapshotsDataHasBeenSet = true;
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
