/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeRobotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRobotResult::DescribeRobotResult() : 
    m_status(RobotStatus::NOT_SET),
    m_architecture(Architecture::NOT_SET)
{
}

DescribeRobotResult::DescribeRobotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RobotStatus::NOT_SET),
    m_architecture(Architecture::NOT_SET)
{
  *this = result;
}

DescribeRobotResult& DescribeRobotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("fleetArn"))
  {
    m_fleetArn = jsonValue.GetString("fleetArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RobotStatusMapper::GetRobotStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("greengrassGroupId"))
  {
    m_greengrassGroupId = jsonValue.GetString("greengrassGroupId");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

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
