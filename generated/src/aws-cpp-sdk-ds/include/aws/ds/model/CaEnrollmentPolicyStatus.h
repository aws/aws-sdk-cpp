/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws {
namespace DirectoryService {
namespace Model {
enum class CaEnrollmentPolicyStatus { NOT_SET, InProgress, Success, Failed, Disabling, Disabled, Impaired };

namespace CaEnrollmentPolicyStatusMapper {
AWS_DIRECTORYSERVICE_API CaEnrollmentPolicyStatus GetCaEnrollmentPolicyStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForCaEnrollmentPolicyStatus(CaEnrollmentPolicyStatus value);
}  // namespace CaEnrollmentPolicyStatusMapper
}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
