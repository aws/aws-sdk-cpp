/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class FilterAction
  {
    NOT_SET,
    NONE,
    SUPPRESS
  };

namespace FilterActionMapper
{
AWS_INSPECTOR2_API FilterAction GetFilterActionForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForFilterAction(FilterAction value);
} // namespace FilterActionMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
