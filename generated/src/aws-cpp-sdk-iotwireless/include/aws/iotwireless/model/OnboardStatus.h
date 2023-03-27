/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class OnboardStatus
  {
    NOT_SET,
    INITIALIZED,
    PENDING,
    ONBOARDED,
    FAILED
  };

namespace OnboardStatusMapper
{
AWS_IOTWIRELESS_API OnboardStatus GetOnboardStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForOnboardStatus(OnboardStatus value);
} // namespace OnboardStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
