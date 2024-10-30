/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/GeoPlacesErrors.h>
#include <aws/geo-places/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GeoPlaces;
using namespace Aws::GeoPlaces::Model;

namespace Aws
{
namespace GeoPlaces
{
template<> AWS_GEOPLACES_API ValidationException GeoPlacesError::GetModeledError()
{
  assert(this->GetErrorType() == GeoPlacesErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace GeoPlacesErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GeoPlacesErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GeoPlacesErrorMapper
} // namespace GeoPlaces
} // namespace Aws
