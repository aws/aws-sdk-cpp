/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class AppReplicationConfigurationStatus
  {
    NOT_SET,
    NOT_CONFIGURED,
    CONFIGURED
  };

namespace AppReplicationConfigurationStatusMapper
{
AWS_SMS_API AppReplicationConfigurationStatus GetAppReplicationConfigurationStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForAppReplicationConfigurationStatus(AppReplicationConfigurationStatus value);
} // namespace AppReplicationConfigurationStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
