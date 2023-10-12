/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/LambdaErrors.h>
#include <aws/lambda/model/EFSMountConnectivityException.h>
#include <aws/lambda/model/ResourceNotReadyException.h>
#include <aws/lambda/model/ResourceNotFoundException.h>
#include <aws/lambda/model/ProvisionedConcurrencyConfigNotFoundException.h>
#include <aws/lambda/model/KMSInvalidStateException.h>
#include <aws/lambda/model/RecursiveInvocationException.h>
#include <aws/lambda/model/InvalidParameterValueException.h>
#include <aws/lambda/model/PolicyLengthExceededException.h>
#include <aws/lambda/model/KMSNotFoundException.h>
#include <aws/lambda/model/PreconditionFailedException.h>
#include <aws/lambda/model/CodeVerificationFailedException.h>
#include <aws/lambda/model/SnapStartException.h>
#include <aws/lambda/model/ResourceInUseException.h>
#include <aws/lambda/model/SubnetIPAddressLimitReachedException.h>
#include <aws/lambda/model/SnapStartNotReadyException.h>
#include <aws/lambda/model/InvalidRequestContentException.h>
#include <aws/lambda/model/EC2AccessDeniedException.h>
#include <aws/lambda/model/RequestTooLargeException.h>
#include <aws/lambda/model/InvalidCodeSignatureException.h>
#include <aws/lambda/model/EFSIOException.h>
#include <aws/lambda/model/InvalidSecurityGroupIDException.h>
#include <aws/lambda/model/InvalidSubnetIDException.h>
#include <aws/lambda/model/CodeSigningConfigNotFoundException.h>
#include <aws/lambda/model/EFSMountTimeoutException.h>
#include <aws/lambda/model/InvalidRuntimeException.h>
#include <aws/lambda/model/EC2UnexpectedException.h>
#include <aws/lambda/model/InvalidZipFileException.h>
#include <aws/lambda/model/UnsupportedMediaTypeException.h>
#include <aws/lambda/model/EFSMountFailureException.h>
#include <aws/lambda/model/KMSDisabledException.h>
#include <aws/lambda/model/KMSAccessDeniedException.h>
#include <aws/lambda/model/EC2ThrottledException.h>
#include <aws/lambda/model/ResourceConflictException.h>
#include <aws/lambda/model/ENILimitReachedException.h>
#include <aws/lambda/model/TooManyRequestsException.h>
#include <aws/lambda/model/ServiceException.h>
#include <aws/lambda/model/SnapStartTimeoutException.h>
#include <aws/lambda/model/CodeStorageExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;

namespace Aws
{
namespace Lambda
{
template<> AWS_LAMBDA_API EFSMountConnectivityException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_F_S_MOUNT_CONNECTIVITY);
  return EFSMountConnectivityException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ResourceNotReadyException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::RESOURCE_NOT_READY);
  return ResourceNotReadyException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ResourceNotFoundException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ProvisionedConcurrencyConfigNotFoundException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::PROVISIONED_CONCURRENCY_CONFIG_NOT_FOUND);
  return ProvisionedConcurrencyConfigNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API KMSInvalidStateException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::K_M_S_INVALID_STATE);
  return KMSInvalidStateException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API RecursiveInvocationException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::RECURSIVE_INVOCATION);
  return RecursiveInvocationException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidParameterValueException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API PolicyLengthExceededException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::POLICY_LENGTH_EXCEEDED);
  return PolicyLengthExceededException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API KMSNotFoundException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::K_M_S_NOT_FOUND);
  return KMSNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API PreconditionFailedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::PRECONDITION_FAILED);
  return PreconditionFailedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API CodeVerificationFailedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::CODE_VERIFICATION_FAILED);
  return CodeVerificationFailedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API SnapStartException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::SNAP_START);
  return SnapStartException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ResourceInUseException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API SubnetIPAddressLimitReachedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::SUBNET_I_P_ADDRESS_LIMIT_REACHED);
  return SubnetIPAddressLimitReachedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API SnapStartNotReadyException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::SNAP_START_NOT_READY);
  return SnapStartNotReadyException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidRequestContentException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_REQUEST_CONTENT);
  return InvalidRequestContentException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EC2AccessDeniedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_C2_ACCESS_DENIED);
  return EC2AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API RequestTooLargeException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::REQUEST_TOO_LARGE);
  return RequestTooLargeException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidCodeSignatureException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_CODE_SIGNATURE);
  return InvalidCodeSignatureException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EFSIOException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_F_S_I_O);
  return EFSIOException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidSecurityGroupIDException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_SECURITY_GROUP_I_D);
  return InvalidSecurityGroupIDException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidSubnetIDException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_SUBNET_I_D);
  return InvalidSubnetIDException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API CodeSigningConfigNotFoundException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::CODE_SIGNING_CONFIG_NOT_FOUND);
  return CodeSigningConfigNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EFSMountTimeoutException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_F_S_MOUNT_TIMEOUT);
  return EFSMountTimeoutException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidRuntimeException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_RUNTIME);
  return InvalidRuntimeException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EC2UnexpectedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_C2_UNEXPECTED);
  return EC2UnexpectedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API InvalidZipFileException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::INVALID_ZIP_FILE);
  return InvalidZipFileException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API UnsupportedMediaTypeException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::UNSUPPORTED_MEDIA_TYPE);
  return UnsupportedMediaTypeException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EFSMountFailureException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_F_S_MOUNT_FAILURE);
  return EFSMountFailureException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API KMSDisabledException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::K_M_S_DISABLED);
  return KMSDisabledException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API KMSAccessDeniedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::K_M_S_ACCESS_DENIED);
  return KMSAccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API EC2ThrottledException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_C2_THROTTLED);
  return EC2ThrottledException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ResourceConflictException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ENILimitReachedException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::E_N_I_LIMIT_REACHED);
  return ENILimitReachedException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API TooManyRequestsException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API ServiceException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::SERVICE);
  return ServiceException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API SnapStartTimeoutException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::SNAP_START_TIMEOUT);
  return SnapStartTimeoutException(this->GetJsonPayload().View());
}

