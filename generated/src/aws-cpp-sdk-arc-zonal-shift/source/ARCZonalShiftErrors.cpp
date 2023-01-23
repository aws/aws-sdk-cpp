/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrors.h>
#include <aws/arc-zonal-shift/model/ConflictException.h>
#include <aws/arc-zonal-shift/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ARCZonalShift;
using namespace Aws::ARCZonalShift::Model;

namespace Aws
{
namespace ARCZonalShift
{
template<> AWS_ARCZONALSHIFT_API ConflictException ARCZonalShiftError::GetModeledError()
{
  assert(this->GetErrorType() == ARCZonalShiftErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_ARCZONALSHIFT_API ValidationException ARCZonalShiftError::GetModeledError()
{
  assert(this->GetErrorType() == ARCZonalShiftErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace ARCZonalShiftErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ARCZonalShiftErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ARCZonalShiftErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ARCZonalShiftErrorMapper
} // namespace ARCZonalShift
} // namespace Aws
