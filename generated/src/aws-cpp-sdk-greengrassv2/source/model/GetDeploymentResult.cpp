/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentResult::GetDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeploymentResult& GetDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");
    m_targetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentName"))
  {
    m_deploymentName = jsonValue.GetString("deploymentName");
    m_deploymentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("deploymentStatus"));
    m_deploymentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iotJobId"))
  {
    m_iotJobId = jsonValue.GetString("iotJobId");
    m_iotJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iotJobArn"))
  {
    m_iotJobArn = jsonValue.GetString("iotJobArn");
    m_iotJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("components"))
  {
    Aws::Map<Aws::String, JsonView> componentsJsonMap = jsonValue.GetObject("components").GetAllObjects();
    for(auto& componentsItem : componentsJsonMap)
    {
      m_components[componentsItem.first] = componentsItem.second.AsObject();
    }
    m_componentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentPolicies"))
  {
    m_deploymentPolicies = jsonValue.GetObject("deploymentPolicies");
    m_deploymentPoliciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iotJobConfiguration"))
  {
    m_iotJobConfiguration = jsonValue.GetObject("iotJobConfiguration");
    m_iotJobConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isLatestForTarget"))
  {
    m_isLatestForTarget = jsonValue.GetBool("isLatestForTarget");
    m_isLatestForTargetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentTargetArn"))
  {
    m_parentTargetArn = jsonValue.GetString("parentTargetArn");
    m_parentTargetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
