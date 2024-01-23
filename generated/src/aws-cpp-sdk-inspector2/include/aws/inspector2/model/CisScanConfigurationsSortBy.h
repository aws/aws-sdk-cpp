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
  enum class CisScanConfigurationsSortBy
  {
    NOT_SET,
    SCAN_NAME,
    SCAN_CONFIGURATION_ARN
  };

namespace CisScanConfigurationsSortByMapper
{
AWS_INSPECTOR2_API CisScanConfigurationsSortBy GetCisScanConfigurationsSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCisScanConfigurationsSortBy(CisScanConfigurationsSortBy value);
} // namespace CisScanConfigurationsSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
