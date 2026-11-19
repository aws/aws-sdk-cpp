/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class AssessmentStatus { NOT_SET, IN_PROGRESS, COMPLETE, FAILED, DELETING };

namespace AssessmentStatusMapper {
AWS_KAFKA_API AssessmentStatus GetAssessmentStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForAssessmentStatus(AssessmentStatus value);
}  // namespace AssessmentStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
