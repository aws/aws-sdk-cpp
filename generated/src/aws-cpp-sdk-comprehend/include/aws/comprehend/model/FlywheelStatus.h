/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class FlywheelStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    FAILED
  };

namespace FlywheelStatusMapper
{
AWS_COMPREHEND_API FlywheelStatus GetFlywheelStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForFlywheelStatus(FlywheelStatus value);
} // namespace FlywheelStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
