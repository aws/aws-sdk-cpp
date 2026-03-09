/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class MedicalScribeStreamStatus { NOT_SET, IN_PROGRESS, PAUSED, FAILED, COMPLETED };

namespace MedicalScribeStreamStatusMapper {
AWS_CONNECTHEALTH_API MedicalScribeStreamStatus GetMedicalScribeStreamStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForMedicalScribeStreamStatus(MedicalScribeStreamStatus value);
}  // namespace MedicalScribeStreamStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
