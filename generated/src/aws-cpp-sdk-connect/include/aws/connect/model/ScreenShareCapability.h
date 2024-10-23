/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ScreenShareCapability
  {
    NOT_SET,
    SEND
  };

namespace ScreenShareCapabilityMapper
{
AWS_CONNECT_API ScreenShareCapability GetScreenShareCapabilityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForScreenShareCapability(ScreenShareCapability value);
} // namespace ScreenShareCapabilityMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
