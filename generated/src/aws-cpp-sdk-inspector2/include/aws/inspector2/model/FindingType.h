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
  enum class FindingType
  {
    NOT_SET,
    NETWORK_REACHABILITY,
    PACKAGE_VULNERABILITY,
    CODE_VULNERABILITY
  };

namespace FindingTypeMapper
{
AWS_INSPECTOR2_API FindingType GetFindingTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForFindingType(FindingType value);
} // namespace FindingTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
