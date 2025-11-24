/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ComputeOptimizerAutomation;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace ComputeOptimizerAutomationErrorMapper {

static const int IDEMPOTENCY_TOKEN_IN_USE_HASH = HashingUtils::HashString("IdempotencyTokenInUseException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int NOT_MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("NotManagementAccountException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_TOKEN_IN_USE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::IDEMPOTENCY_TOKEN_IN_USE),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::SERVICE_QUOTA_EXCEEDED),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FORBIDDEN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::IDEMPOTENT_PARAMETER_MISMATCH),
                                RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NOT_MANAGEMENT_ACCOUNT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerAutomationErrors::NOT_MANAGEMENT_ACCOUNT),
                                RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace ComputeOptimizerAutomationErrorMapper
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
