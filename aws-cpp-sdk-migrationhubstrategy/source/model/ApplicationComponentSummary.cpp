/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationComponentSummary.h>
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

ApplicationComponentSummary::ApplicationComponentSummary() : 
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

ApplicationComponentSummary::ApplicationComponentSummary(JsonView jsonValue) : 
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationComponentSummary& ApplicationComponentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("appType"));

    m_appTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationComponentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("appType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
