/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ImportedSidewalkDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

ImportedSidewalkDevice::ImportedSidewalkDevice() : 
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_onboardingStatus(OnboardStatus::NOT_SET),
    m_onboardingStatusHasBeenSet(false),
    m_onboardingStatusReasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

ImportedSidewalkDevice::ImportedSidewalkDevice(JsonView jsonValue) : 
    m_sidewalkManufacturingSnHasBeenSet(false),
    m_onboardingStatus(OnboardStatus::NOT_SET),
    m_onboardingStatusHasBeenSet(false),
    m_onboardingStatusReasonHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ImportedSidewalkDevice& ImportedSidewalkDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SidewalkManufacturingSn"))
  {
    m_sidewalkManufacturingSn = jsonValue.GetString("SidewalkManufacturingSn");

    m_sidewalkManufacturingSnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnboardingStatus"))
  {
    m_onboardingStatus = OnboardStatusMapper::GetOnboardStatusForName(jsonValue.GetString("OnboardingStatus"));

    m_onboardingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnboardingStatusReason"))
  {
    m_onboardingStatusReason = jsonValue.GetString("OnboardingStatusReason");

    m_onboardingStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetString("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportedSidewalkDevice::Jsonize() const
{
  JsonValue payload;

  if(m_sidewalkManufacturingSnHasBeenSet)
  {
   payload.WithString("SidewalkManufacturingSn", m_sidewalkManufacturingSn);

  }

  if(m_onboardingStatusHasBeenSet)
  {
   payload.WithString("OnboardingStatus", OnboardStatusMapper::GetNameForOnboardStatus(m_onboardingStatus));
  }

  if(m_onboardingStatusReasonHasBeenSet)
  {
   payload.WithString("OnboardingStatusReason", m_onboardingStatusReason);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithString("LastUpdateTime", m_lastUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
