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

#include <aws/appconfig/model/DeploymentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

DeploymentSummary::DeploymentSummary() : 
    m_deploymentNumber(0),
    m_deploymentNumberHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_configurationVersionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_state(DeploymentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_percentageComplete(0.0),
    m_percentageCompleteHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false)
{
}

DeploymentSummary::DeploymentSummary(JsonView jsonValue) : 
    m_deploymentNumber(0),
    m_deploymentNumberHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_configurationVersionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_state(DeploymentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_percentageComplete(0.0),
    m_percentageCompleteHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_completedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentSummary& DeploymentSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("ConfigurationVersion"))
  {
    m_configurationVersion = jsonValue.GetString("ConfigurationVersion");

    m_configurationVersionHasBeenSet = true;
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

  return *this;
}

JsonValue DeploymentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentNumberHasBeenSet)
  {
   payload.WithInteger("DeploymentNumber", m_deploymentNumber);

  }

  if(m_configurationNameHasBeenSet)
  {
   payload.WithString("ConfigurationName", m_configurationName);

  }

  if(m_configurationVersionHasBeenSet)
  {
   payload.WithString("ConfigurationVersion", m_configurationVersion);

  }

  if(m_deploymentDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("DeploymentDurationInMinutes", m_deploymentDurationInMinutes);

  }

  if(m_growthTypeHasBeenSet)
  {
   payload.WithString("GrowthType", GrowthTypeMapper::GetNameForGrowthType(m_growthType));
  }

  if(m_growthFactorHasBeenSet)
  {
   payload.WithDouble("GrowthFactor", m_growthFactor);

  }

  if(m_finalBakeTimeInMinutesHasBeenSet)
  {
   payload.WithInteger("FinalBakeTimeInMinutes", m_finalBakeTimeInMinutes);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", DeploymentStateMapper::GetNameForDeploymentState(m_state));
  }

  if(m_percentageCompleteHasBeenSet)
  {
   payload.WithDouble("PercentageComplete", m_percentageComplete);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("StartedAt", m_startedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithString("CompletedAt", m_completedAt.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
