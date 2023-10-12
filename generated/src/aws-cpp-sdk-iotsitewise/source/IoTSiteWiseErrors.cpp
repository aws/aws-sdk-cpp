/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/IoTSiteWiseErrors.h>
#include <aws/iotsitewise/model/ResourceAlreadyExistsException.h>
#include <aws/iotsitewise/model/TooManyTagsException.h>
#include <aws/iotsitewise/model/ConflictingOperationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTSiteWise;
using namespace Aws::IoTSiteWise::Model;

namespace Aws
{
namespace IoTSiteWise
{
template<> AWS_IOTSITEWISE_API ResourceAlreadyExistsException IoTSiteWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTSiteWiseErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_IOTSITEWISE_API TooManyTagsException IoTSiteWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTSiteWiseErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

template<> AWS_IOTSITEWISE_API ConflictingOperationException IoTSiteWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTSiteWiseErrors::CONFLICTING_OPERATION);
  return ConflictingOperationException(this->GetJsonPayload().View());
}

namespace IoTSiteWiseErrorMapper
{

static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t CONFLICTING_OPERATION_HASH = ConstExprHashingUtils::HashString("ConflictingOperationException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == CONFLICTING_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::CONFLICTING_OPERATION), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTSiteWiseErrorMapper
} // namespace IoTSiteWise
} // namespace Aws
