/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ReplicationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace ReplicationStatusMapper
{
AWS_ECR_API ReplicationStatus GetReplicationStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForReplicationStatus(ReplicationStatus value);
} // namespace ReplicationStatusMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
