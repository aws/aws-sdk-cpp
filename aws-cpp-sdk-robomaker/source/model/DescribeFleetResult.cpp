/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeFleetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetResult::DescribeFleetResult() : 
    m_lastDeploymentStatus(DeploymentStatus::NOT_SET)
{
}

DescribeFleetResult::DescribeFleetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastDeploymentStatus(DeploymentStatus::NOT_SET)
{
  *this = result;
}

DescribeFleetResult& DescribeFleetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("robots"))
  {
    Array<JsonView> robotsJsonList = jsonValue.GetArray("robots");
    for(unsigned robotsIndex = 0; robotsIndex < robotsJsonList.GetLength(); ++robotsIndex)
    {
      m_robots.push_back(robotsJsonList[robotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastDeploymentStatus"))
  {
    m_lastDeploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("lastDeploymentStatus"));

  }

  if(jsonValue.ValueExists("lastDeploymentJob"))
  {
    m_lastDeploymentJob = jsonValue.GetString("lastDeploymentJob");

  }

  if(jsonValue.ValueExists("lastDeploymentTime"))
  {
    m_lastDeploymentTime = jsonValue.GetDouble("lastDeploymentTime");

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
