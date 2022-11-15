/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetDeploymentTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDeploymentTargetsResult::BatchGetDeploymentTargetsResult()
{
}

BatchGetDeploymentTargetsResult::BatchGetDeploymentTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDeploymentTargetsResult& BatchGetDeploymentTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentTargets"))
  {
    Aws::Utils::Array<JsonView> deploymentTargetsJsonList = jsonValue.GetArray("deploymentTargets");
    for(unsigned deploymentTargetsIndex = 0; deploymentTargetsIndex < deploymentTargetsJsonList.GetLength(); ++deploymentTargetsIndex)
    {
      m_deploymentTargets.push_back(deploymentTargetsJsonList[deploymentTargetsIndex].AsObject());
    }
  }



  return *this;
}
