/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MarketplaceMetering;

namespace Aws
{
namespace MarketplaceMetering
{
namespace MarketplaceMeteringErrorMapper
{

static const int INVALID_CUSTOMER_IDENTIFIER_HASH = HashingUtils::HashString("InvalidCustomerIdentifierException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int INVALID_USAGE_DIMENSION_HASH = HashingUtils::HashString("InvalidUsageDimensionException");
static const int INVALID_USAGE_ALLOCATIONS_HASH = HashingUtils::HashString("InvalidUsageAllocationsException");
static const int EXPIRED_TOKEN_HASH = HashingUtils::HashString("ExpiredTokenException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int DISABLED_API_HASH = HashingUtils::HashString("DisabledApiException");
static const int INVALID_ENDPOINT_REGION_HASH = HashingUtils::HashString("InvalidEndpointRegionException");
static const int PLATFORM_NOT_SUPPORTED_HASH = HashingUtils::HashString("PlatformNotSupportedException");
static const int INVALID_PRODUCT_CODE_HASH = HashingUtils::HashString("InvalidProductCodeException");
static const int DUPLICATE_REQUEST_HASH = HashingUtils::HashString("DuplicateRequestException");
static const int CUSTOMER_NOT_ENTITLED_HASH = HashingUtils::HashString("CustomerNotEntitledException");
static const int INVALID_REGION_HASH = HashingUtils::HashString("InvalidRegionException");
static const int TIMESTAMP_OUT_OF_BOUNDS_HASH = HashingUtils::HashString("TimestampOutOfBoundsException");
static const int INVALID_PUBLIC_KEY_VERSION_HASH = HashingUtils::HashString("InvalidPublicKeyVersionException");
static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("InternalServiceErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_CUSTOMER_IDENTIFIER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_CUSTOMER_IDENTIFIER), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == INVALID_USAGE_DIMENSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_USAGE_DIMENSION), false);
  }
  else if (hashCode == INVALID_USAGE_ALLOCATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_USAGE_ALLOCATIONS), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_TAG), false);
  }
  else if (hashCode == DISABLED_API_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::DISABLED_API), false);
  }
  else if (hashCode == INVALID_ENDPOINT_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_ENDPOINT_REGION), false);
  }
  else if (hashCode == PLATFORM_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::PLATFORM_NOT_SUPPORTED), false);
  }
  else if (hashCode == INVALID_PRODUCT_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_PRODUCT_CODE), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == CUSTOMER_NOT_ENTITLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::CUSTOMER_NOT_ENTITLED), false);
  }
  else if (hashCode == INVALID_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_REGION), false);
  }
  else if (hashCode == TIMESTAMP_OUT_OF_BOUNDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::TIMESTAMP_OUT_OF_BOUNDS), false);
  }
  else if (hashCode == INVALID_PUBLIC_KEY_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INVALID_PUBLIC_KEY_VERSION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MarketplaceMeteringErrors::INTERNAL_SERVICE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MarketplaceMeteringErrorMapper
} // namespace MarketplaceMetering
} // namespace Aws
