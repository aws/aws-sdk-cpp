/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qldb/QLDBErrors.h>

using namespace Aws::Client;
using namespace Aws::QLDB;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace QLDBErrorMapper
{

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("ResourcePreconditionNotMetException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_IN_USE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QLDBErrorMapper
} // namespace QLDB
} // namespace Aws
