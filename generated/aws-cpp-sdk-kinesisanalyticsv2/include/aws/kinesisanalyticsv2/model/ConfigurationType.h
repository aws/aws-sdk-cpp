/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class ConfigurationType
  {
    NOT_SET,
    DEFAULT,
    CUSTOM
  };

namespace ConfigurationTypeMapper
{
AWS_KINESISANALYTICSV2_API ConfigurationType GetConfigurationTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForConfigurationType(ConfigurationType value);
} // namespace ConfigurationTypeMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
