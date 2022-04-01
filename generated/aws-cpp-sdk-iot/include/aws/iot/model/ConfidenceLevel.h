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
  enum class ConfidenceLevel
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace ConfidenceLevelMapper
{
AWS_IOT_API ConfidenceLevel GetConfidenceLevelForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForConfidenceLevel(ConfidenceLevel value);
} // namespace ConfidenceLevelMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
