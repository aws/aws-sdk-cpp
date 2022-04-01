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
  enum class ControlOperationType
  {
    NOT_SET,
    ENABLE_CONTROL,
    DISABLE_CONTROL
  };

namespace ControlOperationTypeMapper
{
AWS_CONTROLTOWER_API ControlOperationType GetControlOperationTypeForName(const Aws::String& name);

AWS_CONTROLTOWER_API Aws::String GetNameForControlOperationType(ControlOperationType value);
} // namespace ControlOperationTypeMapper
} // namespace Model
} // namespace ControlTower
} // namespace Aws
