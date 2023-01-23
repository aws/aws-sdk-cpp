/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentResult::GetDeploymentResult() : 
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_isLatestForTarget(false)
{
}

GetDeploymentResult::GetDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_isLatestForTarget(false)
{
  *this = result;
}

GetDeploymentResult& GetDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

  }

  if(jsonValue.ValueExists("deploymentName"))
  {
    m_deploymentName = jsonValue.GetString("deploymentName");

  }

  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("deploymentStatus"));

  }

  if(jsonValue.ValueExists("iotJobId"))
  {
    m_iotJobId = jsonValue.GetString("iotJobId");

  }

  if(jsonValue.ValueExists("iotJobArn"))
  {
    m_iotJobArn = jsonValue.GetString("iotJobArn");

  }

  if(jsonValue.ValueExists("components"))
  {
    Aws::Map<Aws::String, JsonView> componentsJsonMap = jsonValue.GetObject("components").GetAllObjects();
    for(auto& componentsItem : componentsJsonMap)
    {
      m_components[componentsItem.first] = componentsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("deploymentPolicies"))
  {
    m_deploymentPolicies = jsonValue.GetObject("deploymentPolicies");

  }

  if(jsonValue.ValueExists("iotJobConfiguration"))
  {
    m_iotJobConfiguration = jsonValue.GetObject("iotJobConfiguration");

  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

  }

  if(jsonValue.ValueExists("isLatestForTarget"))
  {
    m_isLatestForTarget = jsonValue.GetBool("isLatestForTarget");

  }

  if(jsonValue.ValueExists("parentTargetArn"))
  {
    m_parentTargetArn = jsonValue.GetString("parentTargetArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
