/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class PortState
  {
    NOT_SET,
    open,
    closed
  };

namespace PortStateMapper
{
AWS_LIGHTSAIL_API PortState GetPortStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForPortState(PortState value);
} // namespace PortStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
