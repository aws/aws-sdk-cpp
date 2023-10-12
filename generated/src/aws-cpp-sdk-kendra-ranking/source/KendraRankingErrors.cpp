/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kendra-ranking/KendraRankingErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KendraRanking;

namespace Aws
{
namespace KendraRanking
{
namespace KendraRankingErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t RESOURCE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("ResourceUnavailableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraRankingErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraRankingErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraRankingErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KendraRankingErrors::RESOURCE_UNAVAILABLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KendraRankingErrorMapper
} // namespace KendraRanking
} // namespace Aws
