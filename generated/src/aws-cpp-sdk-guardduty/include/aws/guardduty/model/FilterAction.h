/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class FilterAction
  {
    NOT_SET,
    NOOP,
    ARCHIVE
  };

namespace FilterActionMapper
{
AWS_GUARDDUTY_API FilterAction GetFilterActionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFilterAction(FilterAction value);
} // namespace FilterActionMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
