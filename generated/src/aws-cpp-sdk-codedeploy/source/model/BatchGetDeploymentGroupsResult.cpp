/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetDeploymentGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDeploymentGroupsResult::BatchGetDeploymentGroupsResult()
{
}

BatchGetDeploymentGroupsResult::BatchGetDeploymentGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDeploymentGroupsResult& BatchGetDeploymentGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentGroupsInfo"))
  {
    Aws::Utils::Array<JsonView> deploymentGroupsInfoJsonList = jsonValue.GetArray("deploymentGroupsInfo");
    for(unsigned deploymentGroupsInfoIndex = 0; deploymentGroupsInfoIndex < deploymentGroupsInfoJsonList.GetLength(); ++deploymentGroupsInfoIndex)
    {
      m_deploymentGroupsInfo.push_back(deploymentGroupsInfoJsonList[deploymentGroupsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }



  return *this;
}
