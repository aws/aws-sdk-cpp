/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fms/FMSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::FMS;

namespace Aws
{
namespace FMS
{
namespace FMSErrorMapper
{

static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidTypeException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidOperationException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FMSErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FMSErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FMSErrors::INVALID_TYPE), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FMSErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FMSErrors::INVALID_OPERATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FMSErrorMapper
} // namespace FMS
} // namespace Aws
