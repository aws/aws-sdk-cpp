/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationPreferences.h>
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

ApplicationPreferences::ApplicationPreferences() : 
    m_managementPreferenceHasBeenSet(false)
{
}

ApplicationPreferences::ApplicationPreferences(JsonView jsonValue) : 
    m_managementPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationPreferences& ApplicationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("managementPreference"))
  {
    m_managementPreference = jsonValue.GetObject("managementPreference");

    m_managementPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_managementPreferenceHasBeenSet)
  {
   payload.WithObject("managementPreference", m_managementPreference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
