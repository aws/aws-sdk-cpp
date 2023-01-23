/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AutoRegistrationStatus
  {
    NOT_SET,
    ENABLE,
    DISABLE
  };

namespace AutoRegistrationStatusMapper
{
AWS_IOT_API AutoRegistrationStatus GetAutoRegistrationStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAutoRegistrationStatus(AutoRegistrationStatus value);
} // namespace AutoRegistrationStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
