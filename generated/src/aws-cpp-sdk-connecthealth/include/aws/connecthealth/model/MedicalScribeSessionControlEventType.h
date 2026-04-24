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
enum class MedicalScribeSessionControlEventType { NOT_SET, END_OF_SESSION };

namespace MedicalScribeSessionControlEventTypeMapper {
AWS_CONNECTHEALTH_API MedicalScribeSessionControlEventType GetMedicalScribeSessionControlEventTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForMedicalScribeSessionControlEventType(MedicalScribeSessionControlEventType value);
}  // namespace MedicalScribeSessionControlEventTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
