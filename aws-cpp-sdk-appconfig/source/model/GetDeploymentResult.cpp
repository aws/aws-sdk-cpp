/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentResult::GetDeploymentResult() : 
    m_deploymentNumber(0),
    m_deploymentDurationInMinutes(0),
    m_growthType(GrowthType::NOT_SET),
    m_growthFactor(0.0),
    m_finalBakeTimeInMinutes(0),
    m_state(DeploymentState::NOT_SET),
    m_percentageComplete(0.0)
{
}

GetDeploymentResult::GetDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deploymentNumber(0),
    m_deploymentDurationInMinutes(0),
    m_growthType(GrowthType::NOT_SET),
    m_growthFactor(0.0),
    m_finalBakeTimeInMinutes(0),
    m_state(DeploymentState::NOT_SET),
    m_percentageComplete(0.0)
{
  *this = result;
}

GetDeploymentResult& GetDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

  }

  if(jsonValue.ValueExists("DeploymentStrategyId"))
  {
    m_deploymentStrategyId = jsonValue.GetString("DeploymentStrategyId");

  }

  if(jsonValue.ValueExists("ConfigurationProfileId"))
  {
    m_configurationProfileId = jsonValue.GetString("ConfigurationProfileId");

  }

  if(jsonValue.ValueExists("DeploymentNumber"))
  {
    m_deploymentNumber = jsonValue.GetInteger("DeploymentNumber");

  }

  if(jsonValue.ValueExists("ConfigurationName"))
  {
    m_configurationName = jsonValue.GetString("ConfigurationName");

  }

  if(jsonValue.ValueExists("ConfigurationLocationUri"))
  {
    m_configurationLocationUri = jsonValue.GetString("ConfigurationLocationUri");

  }

  if(jsonValue.ValueExists("ConfigurationVersion"))
  {
    m_configurationVersion = jsonValue.GetString("ConfigurationVersion");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("DeploymentDurationInMinutes"))
  {
    m_deploymentDurationInMinutes = jsonValue.GetInteger("DeploymentDurationInMinutes");

  }

  if(jsonValue.ValueExists("GrowthType"))
  {
    m_growthType = GrowthTypeMapper::GetGrowthTypeForName(jsonValue.GetString("GrowthType"));

  }

  if(jsonValue.ValueExists("GrowthFactor"))
  {
    m_growthFactor = jsonValue.GetDouble("GrowthFactor");

  }

  if(jsonValue.ValueExists("FinalBakeTimeInMinutes"))
  {
    m_finalBakeTimeInMinutes = jsonValue.GetInteger("FinalBakeTimeInMinutes");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DeploymentStateMapper::GetDeploymentStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("PercentageComplete"))
  {
    m_percentageComplete = jsonValue.GetDouble("PercentageComplete");

  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");

  }

  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");

  }



  return *this;
}
