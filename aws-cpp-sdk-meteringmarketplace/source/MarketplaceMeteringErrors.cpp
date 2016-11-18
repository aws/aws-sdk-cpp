/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>

using namespace Aws::Client;
using namespace Aws::MarketplaceMetering;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceMetering
{
namespace MarketplaceMeteringErrorMapper
{

static const int INVALID_PRODUCT_CODE_HASH = HashingUtils::HashString("InvalidProductCodeException");
static const int INVALID_ENDPOINT_REGION_HASH = HashingUtils::HashString("InvalidEndpointRegionException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");
static const int INVALID_USAGE_DIMENSION_HASH = HashingUtils::HashString("InvalidUsageDimensionException");
static const int TIMESTAMP_OUT_OF_BOUNDS_HASH = HashingUtils::HashString("TimestampOutOfBoundsException");
static const int DUPLICATE_REQUEST_HASH = HashingUtils::HashString("DuplicateRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PRODUCT_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_PRODUCT_CODE), false);
  }
  else if (hashCode == INVALID_ENDPOINT_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_ENDPOINT_REGION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INTERNAL_SERVICE_ERROR), false);
  }
  else if (hashCode == INVALID_USAGE_DIMENSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_USAGE_DIMENSION), false);
  }
  else if (hashCode == TIMESTAMP_OUT_OF_BOUNDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::TIMESTAMP_OUT_OF_BOUNDS), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::DUPLICATE_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceMeteringErrorMapper
} // namespace MarketplaceMetering
} // namespace Aws
