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
enum class AssessmentType { NOT_SET, UPDATE_BROKER_TYPE };

namespace AssessmentTypeMapper {
AWS_KAFKA_API AssessmentType GetAssessmentTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForAssessmentType(AssessmentType value);
}  // namespace AssessmentTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
