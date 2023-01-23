/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class PlatformCapability
  {
    NOT_SET,
    EC2,
    FARGATE
  };

namespace PlatformCapabilityMapper
{
AWS_BATCH_API PlatformCapability GetPlatformCapabilityForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForPlatformCapability(PlatformCapability value);
} // namespace PlatformCapabilityMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
