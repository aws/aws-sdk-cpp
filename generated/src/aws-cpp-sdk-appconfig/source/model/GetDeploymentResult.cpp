/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
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
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentStrategyId"))
  {
    m_deploymentStrategyId = jsonValue.GetString("DeploymentStrategyId");
    m_deploymentStrategyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationProfileId"))
  {
    m_configurationProfileId = jsonValue.GetString("ConfigurationProfileId");
    m_configurationProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentNumber"))
  {
    m_deploymentNumber = jsonValue.GetInteger("DeploymentNumber");
    m_deploymentNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationName"))
  {
    m_configurationName = jsonValue.GetString("ConfigurationName");
    m_configurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationLocationUri"))
  {
    m_configurationLocationUri = jsonValue.GetString("ConfigurationLocationUri");
    m_configurationLocationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationVersion"))
  {
    m_configurationVersion = jsonValue.GetString("ConfigurationVersion");
    m_configurationVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentDurationInMinutes"))
  {
    m_deploymentDurationInMinutes = jsonValue.GetInteger("DeploymentDurationInMinutes");
    m_deploymentDurationInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GrowthType"))
  {
    m_growthType = GrowthTypeMapper::GetGrowthTypeForName(jsonValue.GetString("GrowthType"));
    m_growthTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GrowthFactor"))
  {
    m_growthFactor = jsonValue.GetDouble("GrowthFactor");
    m_growthFactorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FinalBakeTimeInMinutes"))
  {
    m_finalBakeTimeInMinutes = jsonValue.GetInteger("FinalBakeTimeInMinutes");
    m_finalBakeTimeInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = DeploymentStateMapper::GetDeploymentStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventLog"))
  {
    Aws::Utils::Array<JsonView> eventLogJsonList = jsonValue.GetArray("EventLog");
    for(unsigned eventLogIndex = 0; eventLogIndex < eventLogJsonList.GetLength(); ++eventLogIndex)
    {
      m_eventLog.push_back(eventLogJsonList[eventLogIndex].AsObject());
    }
    m_eventLogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PercentageComplete"))
  {
    m_percentageComplete = jsonValue.GetDouble("PercentageComplete");
    m_percentageCompleteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedExtensions"))
  {
    Aws::Utils::Array<JsonView> appliedExtensionsJsonList = jsonValue.GetArray("AppliedExtensions");
    for(unsigned appliedExtensionsIndex = 0; appliedExtensionsIndex < appliedExtensionsJsonList.GetLength(); ++appliedExtensionsIndex)
    {
      m_appliedExtensions.push_back(appliedExtensionsJsonList[appliedExtensionsIndex].AsObject());
    }
    m_appliedExtensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionLabel"))
  {
    m_versionLabel = jsonValue.GetString("VersionLabel");
    m_versionLabelHasBeenSet = true;
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
