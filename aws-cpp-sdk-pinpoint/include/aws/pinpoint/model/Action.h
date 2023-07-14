/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class Action
  {
    NOT_SET,
    OPEN_APP,
    DEEP_LINK,
    URL
  };

namespace ActionMapper
{
AWS_PINPOINT_API Action GetActionForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForAction(Action value);
} // namespace ActionMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
