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
  enum class ReplicationJobState
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    FAILED,
    DELETING,
    DELETED,
    COMPLETED,
    PAUSED_ON_FAILURE,
    FAILING
  };

namespace ReplicationJobStateMapper
{
AWS_SMS_API ReplicationJobState GetReplicationJobStateForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForReplicationJobState(ReplicationJobState value);
} // namespace ReplicationJobStateMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
