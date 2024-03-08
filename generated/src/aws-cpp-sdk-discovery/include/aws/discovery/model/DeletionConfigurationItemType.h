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
  enum class DeletionConfigurationItemType
  {
    NOT_SET,
    SERVER
  };

namespace DeletionConfigurationItemTypeMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API DeletionConfigurationItemType GetDeletionConfigurationItemTypeForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForDeletionConfigurationItemType(DeletionConfigurationItemType value);
} // namespace DeletionConfigurationItemTypeMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
