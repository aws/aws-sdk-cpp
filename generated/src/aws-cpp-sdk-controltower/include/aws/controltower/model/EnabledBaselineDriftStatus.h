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
  enum class EnabledBaselineDriftStatus
  {
    NOT_SET,
    IN_SYNC,
    DRIFTED
  };

namespace EnabledBaselineDriftStatusMapper
{
AWS_CONTROLTOWER_API EnabledBaselineDriftStatus GetEnabledBaselineDriftStatusForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForEnabledBaselineDriftStatus(EnabledBaselineDriftStatus value);
} // namespace EnabledBaselineDriftStatusMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
