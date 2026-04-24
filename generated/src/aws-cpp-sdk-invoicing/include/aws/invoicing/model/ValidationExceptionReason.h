/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
namespace Model {
enum class ValidationExceptionReason {
  NOT_SET,
  nonMemberPresent,
  maxAccountsExceeded,
  maxInvoiceUnitsExceeded,
  duplicateInvoiceUnit,
  mutualExclusionError,
  accountMembershipError,
  taxSettingsError,
  expiredNextToken,
  invalidNextToken,
  invalidInput,
  fieldValidationFailed,
  cannotParse,
  unknownOperation,
  other
};

namespace ValidationExceptionReasonMapper {
AWS_INVOICING_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
