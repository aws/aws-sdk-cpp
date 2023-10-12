/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppIntegrationsService;

namespace Aws
{
namespace AppIntegrationsService
{
namespace AppIntegrationsServiceErrorMapper
{

static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
static constexpr uint32_t DUPLICATE_RESOURCE_HASH = ConstExprHashingUtils::HashString("DuplicateResourceException");
static constexpr uint32_t RESOURCE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceQuotaExceededException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == DUPLICATE_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::DUPLICATE_RESOURCE), false);
  }
  else if (hashCode == RESOURCE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::RESOURCE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppIntegrationsServiceErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppIntegrationsServiceErrorMapper
} // namespace AppIntegrationsService
} // namespace Aws
