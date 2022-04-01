/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ResetDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResetDeploymentsResult::ResetDeploymentsResult()
{
}

ResetDeploymentsResult::ResetDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResetDeploymentsResult& ResetDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeploymentArn"))
  {
    m_deploymentArn = jsonValue.GetString("DeploymentArn");

  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

  }



  return *this;
}
