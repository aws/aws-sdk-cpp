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
enum class PatientStatus { NOT_SET, NEW_, ESTABLISHED };

namespace PatientStatusMapper {
AWS_CONNECTHEALTH_API PatientStatus GetPatientStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForPatientStatus(PatientStatus value);
}  // namespace PatientStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
