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
  enum class DiscoveryType
  {
    NOT_SET,
    RESOURCE_GROUP_BASED,
    ACCOUNT_BASED
  };

namespace DiscoveryTypeMapper
{
AWS_APPLICATIONINSIGHTS_API DiscoveryType GetDiscoveryTypeForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForDiscoveryType(DiscoveryType value);
} // namespace DiscoveryTypeMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
