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
enum class MedicalScribeLanguageCode { NOT_SET, en_US };

namespace MedicalScribeLanguageCodeMapper {
AWS_CONNECTHEALTH_API MedicalScribeLanguageCode GetMedicalScribeLanguageCodeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForMedicalScribeLanguageCode(MedicalScribeLanguageCode value);
}  // namespace MedicalScribeLanguageCodeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
