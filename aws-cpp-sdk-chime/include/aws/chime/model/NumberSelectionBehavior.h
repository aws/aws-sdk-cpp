/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class NumberSelectionBehavior
  {
    NOT_SET,
    PreferSticky,
    AvoidSticky
  };

namespace NumberSelectionBehaviorMapper
{
AWS_CHIME_API NumberSelectionBehavior GetNumberSelectionBehaviorForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForNumberSelectionBehavior(NumberSelectionBehavior value);
} // namespace NumberSelectionBehaviorMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
