/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ControlTower
{
namespace Model
{
  enum class EnablementStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    UNDER_CHANGE
  };

namespace EnablementStatusMapper
{
AWS_CONTROLTOWER_API EnablementStatus GetEnablementStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForEnablementStatus(EnablementStatus value);
} // namespace EnablementStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
