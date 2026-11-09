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
enum class ReplicationBackfillResultStatus { NOT_SET, COMPLETE, FAILED };

namespace ReplicationBackfillResultStatusMapper {
AWS_ECR_API ReplicationBackfillResultStatus GetReplicationBackfillResultStatusForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForReplicationBackfillResultStatus(ReplicationBackfillResultStatus value);
}  // namespace ReplicationBackfillResultStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
