/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/elb-proxy/ELBProxyErrors.h>
#include <aws/elb-proxy/model/ServiceQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ELBProxy;
using namespace Aws::ELBProxy::Model;

namespace Aws {
namespace ELBProxy {
template <>
AWS_ELBPROXY_API ServiceQuotaExceededException ELBProxyError::GetModeledError() {
  assert(this->GetErrorType() == ELBProxyErrors::SERVICE_QUOTA_EXCEEDED);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ServiceQuotaExceededException(payload.GetDecoder());
}

namespace ELBProxyErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int PRIOR_REQUEST_NOT_COMPLETED_HASH = HashingUtils::HashString("PriorRequestNotCompletedException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ELBProxyErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == OPERATION_NOT_PERMITTED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ELBProxyErrors::OPERATION_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ELBProxyErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ELBProxyErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == PRIOR_REQUEST_NOT_COMPLETED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ELBProxyErrors::PRIOR_REQUEST_NOT_COMPLETED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace ELBProxyErrorMapper
}  // namespace ELBProxy
}  // namespace Aws
