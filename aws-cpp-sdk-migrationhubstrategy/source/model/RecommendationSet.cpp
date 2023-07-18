/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RecommendationSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

RecommendationSet::RecommendationSet() : 
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_targetDestination(TargetDestination::NOT_SET),
    m_targetDestinationHasBeenSet(false),
    m_transformationToolHasBeenSet(false)
{
}

RecommendationSet::RecommendationSet(JsonView jsonValue) : 
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_targetDestination(TargetDestination::NOT_SET),
    m_targetDestinationHasBeenSet(false),
    m_transformationToolHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSet& RecommendationSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("strategy"))
  {
    m_strategy = StrategyMapper::GetStrategyForName(jsonValue.GetString("strategy"));

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetDestination"))
  {
    m_targetDestination = TargetDestinationMapper::GetTargetDestinationForName(jsonValue.GetString("targetDestination"));

    m_targetDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transformationTool"))
  {
    m_transformationTool = jsonValue.GetObject("transformationTool");

    m_transformationToolHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSet::Jsonize() const
{
  JsonValue payload;

  if(m_strategyHasBeenSet)
  {
   payload.WithString("strategy", StrategyMapper::GetNameForStrategy(m_strategy));
  }

  if(m_targetDestinationHasBeenSet)
  {
   payload.WithString("targetDestination", TargetDestinationMapper::GetNameForTargetDestination(m_targetDestination));
  }

  if(m_transformationToolHasBeenSet)
  {
   payload.WithObject("transformationTool", m_transformationTool.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
