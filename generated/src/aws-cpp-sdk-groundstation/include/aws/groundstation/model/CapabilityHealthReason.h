/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class CapabilityHealthReason
  {
    NOT_SET,
    NO_REGISTERED_AGENT,
    INVALID_IP_OWNERSHIP,
    NOT_AUTHORIZED_TO_CREATE_SLR,
    UNVERIFIED_IP_OWNERSHIP,
    INITIALIZING_DATAPLANE,
    DATAPLANE_FAILURE,
    HEALTHY
  };

namespace CapabilityHealthReasonMapper
{
AWS_GROUNDSTATION_API CapabilityHealthReason GetCapabilityHealthReasonForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForCapabilityHealthReason(CapabilityHealthReason value);
} // namespace CapabilityHealthReasonMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
