/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ScalingStatusType
  {
    NOT_SET,
    ACTIVE,
    UPDATE_REQUESTED,
    UPDATING,
    DELETE_REQUESTED,
    DELETING,
    DELETED,
    ERROR_
  };

namespace ScalingStatusTypeMapper
{
AWS_GAMELIFT_API ScalingStatusType GetScalingStatusTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForScalingStatusType(ScalingStatusType value);
} // namespace ScalingStatusTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
