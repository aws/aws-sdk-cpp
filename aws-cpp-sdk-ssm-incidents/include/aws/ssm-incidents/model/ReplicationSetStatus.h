/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{
  enum class ReplicationSetStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    UPDATING,
    DELETING,
    FAILED
  };

namespace ReplicationSetStatusMapper
{
AWS_SSMINCIDENTS_API ReplicationSetStatus GetReplicationSetStatusForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForReplicationSetStatus(ReplicationSetStatus value);
} // namespace ReplicationSetStatusMapper
} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
