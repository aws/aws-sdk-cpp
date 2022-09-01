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
  enum class ControlOperationStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    IN_PROGRESS
  };

namespace ControlOperationStatusMapper
{
AWS_CONTROLTOWER_API ControlOperationStatus GetControlOperationStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForControlOperationStatus(ControlOperationStatus value);
} // namespace ControlOperationStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
