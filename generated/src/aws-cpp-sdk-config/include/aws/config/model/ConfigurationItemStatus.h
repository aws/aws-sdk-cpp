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
  enum class ConfigurationItemStatus
  {
    NOT_SET,
    OK,
    ResourceDiscovered,
    ResourceNotRecorded,
    ResourceDeleted,
    ResourceDeletedNotRecorded
  };

namespace ConfigurationItemStatusMapper
{
AWS_CONFIGSERVICE_API ConfigurationItemStatus GetConfigurationItemStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConfigurationItemStatus(ConfigurationItemStatus value);
} // namespace ConfigurationItemStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
