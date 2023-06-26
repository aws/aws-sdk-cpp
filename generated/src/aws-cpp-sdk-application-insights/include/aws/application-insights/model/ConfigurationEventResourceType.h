/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class ConfigurationEventResourceType
  {
    NOT_SET,
    CLOUDWATCH_ALARM,
    CLOUDWATCH_LOG,
    CLOUDFORMATION,
    SSM_ASSOCIATION
  };

namespace ConfigurationEventResourceTypeMapper
{
AWS_APPLICATIONINSIGHTS_API ConfigurationEventResourceType GetConfigurationEventResourceTypeForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForConfigurationEventResourceType(ConfigurationEventResourceType value);
} // namespace ConfigurationEventResourceTypeMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
