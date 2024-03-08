/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/LexModelsV2Errors.h>
#include <aws/lexv2-models/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LexModelsV2;
using namespace Aws::LexModelsV2::Model;

namespace Aws
{
namespace LexModelsV2
{
template<> AWS_LEXMODELSV2_API ThrottlingException LexModelsV2Error::GetModeledError()
{
  assert(this->GetErrorType() == LexModelsV2Errors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace LexModelsV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::PRECONDITION_FAILED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexModelsV2ErrorMapper
} // namespace LexModelsV2
} // namespace Aws
