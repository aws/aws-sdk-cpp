/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class ConfigurationItemType
  {
    NOT_SET,
    SERVER,
    PROCESS,
    CONNECTION,
    APPLICATION
  };

namespace ConfigurationItemTypeMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ConfigurationItemType GetConfigurationItemTypeForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForConfigurationItemType(ConfigurationItemType value);
} // namespace ConfigurationItemTypeMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
