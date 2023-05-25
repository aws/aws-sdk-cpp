/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

InsightHealth::InsightHealth() : 
    m_openProactiveInsights(0),
    m_openProactiveInsightsHasBeenSet(false),
    m_openReactiveInsights(0),
    m_openReactiveInsightsHasBeenSet(false),
    m_meanTimeToRecoverInMilliseconds(0),
    m_meanTimeToRecoverInMillisecondsHasBeenSet(false)
{
}

InsightHealth::InsightHealth(JsonView jsonValue) : 
    m_openProactiveInsights(0),
    m_openProactiveInsightsHasBeenSet(false),
    m_openReactiveInsights(0),
    m_openReactiveInsightsHasBeenSet(false),
    m_meanTimeToRecoverInMilliseconds(0),
    m_meanTimeToRecoverInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

InsightHealth& InsightHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpenProactiveInsights"))
  {
    m_openProactiveInsights = jsonValue.GetInteger("OpenProactiveInsights");

    m_openProactiveInsightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpenReactiveInsights"))
  {
    m_openReactiveInsights = jsonValue.GetInteger("OpenReactiveInsights");

    m_openReactiveInsightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeanTimeToRecoverInMilliseconds"))
  {
    m_meanTimeToRecoverInMilliseconds = jsonValue.GetInt64("MeanTimeToRecoverInMilliseconds");

    m_meanTimeToRecoverInMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightHealth::Jsonize() const
{
  JsonValue payload;

  if(m_openProactiveInsightsHasBeenSet)
  {
   payload.WithInteger("OpenProactiveInsights", m_openProactiveInsights);

  }

  if(m_openReactiveInsightsHasBeenSet)
  {
   payload.WithInteger("OpenReactiveInsights", m_openReactiveInsights);

  }

  if(m_meanTimeToRecoverInMillisecondsHasBeenSet)
  {
   payload.WithInt64("MeanTimeToRecoverInMilliseconds", m_meanTimeToRecoverInMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
