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

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int CONFLICTING_OPERATION_HASH = HashingUtils::HashString("ConflictingOperationException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTSiteWiseErrors::RESOURCE_ALREADY_EXISTS), false);
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
