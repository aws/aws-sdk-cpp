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
  enum class CisSecurityLevelComparison
  {
    NOT_SET,
    EQUALS
  };

namespace CisSecurityLevelComparisonMapper
{
AWS_INSPECTOR2_API CisSecurityLevelComparison GetCisSecurityLevelComparisonForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisSecurityLevelComparison(CisSecurityLevelComparison value);
} // namespace CisSecurityLevelComparisonMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
