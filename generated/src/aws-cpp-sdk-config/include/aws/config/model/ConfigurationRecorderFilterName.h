/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ConfigurationRecorderFilterName
  {
    NOT_SET,
    recordingScope
  };

namespace ConfigurationRecorderFilterNameMapper
{
AWS_CONFIGSERVICE_API ConfigurationRecorderFilterName GetConfigurationRecorderFilterNameForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConfigurationRecorderFilterName(ConfigurationRecorderFilterName value);
} // namespace ConfigurationRecorderFilterNameMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
