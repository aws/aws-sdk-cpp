/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RecommendationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

RecommendationSettings::RecommendationSettings() : 
    m_instanceSizingTypeHasBeenSet(false),
    m_workloadTypeHasBeenSet(false)
{
}

RecommendationSettings::RecommendationSettings(JsonView jsonValue) : 
    m_instanceSizingTypeHasBeenSet(false),
    m_workloadTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSettings& RecommendationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceSizingType"))
  {
    m_instanceSizingType = jsonValue.GetString("InstanceSizingType");

    m_instanceSizingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadType"))
  {
    m_workloadType = jsonValue.GetString("WorkloadType");

    m_workloadTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_instanceSizingTypeHasBeenSet)
  {
   payload.WithString("InstanceSizingType", m_instanceSizingType);

  }

  if(m_workloadTypeHasBeenSet)
  {
   payload.WithString("WorkloadType", m_workloadType);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
