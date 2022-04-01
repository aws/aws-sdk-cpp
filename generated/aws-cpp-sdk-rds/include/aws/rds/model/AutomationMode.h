/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class AutomationMode
  {
    NOT_SET,
    full,
    all_paused
  };

namespace AutomationModeMapper
{
AWS_RDS_API AutomationMode GetAutomationModeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForAutomationMode(AutomationMode value);
} // namespace AutomationModeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
