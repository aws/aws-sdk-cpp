/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AccountInsightHealth.h>
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

AccountInsightHealth::AccountInsightHealth() : 
    m_openProactiveInsights(0),
    m_openProactiveInsightsHasBeenSet(false),
    m_openReactiveInsights(0),
    m_openReactiveInsightsHasBeenSet(false)
{
}

AccountInsightHealth::AccountInsightHealth(JsonView jsonValue) : 
    m_openProactiveInsights(0),
    m_openProactiveInsightsHasBeenSet(false),
    m_openReactiveInsights(0),
    m_openReactiveInsightsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountInsightHealth& AccountInsightHealth::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AccountInsightHealth::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
