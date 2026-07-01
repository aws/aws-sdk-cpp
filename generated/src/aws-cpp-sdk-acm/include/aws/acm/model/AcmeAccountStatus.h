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
enum class AcmeAccountStatus { NOT_SET, VALID, DEACTIVATED, REVOKED };

namespace AcmeAccountStatusMapper {
AWS_ACM_API AcmeAccountStatus GetAcmeAccountStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForAcmeAccountStatus(AcmeAccountStatus value);
}  // namespace AcmeAccountStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
