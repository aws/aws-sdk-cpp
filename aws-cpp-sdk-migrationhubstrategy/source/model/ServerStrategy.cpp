/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerStrategy.h>
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

ServerStrategy::ServerStrategy() : 
    m_isPreferred(false),
    m_isPreferredHasBeenSet(false),
    m_numberOfApplicationComponents(0),
    m_numberOfApplicationComponentsHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_status(StrategyRecommendation::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ServerStrategy::ServerStrategy(JsonView jsonValue) : 
    m_isPreferred(false),
    m_isPreferredHasBeenSet(false),
    m_numberOfApplicationComponents(0),
    m_numberOfApplicationComponentsHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_status(StrategyRecommendation::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ServerStrategy& ServerStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isPreferred"))
  {
    m_isPreferred = jsonValue.GetBool("isPreferred");

    m_isPreferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfApplicationComponents"))
  {
    m_numberOfApplicationComponents = jsonValue.GetInteger("numberOfApplicationComponents");

    m_numberOfApplicationComponentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StrategyRecommendationMapper::GetStrategyRecommendationForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_isPreferredHasBeenSet)
  {
   payload.WithBool("isPreferred", m_isPreferred);

  }

  if(m_numberOfApplicationComponentsHasBeenSet)
  {
   payload.WithInteger("numberOfApplicationComponents", m_numberOfApplicationComponents);

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StrategyRecommendationMapper::GetNameForStrategyRecommendation(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
