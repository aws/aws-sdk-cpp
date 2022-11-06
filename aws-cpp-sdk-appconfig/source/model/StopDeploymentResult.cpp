/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StopDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopDeploymentResult::StopDeploymentResult() : 
    m_deploymentNumber(0),
    m_deploymentDurationInMinutes(0),
    m_growthType(GrowthType::NOT_SET),
    m_growthFactor(0.0),
    m_finalBakeTimeInMinutes(0),
    m_state(DeploymentState::NOT_SET),
    m_percentageComplete(0.0)
{
}

StopDeploymentResult::StopDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
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

StopDeploymentResult& StopDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("EventLog"))
  {
    Aws::Utils::Array<JsonView> eventLogJsonList = jsonValue.GetArray("EventLog");
    for(unsigned eventLogIndex = 0; eventLogIndex < eventLogJsonList.GetLength(); ++eventLogIndex)
    {
      m_eventLog.push_back(eventLogJsonList[eventLogIndex].AsObject());
    }
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

  if(jsonValue.ValueExists("AppliedExtensions"))
  {
    Aws::Utils::Array<JsonView> appliedExtensionsJsonList = jsonValue.GetArray("AppliedExtensions");
    for(unsigned appliedExtensionsIndex = 0; appliedExtensionsIndex < appliedExtensionsJsonList.GetLength(); ++appliedExtensionsIndex)
    {
      m_appliedExtensions.push_back(appliedExtensionsJsonList[appliedExtensionsIndex].AsObject());
    }
  }



  return *this;
}
