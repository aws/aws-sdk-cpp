/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kinesisanalyticsv2/model/ListSnapshotsResult.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSnapshotsResult::ListSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSnapshotsResult& ListSnapshotsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SnapshotInfoList")) {
    Aws::Utils::Array<JsonView> snapshotInfoListJsonList = jsonValue.GetArray("SnapshotInfoList");
    for (unsigned snapshotInfoListIndex = 0; snapshotInfoListIndex < snapshotInfoListJsonList.GetLength(); ++snapshotInfoListIndex) {
      m_snapshotInfoList.push_back(snapshotInfoListJsonList[snapshotInfoListIndex].AsObject());
    }
    m_snapshotInfoListHasBeenSet = true;
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
