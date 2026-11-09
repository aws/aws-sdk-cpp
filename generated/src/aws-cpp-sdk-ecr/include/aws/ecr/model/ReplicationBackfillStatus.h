/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace ECR {
namespace Model {
enum class ReplicationBackfillStatus { NOT_SET, PREPARING, IN_PROGRESS, COMPLETE, FAILED, STOPPING, STOPPED };

namespace ReplicationBackfillStatusMapper {
AWS_ECR_API ReplicationBackfillStatus GetReplicationBackfillStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForReplicationBackfillStatus(ReplicationBackfillStatus value);
}  // namespace ReplicationBackfillStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
