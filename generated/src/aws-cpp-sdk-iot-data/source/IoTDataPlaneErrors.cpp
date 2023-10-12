/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-data/IoTDataPlaneErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTDataPlane;

namespace Aws
{
namespace IoTDataPlane
{
namespace IoTDataPlaneErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t UNSUPPORTED_DOCUMENT_ENCODING_HASH = ConstExprHashingUtils::HashString("UnsupportedDocumentEncodingException");
static constexpr uint32_t METHOD_NOT_ALLOWED_HASH = ConstExprHashingUtils::HashString("MethodNotAllowedException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
static constexpr uint32_t REQUEST_ENTITY_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("RequestEntityTooLargeException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::CONFLICT), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == UNSUPPORTED_DOCUMENT_ENCODING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::UNSUPPORTED_DOCUMENT_ENCODING), false);
  }
  else if (hashCode == METHOD_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::METHOD_NOT_ALLOWED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == REQUEST_ENTITY_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTDataPlaneErrors::REQUEST_ENTITY_TOO_LARGE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTDataPlaneErrorMapper
} // namespace IoTDataPlane
} // namespace Aws
