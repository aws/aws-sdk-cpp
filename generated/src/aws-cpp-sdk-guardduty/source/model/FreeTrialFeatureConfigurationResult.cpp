/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FreeTrialFeatureConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

FreeTrialFeatureConfigurationResult::FreeTrialFeatureConfigurationResult() : 
    m_name(FreeTrialFeatureResult::NOT_SET),
    m_nameHasBeenSet(false),
    m_freeTrialDaysRemaining(0),
    m_freeTrialDaysRemainingHasBeenSet(false)
{
}

FreeTrialFeatureConfigurationResult::FreeTrialFeatureConfigurationResult(JsonView jsonValue) : 
    m_name(FreeTrialFeatureResult::NOT_SET),
    m_nameHasBeenSet(false),
    m_freeTrialDaysRemaining(0),
    m_freeTrialDaysRemainingHasBeenSet(false)
{
  *this = jsonValue;
}

FreeTrialFeatureConfigurationResult& FreeTrialFeatureConfigurationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = FreeTrialFeatureResultMapper::GetFreeTrialFeatureResultForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeTrialDaysRemaining"))
  {
    m_freeTrialDaysRemaining = jsonValue.GetInteger("freeTrialDaysRemaining");

    m_freeTrialDaysRemainingHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeTrialFeatureConfigurationResult::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", FreeTrialFeatureResultMapper::GetNameForFreeTrialFeatureResult(m_name));
  }

  if(m_freeTrialDaysRemainingHasBeenSet)
  {
   payload.WithInteger("freeTrialDaysRemaining", m_freeTrialDaysRemaining);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
