/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecr/model/ListPullTimeUpdateExclusionsResult.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPullTimeUpdateExclusionsResult::ListPullTimeUpdateExclusionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListPullTimeUpdateExclusionsResult& ListPullTimeUpdateExclusionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("pullTimeUpdateExclusions")) {
    Aws::Utils::Array<JsonView> pullTimeUpdateExclusionsJsonList = jsonValue.GetArray("pullTimeUpdateExclusions");
    for (unsigned pullTimeUpdateExclusionsIndex = 0; pullTimeUpdateExclusionsIndex < pullTimeUpdateExclusionsJsonList.GetLength();
         ++pullTimeUpdateExclusionsIndex) {
      m_pullTimeUpdateExclusions.push_back(pullTimeUpdateExclusionsJsonList[pullTimeUpdateExclusionsIndex].AsString());
    }
    m_pullTimeUpdateExclusionsHasBeenSet = true;
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
