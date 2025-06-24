/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class EntitlementAvailability
  {
    NOT_SET,
    AVAILABLE,
    NOT_AVAILABLE
  };

namespace EntitlementAvailabilityMapper
{
AWS_BEDROCK_API EntitlementAvailability GetEntitlementAvailabilityForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForEntitlementAvailability(EntitlementAvailability value);
} // namespace EntitlementAvailabilityMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
