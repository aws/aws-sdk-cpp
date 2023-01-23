/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class ConfigurationSource
  {
    NOT_SET,
    REPOSITORY,
    API
  };

namespace ConfigurationSourceMapper
{
AWS_APPRUNNER_API ConfigurationSource GetConfigurationSourceForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForConfigurationSource(ConfigurationSource value);
} // namespace ConfigurationSourceMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
