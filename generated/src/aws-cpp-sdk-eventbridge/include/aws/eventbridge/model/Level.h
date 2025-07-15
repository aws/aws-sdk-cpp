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
  enum class Level
  {
    NOT_SET,
    OFF,
    ERROR_,
    INFO,
    TRACE
  };

namespace LevelMapper
{
AWS_EVENTBRIDGE_API Level GetLevelForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForLevel(Level value);
} // namespace LevelMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
