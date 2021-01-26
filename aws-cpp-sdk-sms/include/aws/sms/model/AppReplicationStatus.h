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
  enum class AppReplicationStatus
  {
    NOT_SET,
    READY_FOR_CONFIGURATION,
    CONFIGURATION_IN_PROGRESS,
    CONFIGURATION_INVALID,
    READY_FOR_REPLICATION,
    VALIDATION_IN_PROGRESS,
    REPLICATION_PENDING,
    REPLICATION_IN_PROGRESS,
    REPLICATED,
    PARTIALLY_REPLICATED,
    DELTA_REPLICATION_IN_PROGRESS,
    DELTA_REPLICATED,
    DELTA_REPLICATION_FAILED,
    REPLICATION_FAILED,
    REPLICATION_STOPPING,
    REPLICATION_STOP_FAILED,
    REPLICATION_STOPPED
  };

namespace AppReplicationStatusMapper
{
AWS_SMS_API AppReplicationStatus GetAppReplicationStatusForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForAppReplicationStatus(AppReplicationStatus value);
} // namespace AppReplicationStatusMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
