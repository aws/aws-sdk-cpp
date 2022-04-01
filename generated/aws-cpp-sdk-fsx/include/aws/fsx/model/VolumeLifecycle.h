/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class VolumeLifecycle
  {
    NOT_SET,
    CREATING,
    CREATED,
    DELETING,
    FAILED,
    MISCONFIGURED,
    PENDING,
    AVAILABLE
  };

namespace VolumeLifecycleMapper
{
AWS_FSX_API VolumeLifecycle GetVolumeLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForVolumeLifecycle(VolumeLifecycle value);
} // namespace VolumeLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
