/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListReplicationFindingsResult.h>
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

ListReplicationFindingsResult::ListReplicationFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListReplicationFindingsResult& ListReplicationFindingsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ReplicationFindingsList")) {
    Aws::Utils::Array<JsonView> replicationFindingsListJsonList = jsonValue.GetArray("ReplicationFindingsList");
    for (unsigned replicationFindingsListIndex = 0; replicationFindingsListIndex < replicationFindingsListJsonList.GetLength();
         ++replicationFindingsListIndex) {
      m_replicationFindingsList.push_back(replicationFindingsListJsonList[replicationFindingsListIndex].AsObject());
    }
    m_replicationFindingsListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApproximateDriftedResourceCounts")) {
    Aws::Utils::Array<JsonView> approximateDriftedResourceCountsJsonList = jsonValue.GetArray("ApproximateDriftedResourceCounts");
    for (unsigned approximateDriftedResourceCountsIndex = 0;
         approximateDriftedResourceCountsIndex < approximateDriftedResourceCountsJsonList.GetLength();
         ++approximateDriftedResourceCountsIndex) {
      m_approximateDriftedResourceCounts.push_back(
          approximateDriftedResourceCountsJsonList[approximateDriftedResourceCountsIndex].AsObject());
    }
    m_approximateDriftedResourceCountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceReplicationStatuses")) {
    Aws::Utils::Array<JsonView> resourceReplicationStatusesJsonList = jsonValue.GetArray("ResourceReplicationStatuses");
    for (unsigned resourceReplicationStatusesIndex = 0; resourceReplicationStatusesIndex < resourceReplicationStatusesJsonList.GetLength();
         ++resourceReplicationStatusesIndex) {
      m_resourceReplicationStatuses.push_back(resourceReplicationStatusesJsonList[resourceReplicationStatusesIndex].AsObject());
    }
    m_resourceReplicationStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
