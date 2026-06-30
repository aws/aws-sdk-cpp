/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class AcmeDomainValidationStatus { NOT_SET, VALIDATING, VALID, INVALID, DELETING };

namespace AcmeDomainValidationStatusMapper {
AWS_ACM_API AcmeDomainValidationStatus GetAcmeDomainValidationStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForAcmeDomainValidationStatus(AcmeDomainValidationStatus value);
}  // namespace AcmeDomainValidationStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
