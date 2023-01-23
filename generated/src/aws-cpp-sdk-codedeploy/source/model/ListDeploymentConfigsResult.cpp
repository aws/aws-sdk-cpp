/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentConfigsResult::ListDeploymentConfigsResult()
{
}

ListDeploymentConfigsResult::ListDeploymentConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeploymentConfigsResult& ListDeploymentConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentConfigsList"))
  {
    Aws::Utils::Array<JsonView> deploymentConfigsListJsonList = jsonValue.GetArray("deploymentConfigsList");
    for(unsigned deploymentConfigsListIndex = 0; deploymentConfigsListIndex < deploymentConfigsListJsonList.GetLength(); ++deploymentConfigsListIndex)
    {
      m_deploymentConfigsList.push_back(deploymentConfigsListJsonList[deploymentConfigsListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
