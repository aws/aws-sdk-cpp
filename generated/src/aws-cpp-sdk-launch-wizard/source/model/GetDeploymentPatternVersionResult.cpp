/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/launch-wizard/model/GetDeploymentPatternVersionResult.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentPatternVersionResult::GetDeploymentPatternVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetDeploymentPatternVersionResult& GetDeploymentPatternVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("deploymentPatternVersion")) {
    m_deploymentPatternVersion = jsonValue.GetObject("deploymentPatternVersion");
    m_deploymentPatternVersionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
