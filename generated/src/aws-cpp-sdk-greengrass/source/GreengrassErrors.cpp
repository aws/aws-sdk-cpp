/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/greengrass/GreengrassErrors.h>
#include <aws/greengrass/model/BadRequestException.h>
#include <aws/greengrass/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Greengrass;
using namespace Aws::Greengrass::Model;

namespace Aws
{
namespace Greengrass
{
template<> AWS_GREENGRASS_API BadRequestException GreengrassError::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_GREENGRASS_API InternalServerErrorException GreengrassError::GetModeledError()
{
  assert(this->GetErrorType() == GreengrassErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace GreengrassErrorMapper
{

static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GreengrassErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GreengrassErrorMapper
} // namespace Greengrass
} // namespace Aws
