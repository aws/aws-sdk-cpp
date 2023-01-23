/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentStrategy.h>
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

DeploymentStrategy::DeploymentStrategy() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_replicateTo(ReplicateTo::NOT_SET),
    m_replicateToHasBeenSet(false)
{
}

DeploymentStrategy::DeploymentStrategy(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deploymentDurationInMinutes(0),
    m_deploymentDurationInMinutesHasBeenSet(false),
    m_growthType(GrowthType::NOT_SET),
    m_growthTypeHasBeenSet(false),
    m_growthFactor(0.0),
    m_growthFactorHasBeenSet(false),
    m_finalBakeTimeInMinutes(0),
    m_finalBakeTimeInMinutesHasBeenSet(false),
    m_replicateTo(ReplicateTo::NOT_SET),
    m_replicateToHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentStrategy& DeploymentStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReplicateTo"))
  {
    m_replicateTo = ReplicateToMapper::GetReplicateToForName(jsonValue.GetString("ReplicateTo"));

    m_replicateToHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_replicateToHasBeenSet)
  {
   payload.WithString("ReplicateTo", ReplicateToMapper::GetNameForReplicateTo(m_replicateTo));
  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
