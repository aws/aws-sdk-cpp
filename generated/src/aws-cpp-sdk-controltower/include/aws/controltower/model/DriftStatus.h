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
  enum class DriftStatus
  {
    NOT_SET,
    DRIFTED,
    IN_SYNC,
    NOT_CHECKING,
    UNKNOWN
  };

namespace DriftStatusMapper
{
AWS_CONTROLTOWER_API DriftStatus GetDriftStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForDriftStatus(DriftStatus value);
} // namespace DriftStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
