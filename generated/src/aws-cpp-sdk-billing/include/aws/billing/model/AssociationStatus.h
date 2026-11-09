/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class AssociationStatus { NOT_SET, ASSOCIATED, NOT_ASSOCIATED };

namespace AssociationStatusMapper {
AWS_BILLING_API AssociationStatus GetAssociationStatusForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForAssociationStatus(AssociationStatus value);
}  // namespace AssociationStatusMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
