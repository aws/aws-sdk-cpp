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
  enum class TieringOperationStatus
  {
    NOT_SET,
    archival_in_progress,
    archival_completed,
    archival_failed,
    temporary_restore_in_progress,
    temporary_restore_completed,
    temporary_restore_failed,
    permanent_restore_in_progress,
    permanent_restore_completed,
    permanent_restore_failed
  };

namespace TieringOperationStatusMapper
{
AWS_EC2_API TieringOperationStatus GetTieringOperationStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTieringOperationStatus(TieringOperationStatus value);
} // namespace TieringOperationStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
