/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrors.h>
#include <aws/cost-optimization-hub/model/ResourceNotFoundException.h>
#include <aws/cost-optimization-hub/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CostOptimizationHub;
using namespace Aws::CostOptimizationHub::Model;

namespace Aws
{
namespace CostOptimizationHub
{
template<> AWS_COSTOPTIMIZATIONHUB_API ResourceNotFoundException CostOptimizationHubError::GetModeledError()
{
  assert(this->GetErrorType() == CostOptimizationHubErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_COSTOPTIMIZATIONHUB_API ValidationException CostOptimizationHubError::GetModeledError()
{
  assert(this->GetErrorType() == CostOptimizationHubErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace CostOptimizationHubErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostOptimizationHubErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CostOptimizationHubErrorMapper
} // namespace CostOptimizationHub
} // namespace Aws
