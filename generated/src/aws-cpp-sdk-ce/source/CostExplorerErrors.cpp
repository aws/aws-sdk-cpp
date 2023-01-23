/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ce/CostExplorerErrors.h>
#include <aws/ce/model/ResourceNotFoundException.h>
#include <aws/ce/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CostExplorer;
using namespace Aws::CostExplorer::Model;

namespace Aws
{
namespace CostExplorer
{
template<> AWS_COSTEXPLORER_API ResourceNotFoundException CostExplorerError::GetModeledError()
{
  assert(this->GetErrorType() == CostExplorerErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_COSTEXPLORER_API TooManyTagsException CostExplorerError::GetModeledError()
{
  assert(this->GetErrorType() == CostExplorerErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace CostExplorerErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int REQUEST_CHANGED_HASH = HashingUtils::HashString("RequestChangedException");
static const int UNRESOLVABLE_USAGE_UNIT_HASH = HashingUtils::HashString("UnresolvableUsageUnitException");
static const int UNKNOWN_SUBSCRIPTION_HASH = HashingUtils::HashString("UnknownSubscriptionException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int UNKNOWN_MONITOR_HASH = HashingUtils::HashString("UnknownMonitorException");
static const int BILL_EXPIRATION_HASH = HashingUtils::HashString("BillExpirationException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int DATA_UNAVAILABLE_HASH = HashingUtils::HashString("DataUnavailableException");
static const int GENERATION_EXISTS_HASH = HashingUtils::HashString("GenerationExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == REQUEST_CHANGED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::REQUEST_CHANGED), false);
  }
  else if (hashCode == UNRESOLVABLE_USAGE_UNIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::UNRESOLVABLE_USAGE_UNIT), false);
  }
  else if (hashCode == UNKNOWN_SUBSCRIPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::UNKNOWN_SUBSCRIPTION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == UNKNOWN_MONITOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::UNKNOWN_MONITOR), false);
  }
  else if (hashCode == BILL_EXPIRATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::BILL_EXPIRATION), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == DATA_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::DATA_UNAVAILABLE), false);
  }
  else if (hashCode == GENERATION_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::GENERATION_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CostExplorerErrorMapper
} // namespace CostExplorer
} // namespace Aws
