/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxScalingGroupStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    ACTIVE,
    DELETING,
    DELETED,
    DELETE_FAILED
  };

namespace KxScalingGroupStatusMapper
{
AWS_FINSPACE_API KxScalingGroupStatus GetKxScalingGroupStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxScalingGroupStatus(KxScalingGroupStatus value);
} // namespace KxScalingGroupStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
