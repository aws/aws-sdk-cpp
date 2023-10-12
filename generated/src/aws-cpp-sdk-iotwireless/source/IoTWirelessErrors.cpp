/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotwireless/IoTWirelessErrors.h>
#include <aws/iotwireless/model/ConflictException.h>
#include <aws/iotwireless/model/ResourceNotFoundException.h>
#include <aws/iotwireless/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTWireless;
using namespace Aws::IoTWireless::Model;

namespace Aws
{
namespace IoTWireless
{
template<> AWS_IOTWIRELESS_API ConflictException IoTWirelessError::GetModeledError()
{
  assert(this->GetErrorType() == IoTWirelessErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOTWIRELESS_API ResourceNotFoundException IoTWirelessError::GetModeledError()
{
  assert(this->GetErrorType() == IoTWirelessErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IOTWIRELESS_API TooManyTagsException IoTWirelessError::GetModeledError()
{
  assert(this->GetErrorType() == IoTWirelessErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace IoTWirelessErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTWirelessErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTWirelessErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTWirelessErrors::TOO_MANY_TAGS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTWirelessErrorMapper
} // namespace IoTWireless
} // namespace Aws
