/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/license-manager/LicenseManagerErrors.h>
#include <aws/license-manager/model/RedirectException.h>
#include <aws/license-manager/model/FailedDependencyException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LicenseManager;
using namespace Aws::LicenseManager::Model;

namespace Aws
{
namespace LicenseManager
{
template<> AWS_LICENSEMANAGER_API RedirectException LicenseManagerError::GetModeledError()
{
  assert(this->GetErrorType() == LicenseManagerErrors::REDIRECT);
  return RedirectException(this->GetJsonPayload().View());
}

template<> AWS_LICENSEMANAGER_API FailedDependencyException LicenseManagerError::GetModeledError()
{
  assert(this->GetErrorType() == LicenseManagerErrors::FAILED_DEPENDENCY);
  return FailedDependencyException(this->GetJsonPayload().View());
}

namespace LicenseManagerErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int AUTHORIZATION_HASH = HashingUtils::HashString("AuthorizationException");
static const int REDIRECT_HASH = HashingUtils::HashString("RedirectException");
static const int FAILED_DEPENDENCY_HASH = HashingUtils::HashString("FailedDependencyException");
static const int NO_ENTITLEMENTS_ALLOWED_HASH = HashingUtils::HashString("NoEntitlementsAllowedException");
static const int UNSUPPORTED_DIGITAL_SIGNATURE_METHOD_HASH = HashingUtils::HashString("UnsupportedDigitalSignatureMethodException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int SERVER_INTERNAL_HASH = HashingUtils::HashString("ServerInternalException");
static const int ENTITLEMENT_NOT_ALLOWED_HASH = HashingUtils::HashString("EntitlementNotAllowedException");
static const int LICENSE_USAGE_HASH = HashingUtils::HashString("LicenseUsageException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RateLimitExceededException");
static const int FILTER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FilterLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == AUTHORIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::AUTHORIZATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REDIRECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::REDIRECT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FAILED_DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::FAILED_DEPENDENCY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_ENTITLEMENTS_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::NO_ENTITLEMENTS_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_DIGITAL_SIGNATURE_METHOD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::UNSUPPORTED_DIGITAL_SIGNATURE_METHOD), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::INVALID_RESOURCE_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVER_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::SERVER_INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENTITLEMENT_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::ENTITLEMENT_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LICENSE_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::LICENSE_USAGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RATE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::RATE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FILTER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LicenseManagerErrors::FILTER_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LicenseManagerErrorMapper
} // namespace LicenseManager
} // namespace Aws
