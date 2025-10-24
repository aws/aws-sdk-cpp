/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/MachineLearning_EXPORTS.h>

namespace Aws {
namespace MachineLearning {
namespace Model {
enum class RealtimeEndpointStatus { NOT_SET, NONE, READY, UPDATING, FAILED };

namespace RealtimeEndpointStatusMapper {
AWS_MACHINELEARNING_API RealtimeEndpointStatus GetRealtimeEndpointStatusForName(const Aws::String& name);

AWS_MACHINELEARNING_API Aws::String GetNameForRealtimeEndpointStatus(RealtimeEndpointStatus value);
}  // namespace RealtimeEndpointStatusMapper
}  // namespace Model
}  // namespace MachineLearning
}  // namespace Aws
