/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/GeoRoutesErrors.h>
#include <aws/geo-routes/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GeoRoutes;
using namespace Aws::GeoRoutes::Model;

namespace Aws
{
namespace GeoRoutes
{
template<> AWS_GEOROUTES_API ValidationException GeoRoutesError::GetModeledError()
{
  assert(this->GetErrorType() == GeoRoutesErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace GeoRoutesErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GeoRoutesErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GeoRoutesErrorMapper
} // namespace GeoRoutes
} // namespace Aws
