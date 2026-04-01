/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecs/model/DescribeDaemonRevisionsResult.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDaemonRevisionsResult::DescribeDaemonRevisionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeDaemonRevisionsResult& DescribeDaemonRevisionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("daemonRevisions")) {
    Aws::Utils::Array<JsonView> daemonRevisionsJsonList = jsonValue.GetArray("daemonRevisions");
    for (unsigned daemonRevisionsIndex = 0; daemonRevisionsIndex < daemonRevisionsJsonList.GetLength(); ++daemonRevisionsIndex) {
      m_daemonRevisions.push_back(daemonRevisionsJsonList[daemonRevisionsIndex].AsObject());
    }
    m_daemonRevisionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