template<> AWS_LAMBDA_API CodeStorageExceededException LambdaError::GetModeledError()
{
  assert(this->GetErrorType() == LambdaErrors::CODE_STORAGE_EXCEEDED);
  return CodeStorageExceededException(this->GetJsonPayload().View());
}

namespace LambdaErrorMapper
{

static constexpr uint32_t E_F_S_MOUNT_CONNECTIVITY_HASH = ConstExprHashingUtils::HashString("EFSMountConnectivityException");
static constexpr uint32_t RESOURCE_NOT_READY_HASH = ConstExprHashingUtils::HashString("ResourceNotReadyException");
static constexpr uint32_t PROVISIONED_CONCURRENCY_CONFIG_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ProvisionedConcurrencyConfigNotFoundException");
static constexpr uint32_t K_M_S_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("KMSInvalidStateException");
static constexpr uint32_t RECURSIVE_INVOCATION_HASH = ConstExprHashingUtils::HashString("RecursiveInvocationException");
static constexpr uint32_t POLICY_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PolicyLengthExceededException");
static constexpr uint32_t K_M_S_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("KMSNotFoundException");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailedException");
static constexpr uint32_t CODE_VERIFICATION_FAILED_HASH = ConstExprHashingUtils::HashString("CodeVerificationFailedException");
static constexpr uint32_t SNAP_START_HASH = ConstExprHashingUtils::HashString("SnapStartException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t SUBNET_I_P_ADDRESS_LIMIT_REACHED_HASH = ConstExprHashingUtils::HashString("SubnetIPAddressLimitReachedException");
static constexpr uint32_t SNAP_START_NOT_READY_HASH = ConstExprHashingUtils::HashString("SnapStartNotReadyException");
static constexpr uint32_t INVALID_REQUEST_CONTENT_HASH = ConstExprHashingUtils::HashString("InvalidRequestContentException");
static constexpr uint32_t E_C2_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("EC2AccessDeniedException");
static constexpr uint32_t REQUEST_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("RequestTooLargeException");
static constexpr uint32_t INVALID_CODE_SIGNATURE_HASH = ConstExprHashingUtils::HashString("InvalidCodeSignatureException");
static constexpr uint32_t E_F_S_I_O_HASH = ConstExprHashingUtils::HashString("EFSIOException");
static constexpr uint32_t INVALID_SECURITY_GROUP_I_D_HASH = ConstExprHashingUtils::HashString("InvalidSecurityGroupIDException");
static constexpr uint32_t INVALID_SUBNET_I_D_HASH = ConstExprHashingUtils::HashString("InvalidSubnetIDException");
static constexpr uint32_t CODE_SIGNING_CONFIG_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CodeSigningConfigNotFoundException");
static constexpr uint32_t E_F_S_MOUNT_TIMEOUT_HASH = ConstExprHashingUtils::HashString("EFSMountTimeoutException");
static constexpr uint32_t INVALID_RUNTIME_HASH = ConstExprHashingUtils::HashString("InvalidRuntimeException");
static constexpr uint32_t E_C2_UNEXPECTED_HASH = ConstExprHashingUtils::HashString("EC2UnexpectedException");
static constexpr uint32_t INVALID_ZIP_FILE_HASH = ConstExprHashingUtils::HashString("InvalidZipFileException");
static constexpr uint32_t UNSUPPORTED_MEDIA_TYPE_HASH = ConstExprHashingUtils::HashString("UnsupportedMediaTypeException");
static constexpr uint32_t E_F_S_MOUNT_FAILURE_HASH = ConstExprHashingUtils::HashString("EFSMountFailureException");
static constexpr uint32_t K_M_S_DISABLED_HASH = ConstExprHashingUtils::HashString("KMSDisabledException");
static constexpr uint32_t K_M_S_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("KMSAccessDeniedException");
static constexpr uint32_t E_C2_THROTTLED_HASH = ConstExprHashingUtils::HashString("EC2ThrottledException");
static constexpr uint32_t RESOURCE_CONFLICT_HASH = ConstExprHashingUtils::HashString("ResourceConflictException");
static constexpr uint32_t E_N_I_LIMIT_REACHED_HASH = ConstExprHashingUtils::HashString("ENILimitReachedException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("ServiceException");
static constexpr uint32_t SNAP_START_TIMEOUT_HASH = ConstExprHashingUtils::HashString("SnapStartTimeoutException");
static constexpr uint32_t CODE_STORAGE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CodeStorageExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == E_F_S_MOUNT_CONNECTIVITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_F_S_MOUNT_CONNECTIVITY), false);
  }
  else if (hashCode == RESOURCE_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_NOT_READY), false);
  }
  else if (hashCode == PROVISIONED_CONCURRENCY_CONFIG_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::PROVISIONED_CONCURRENCY_CONFIG_NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == RECURSIVE_INVOCATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RECURSIVE_INVOCATION), false);
  }
  else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::POLICY_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == CODE_VERIFICATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::CODE_VERIFICATION_FAILED), false);
  }
  else if (hashCode == SNAP_START_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SNAP_START), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == SUBNET_I_P_ADDRESS_LIMIT_REACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SUBNET_I_P_ADDRESS_LIMIT_REACHED), false);
  }
  else if (hashCode == SNAP_START_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SNAP_START_NOT_READY), false);
  }
  else if (hashCode == INVALID_REQUEST_CONTENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_REQUEST_CONTENT), false);
  }
  else if (hashCode == E_C2_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_ACCESS_DENIED), false);
  }
  else if (hashCode == REQUEST_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::REQUEST_TOO_LARGE), false);
  }
  else if (hashCode == INVALID_CODE_SIGNATURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_CODE_SIGNATURE), false);
  }
  else if (hashCode == E_F_S_I_O_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_F_S_I_O), false);
  }
  else if (hashCode == INVALID_SECURITY_GROUP_I_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_SECURITY_GROUP_I_D), false);
  }
  else if (hashCode == INVALID_SUBNET_I_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_SUBNET_I_D), false);
  }
  else if (hashCode == CODE_SIGNING_CONFIG_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::CODE_SIGNING_CONFIG_NOT_FOUND), false);
  }
  else if (hashCode == E_F_S_MOUNT_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_F_S_MOUNT_TIMEOUT), false);
  }
  else if (hashCode == INVALID_RUNTIME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_RUNTIME), false);
  }
  else if (hashCode == E_C2_UNEXPECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_UNEXPECTED), false);
  }
  else if (hashCode == INVALID_ZIP_FILE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::INVALID_ZIP_FILE), false);
  }
  else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::UNSUPPORTED_MEDIA_TYPE), false);
  }
  else if (hashCode == E_F_S_MOUNT_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_F_S_MOUNT_FAILURE), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == E_C2_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_C2_THROTTLED), true);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == E_N_I_LIMIT_REACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::E_N_I_LIMIT_REACHED), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SERVICE), false);
  }
  else if (hashCode == SNAP_START_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::SNAP_START_TIMEOUT), false);
  }
  else if (hashCode == CODE_STORAGE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaErrors::CODE_STORAGE_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LambdaErrorMapper
} // namespace Lambda
} // namespace Aws
