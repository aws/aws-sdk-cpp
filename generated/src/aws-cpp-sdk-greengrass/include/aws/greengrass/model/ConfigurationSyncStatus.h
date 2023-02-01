/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class ConfigurationSyncStatus
  {
    NOT_SET,
    InSync,
    OutOfSync
  };

namespace ConfigurationSyncStatusMapper
{
AWS_GREENGRASS_API ConfigurationSyncStatus GetConfigurationSyncStatusForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForConfigurationSyncStatus(ConfigurationSyncStatus value);
} // namespace ConfigurationSyncStatusMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
