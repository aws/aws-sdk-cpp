/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class TargetSelection
  {
    NOT_SET,
    CONTINUOUS,
    SNAPSHOT
  };

namespace TargetSelectionMapper
{
AWS_IOT_API TargetSelection GetTargetSelectionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForTargetSelection(TargetSelection value);
} // namespace TargetSelectionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
