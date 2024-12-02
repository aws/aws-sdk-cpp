/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class SignalType
  {
    NOT_SET,
    FINDING,
    CLOUD_TRAIL,
    S3_DATA_EVENTS
  };

namespace SignalTypeMapper
{
AWS_GUARDDUTY_API SignalType GetSignalTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForSignalType(SignalType value);
} // namespace SignalTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
