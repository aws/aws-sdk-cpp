/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/health/model/DescribeServiceLifecycleResult.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceLifecycleResult::DescribeServiceLifecycleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeServiceLifecycleResult& DescribeServiceLifecycleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("serviceLifecycles")) {
    Aws::Utils::Array<JsonView> serviceLifecyclesJsonList = jsonValue.GetArray("serviceLifecycles");
    for (unsigned serviceLifecyclesIndex = 0; serviceLifecyclesIndex < serviceLifecyclesJsonList.GetLength(); ++serviceLifecyclesIndex) {
      m_serviceLifecycles.push_back(serviceLifecyclesJsonList[serviceLifecyclesIndex].AsObject());
    }
    m_serviceLifecyclesHasBeenSet = true;
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
