/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateDeploymentJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeploymentJobResult::CreateDeploymentJobResult() : 
    m_status(DeploymentStatus::NOT_SET),
    m_failureCode(DeploymentJobErrorCode::NOT_SET)
{
}

CreateDeploymentJobResult::CreateDeploymentJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DeploymentStatus::NOT_SET),
    m_failureCode(DeploymentJobErrorCode::NOT_SET)
{
  *this = result;
}

CreateDeploymentJobResult& CreateDeploymentJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("fleet"))
  {
    m_fleet = jsonValue.GetString("fleet");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("deploymentApplicationConfigs"))
  {
    Array<JsonView> deploymentApplicationConfigsJsonList = jsonValue.GetArray("deploymentApplicationConfigs");
    for(unsigned deploymentApplicationConfigsIndex = 0; deploymentApplicationConfigsIndex < deploymentApplicationConfigsJsonList.GetLength(); ++deploymentApplicationConfigsIndex)
    {
      m_deploymentApplicationConfigs.push_back(deploymentApplicationConfigsJsonList[deploymentApplicationConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = DeploymentJobErrorCodeMapper::GetDeploymentJobErrorCodeForName(jsonValue.GetString("failureCode"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("deploymentConfig"))
  {
    m_deploymentConfig = jsonValue.GetObject("deploymentConfig");

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
