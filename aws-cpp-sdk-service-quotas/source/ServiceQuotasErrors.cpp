/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/service-quotas/ServiceQuotasErrors.h>

using namespace Aws::Client;
using namespace Aws::ServiceQuotas;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace ServiceQuotasErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = HashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static const int SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH = HashingUtils::HashString("ServiceQuotaTemplateNotInUseException");
static const int DEPENDENCY_ACCESS_DENIED_HASH = HashingUtils::HashString("DependencyAccessDeniedException");
static const int TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH = HashingUtils::HashString("TemplatesNotAvailableInRegionException");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("InvalidPaginationTokenException");
static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("InvalidResourceStateException");
static const int NO_AVAILABLE_ORGANIZATION_HASH = HashingUtils::HashString("NoAvailableOrganizationException");
static const int A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH = HashingUtils::HashString("AWSServiceAccessNotEnabledException");
static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("IllegalArgumentException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QuotaExceededException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int NO_SUCH_RESOURCE_HASH = HashingUtils::HashString("NoSuchResourceException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE), false);
  }
  else if (hashCode == SERVICE_QUOTA_TEMPLATE_NOT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE_QUOTA_TEMPLATE_NOT_IN_USE), false);
  }
  else if (hashCode == DEPENDENCY_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::DEPENDENCY_ACCESS_DENIED), false);
  }
  else if (hashCode == TEMPLATES_NOT_AVAILABLE_IN_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TEMPLATES_NOT_AVAILABLE_IN_REGION), false);
  }
  else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_PAGINATION_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::INVALID_RESOURCE_STATE), false);
  }
  else if (hashCode == NO_AVAILABLE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_AVAILABLE_ORGANIZATION), false);
  }
  else if (hashCode == A_W_S_SERVICE_ACCESS_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::A_W_S_SERVICE_ACCESS_NOT_ENABLED), false);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::ILLEGAL_ARGUMENT), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::TOO_MANY_REQUESTS), false);
  }
  else if (hashCode == QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::QUOTA_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::SERVICE), false);
  }
  else if (hashCode == NO_SUCH_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceQuotasErrors::NO_SUCH_RESOURCE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServiceQuotasErrorMapper
} // namespace ServiceQuotas
} // namespace Aws
