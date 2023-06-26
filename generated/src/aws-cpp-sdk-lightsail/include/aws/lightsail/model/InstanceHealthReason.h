/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class InstanceHealthReason
  {
    NOT_SET,
    Lb_RegistrationInProgress,
    Lb_InitialHealthChecking,
    Lb_InternalError,
    Instance_ResponseCodeMismatch,
    Instance_Timeout,
    Instance_FailedHealthChecks,
    Instance_NotRegistered,
    Instance_NotInUse,
    Instance_DeregistrationInProgress,
    Instance_InvalidState,
    Instance_IpUnusable
  };

namespace InstanceHealthReasonMapper
{
AWS_LIGHTSAIL_API InstanceHealthReason GetInstanceHealthReasonForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceHealthReason(InstanceHealthReason value);
} // namespace InstanceHealthReasonMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
