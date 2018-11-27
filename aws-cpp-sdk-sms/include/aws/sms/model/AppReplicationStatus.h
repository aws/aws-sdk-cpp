/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
