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

static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t REQUEST_CHANGED_HASH = ConstExprHashingUtils::HashString("RequestChangedException");
static constexpr uint32_t UNRESOLVABLE_USAGE_UNIT_HASH = ConstExprHashingUtils::HashString("UnresolvableUsageUnitException");
static constexpr uint32_t UNKNOWN_SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("UnknownSubscriptionException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t UNKNOWN_MONITOR_HASH = ConstExprHashingUtils::HashString("UnknownMonitorException");
static constexpr uint32_t BILL_EXPIRATION_HASH = ConstExprHashingUtils::HashString("BillExpirationException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t DATA_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("DataUnavailableException");
static constexpr uint32_t GENERATION_EXISTS_HASH = ConstExprHashingUtils::HashString("GenerationExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
