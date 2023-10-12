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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::INTERNAL_SERVER), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelsV2Errors::PRECONDITION_FAILED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexModelsV2ErrorMapper
} // namespace LexModelsV2
} // namespace Aws
