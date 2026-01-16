/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsResult.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentPatternVersionsResult::ListDeploymentPatternVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListDeploymentPatternVersionsResult& ListDeploymentPatternVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("deploymentPatternVersions")) {
    Aws::Utils::Array<JsonView> deploymentPatternVersionsJsonList = jsonValue.GetArray("deploymentPatternVersions");
    for (unsigned deploymentPatternVersionsIndex = 0; deploymentPatternVersionsIndex < deploymentPatternVersionsJsonList.GetLength();
         ++deploymentPatternVersionsIndex) {
      m_deploymentPatternVersions.push_back(deploymentPatternVersionsJsonList[deploymentPatternVersionsIndex].AsObject());
    }
    m_deploymentPatternVersionsHasBeenSet = true;
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
