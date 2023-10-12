/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeGuruReviewer;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace CodeGuruReviewerErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeGuruReviewerErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeGuruReviewerErrors::NOT_FOUND), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeGuruReviewerErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeGuruReviewerErrorMapper
} // namespace CodeGuruReviewer
} // namespace Aws
