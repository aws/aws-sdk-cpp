/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class ConfigurationSetAttribute
  {
    NOT_SET,
    eventDestinations,
    trackingOptions,
    deliveryOptions,
    reputationOptions
  };

namespace ConfigurationSetAttributeMapper
{
AWS_SES_API ConfigurationSetAttribute GetConfigurationSetAttributeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForConfigurationSetAttribute(ConfigurationSetAttribute value);
} // namespace ConfigurationSetAttributeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
