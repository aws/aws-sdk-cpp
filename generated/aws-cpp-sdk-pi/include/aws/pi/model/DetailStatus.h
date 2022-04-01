/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class DetailStatus
  {
    NOT_SET,
    AVAILABLE,
    PROCESSING,
    UNAVAILABLE
  };

namespace DetailStatusMapper
{
AWS_PI_API DetailStatus GetDetailStatusForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForDetailStatus(DetailStatus value);
} // namespace DetailStatusMapper
} // namespace Model
} // namespace PI
} // namespace Aws
