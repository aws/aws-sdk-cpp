/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RdsRecommendation.h>
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

RdsRecommendation::RdsRecommendation() : 
    m_requirementsToTargetHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
}

RdsRecommendation::RdsRecommendation(JsonView jsonValue) : 
    m_requirementsToTargetHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RdsRecommendation& RdsRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequirementsToTarget"))
  {
    m_requirementsToTarget = jsonValue.GetObject("RequirementsToTarget");

    m_requirementsToTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetConfiguration"))
  {
    m_targetConfiguration = jsonValue.GetObject("TargetConfiguration");

    m_targetConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_requirementsToTargetHasBeenSet)
  {
   payload.WithObject("RequirementsToTarget", m_requirementsToTarget.Jsonize());

  }

  if(m_targetConfigurationHasBeenSet)
  {
   payload.WithObject("TargetConfiguration", m_targetConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
