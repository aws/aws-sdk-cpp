/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class LaunchType
  {
    NOT_SET,
    EC2,
    FARGATE
  };

namespace LaunchTypeMapper
{
AWS_EVENTBRIDGE_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForLaunchType(LaunchType value);
} // namespace LaunchTypeMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
