/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ManagementPreference.h>
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

ManagementPreference::ManagementPreference() : 
    m_awsManagedResourcesHasBeenSet(false),
    m_noPreferenceHasBeenSet(false),
    m_selfManageResourcesHasBeenSet(false)
{
}

ManagementPreference::ManagementPreference(JsonView jsonValue) : 
    m_awsManagedResourcesHasBeenSet(false),
    m_noPreferenceHasBeenSet(false),
    m_selfManageResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ManagementPreference& ManagementPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsManagedResources"))
  {
    m_awsManagedResources = jsonValue.GetObject("awsManagedResources");

    m_awsManagedResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noPreference"))
  {
    m_noPreference = jsonValue.GetObject("noPreference");

    m_noPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selfManageResources"))
  {
    m_selfManageResources = jsonValue.GetObject("selfManageResources");

    m_selfManageResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagementPreference::Jsonize() const
{
  JsonValue payload;

  if(m_awsManagedResourcesHasBeenSet)
  {
   payload.WithObject("awsManagedResources", m_awsManagedResources.Jsonize());

  }

  if(m_noPreferenceHasBeenSet)
  {
   payload.WithObject("noPreference", m_noPreference.Jsonize());

  }

  if(m_selfManageResourcesHasBeenSet)
  {
   payload.WithObject("selfManageResources", m_selfManageResources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
