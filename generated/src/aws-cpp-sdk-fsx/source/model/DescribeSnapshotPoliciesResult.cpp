/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/fsx/model/DescribeSnapshotPoliciesResult.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSnapshotPoliciesResult::DescribeSnapshotPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeSnapshotPoliciesResult& DescribeSnapshotPoliciesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SnapshotPolicies")) {
    Aws::Utils::Array<JsonView> snapshotPoliciesJsonList = jsonValue.GetArray("SnapshotPolicies");
    for (unsigned snapshotPoliciesIndex = 0; snapshotPoliciesIndex < snapshotPoliciesJsonList.GetLength(); ++snapshotPoliciesIndex) {
      m_snapshotPolicies.push_back(snapshotPoliciesJsonList[snapshotPoliciesIndex].AsObject());
    }
    m_snapshotPoliciesHasBeenSet = true;
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
