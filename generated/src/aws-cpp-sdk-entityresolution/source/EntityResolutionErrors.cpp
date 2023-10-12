/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/entityresolution/EntityResolutionErrors.h>
#include <aws/entityresolution/model/ExceedsLimitException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EntityResolution;
using namespace Aws::EntityResolution::Model;

namespace Aws
{
namespace EntityResolution
{
template<> AWS_ENTITYRESOLUTION_API ExceedsLimitException EntityResolutionError::GetModeledError()
{
  assert(this->GetErrorType() == EntityResolutionErrors::EXCEEDS_LIMIT);
  return ExceedsLimitException(this->GetJsonPayload().View());
}

namespace EntityResolutionErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t EXCEEDS_LIMIT_HASH = ConstExprHashingUtils::HashString("ExceedsLimitException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == EXCEEDS_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::EXCEEDS_LIMIT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EntityResolutionErrorMapper
} // namespace EntityResolution
} // namespace Aws
