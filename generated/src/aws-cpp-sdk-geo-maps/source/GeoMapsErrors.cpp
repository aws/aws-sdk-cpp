/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/GeoMapsErrors.h>
#include <aws/geo-maps/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GeoMaps;
using namespace Aws::GeoMaps::Model;

namespace Aws
{
namespace GeoMaps
{
template<> AWS_GEOMAPS_API ValidationException GeoMapsError::GetModeledError()
{
  assert(this->GetErrorType() == GeoMapsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace GeoMapsErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GeoMapsErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GeoMapsErrorMapper
} // namespace GeoMaps
} // namespace Aws
