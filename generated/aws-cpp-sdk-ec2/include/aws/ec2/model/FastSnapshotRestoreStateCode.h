/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class FastSnapshotRestoreStateCode
  {
    NOT_SET,
    enabling,
    optimizing,
    enabled,
    disabling,
    disabled
  };

namespace FastSnapshotRestoreStateCodeMapper
{
AWS_EC2_API FastSnapshotRestoreStateCode GetFastSnapshotRestoreStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFastSnapshotRestoreStateCode(FastSnapshotRestoreStateCode value);
} // namespace FastSnapshotRestoreStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
