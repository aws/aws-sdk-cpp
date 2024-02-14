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
  enum class BaselineOperationType
  {
    NOT_SET,
    ENABLE_BASELINE,
    DISABLE_BASELINE,
    UPDATE_ENABLED_BASELINE,
    RESET_ENABLED_BASELINE
  };

namespace BaselineOperationTypeMapper
{
AWS_CONTROLTOWER_API BaselineOperationType GetBaselineOperationTypeForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForBaselineOperationType(BaselineOperationType value);
} // namespace BaselineOperationTypeMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
