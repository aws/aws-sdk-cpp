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
  enum class ConfigurationLevel
  {
    NOT_SET,
    ORGANIZATION,
    ACCOUNT
  };

namespace ConfigurationLevelMapper
{
AWS_INSPECTOR2_API ConfigurationLevel GetConfigurationLevelForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForConfigurationLevel(ConfigurationLevel value);
} // namespace ConfigurationLevelMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
