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
  enum class CisSecurityLevel
  {
    NOT_SET,
    LEVEL_1,
    LEVEL_2
  };

namespace CisSecurityLevelMapper
{
AWS_INSPECTOR2_API CisSecurityLevel GetCisSecurityLevelForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisSecurityLevel(CisSecurityLevel value);
} // namespace CisSecurityLevelMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
