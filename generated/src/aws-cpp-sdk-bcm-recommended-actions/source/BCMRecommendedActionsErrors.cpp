/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrors.h>
#include <aws/bcm-recommended-actions/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BCMRecommendedActions;
using namespace Aws::BCMRecommendedActions::Model;

namespace Aws
{
namespace BCMRecommendedActions
{
template<> AWS_BCMRECOMMENDEDACTIONS_API ValidationException BCMRecommendedActionsError::GetModeledError()
{
  assert(this->GetErrorType() == BCMRecommendedActionsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BCMRecommendedActionsErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMRecommendedActionsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BCMRecommendedActionsErrorMapper
} // namespace BCMRecommendedActions
} // namespace Aws
