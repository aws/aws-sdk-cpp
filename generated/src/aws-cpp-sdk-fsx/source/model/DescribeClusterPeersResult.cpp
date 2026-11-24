/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/fsx/model/DescribeClusterPeersResult.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClusterPeersResult::DescribeClusterPeersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeClusterPeersResult& DescribeClusterPeersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ClusterPeers")) {
    Aws::Utils::Array<JsonView> clusterPeersJsonList = jsonValue.GetArray("ClusterPeers");
    for (unsigned clusterPeersIndex = 0; clusterPeersIndex < clusterPeersJsonList.GetLength(); ++clusterPeersIndex) {
      m_clusterPeers.push_back(clusterPeersJsonList[clusterPeersIndex].AsObject());
    }
    m_clusterPeersHasBeenSet = true;
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
