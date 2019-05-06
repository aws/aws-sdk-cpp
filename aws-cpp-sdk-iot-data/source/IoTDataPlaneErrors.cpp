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
#include <aws/iot-data/IoTDataPlaneErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTDataPlane;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDataPlane
{
namespace IoTDataPlaneErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int UNSUPPORTED_DOCUMENT_ENCODING_HASH = HashingUtils::HashString("UnsupportedDocumentEncodingException");
static const int METHOD_NOT_ALLOWED_HASH = HashingUtils::HashString("MethodNotAllowedException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int REQUEST_ENTITY_TOO_LARGE_HASH = HashingUtils::HashString("RequestEntityTooLargeException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
