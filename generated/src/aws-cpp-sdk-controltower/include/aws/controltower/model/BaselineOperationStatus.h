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
  enum class BaselineOperationStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    IN_PROGRESS
  };

namespace BaselineOperationStatusMapper
{
AWS_CONTROLTOWER_API BaselineOperationStatus GetBaselineOperationStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForBaselineOperationStatus(BaselineOperationStatus value);
} // namespace BaselineOperationStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
