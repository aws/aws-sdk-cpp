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
  enum class ClusterStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED,
    UPDATING,
    PENDING
  };

namespace ClusterStatusMapper
{
AWS_GUARDDUTY_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForClusterStatus(ClusterStatus value);
} // namespace ClusterStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
