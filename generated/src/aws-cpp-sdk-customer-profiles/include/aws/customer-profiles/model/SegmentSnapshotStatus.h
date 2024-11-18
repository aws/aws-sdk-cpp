/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class SegmentSnapshotStatus
  {
    NOT_SET,
    COMPLETED,
    IN_PROGRESS,
    FAILED
  };

namespace SegmentSnapshotStatusMapper
{
AWS_CUSTOMERPROFILES_API SegmentSnapshotStatus GetSegmentSnapshotStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForSegmentSnapshotStatus(SegmentSnapshotStatus value);
} // namespace SegmentSnapshotStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
