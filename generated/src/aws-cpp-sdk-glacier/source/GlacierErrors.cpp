/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glacier/GlacierErrors.h>
#include <aws/glacier/model/ServiceUnavailableException.h>
#include <aws/glacier/model/ResourceNotFoundException.h>
#include <aws/glacier/model/InsufficientCapacityException.h>
#include <aws/glacier/model/RequestTimeoutException.h>
#include <aws/glacier/model/LimitExceededException.h>
#include <aws/glacier/model/PolicyEnforcedException.h>
#include <aws/glacier/model/InvalidParameterValueException.h>
#include <aws/glacier/model/MissingParameterValueException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Glacier;
using namespace Aws::Glacier::Model;

namespace Aws
{
namespace Glacier
{
template<> AWS_GLACIER_API ServiceUnavailableException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::SERVICE_UNAVAILABLE);
  return ServiceUnavailableException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API ResourceNotFoundException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API InsufficientCapacityException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::INSUFFICIENT_CAPACITY);
  return InsufficientCapacityException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API RequestTimeoutException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::REQUEST_TIMEOUT);
  return RequestTimeoutException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API LimitExceededException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API PolicyEnforcedException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::POLICY_ENFORCED);
  return PolicyEnforcedException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API InvalidParameterValueException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValueException(this->GetJsonPayload().View());
}

template<> AWS_GLACIER_API MissingParameterValueException GlacierError::GetModeledError()
{
  assert(this->GetErrorType() == GlacierErrors::MISSING_PARAMETER_VALUE);
  return MissingParameterValueException(this->GetJsonPayload().View());
}

namespace GlacierErrorMapper
{

static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("InsufficientCapacityException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int POLICY_ENFORCED_HASH = HashingUtils::HashString("PolicyEnforcedException");
static const int MISSING_PARAMETER_VALUE_HASH = HashingUtils::HashString("MissingParameterValueException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSUFFICIENT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::INSUFFICIENT_CAPACITY), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == POLICY_ENFORCED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::POLICY_ENFORCED), false);
  }
  else if (hashCode == MISSING_PARAMETER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::MISSING_PARAMETER_VALUE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlacierErrorMapper
} // namespace Glacier
} // namespace Aws
