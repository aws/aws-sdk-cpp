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
#include <aws/ce/CostExplorerErrors.h>

using namespace Aws::Client;
using namespace Aws::CostExplorer;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace CostExplorerErrorMapper
{

static const int REQUEST_CHANGED_HASH = HashingUtils::HashString("RequestChangedException");
static const int UNRESOLVABLE_USAGE_UNIT_HASH = HashingUtils::HashString("UnresolvableUsageUnitException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int BILL_EXPIRATION_HASH = HashingUtils::HashString("BillExpirationException");
static const int DATA_UNAVAILABLE_HASH = HashingUtils::HashString("DataUnavailableException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == REQUEST_CHANGED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::REQUEST_CHANGED), false);
  }
  else if (hashCode == UNRESOLVABLE_USAGE_UNIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::UNRESOLVABLE_USAGE_UNIT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == BILL_EXPIRATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::BILL_EXPIRATION), false);
  }
  else if (hashCode == DATA_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::DATA_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostExplorerErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CostExplorerErrorMapper
} // namespace CostExplorer
} // namespace Aws
