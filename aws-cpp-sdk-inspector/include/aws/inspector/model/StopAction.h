/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class StopAction
  {
    NOT_SET,
    START_EVALUATION,
    SKIP_EVALUATION
  };

namespace StopActionMapper
{
AWS_INSPECTOR_API StopAction GetStopActionForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForStopAction(StopAction value);
} // namespace StopActionMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
