/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotfleetwise/IoTFleetWiseErrors.h>
#include <aws/iotfleetwise/model/ConflictException.h>
#include <aws/iotfleetwise/model/ThrottlingException.h>
#include <aws/iotfleetwise/model/InternalServerException.h>
#include <aws/iotfleetwise/model/ResourceNotFoundException.h>
#include <aws/iotfleetwise/model/ValidationException.h>
#include <aws/iotfleetwise/model/DecoderManifestValidationException.h>
#include <aws/iotfleetwise/model/LimitExceededException.h>
#include <aws/iotfleetwise/model/InvalidNodeException.h>
#include <aws/iotfleetwise/model/InvalidSignalsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTFleetWise;
using namespace Aws::IoTFleetWise::Model;

namespace Aws
{
namespace IoTFleetWise
{
template<> AWS_IOTFLEETWISE_API ConflictException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API ThrottlingException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API InternalServerException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API ResourceNotFoundException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API ValidationException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API DecoderManifestValidationException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::DECODER_MANIFEST_VALIDATION);
  return DecoderManifestValidationException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API LimitExceededException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API InvalidNodeException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::INVALID_NODE);
  return InvalidNodeException(this->GetJsonPayload().View());
}

template<> AWS_IOTFLEETWISE_API InvalidSignalsException IoTFleetWiseError::GetModeledError()
{
  assert(this->GetErrorType() == IoTFleetWiseErrors::INVALID_SIGNALS);
  return InvalidSignalsException(this->GetJsonPayload().View());
}

namespace IoTFleetWiseErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DECODER_MANIFEST_VALIDATION_HASH = HashingUtils::HashString("DecoderManifestValidationException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_NODE_HASH = HashingUtils::HashString("InvalidNodeException");
static const int INVALID_SIGNALS_HASH = HashingUtils::HashString("InvalidSignalsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DECODER_MANIFEST_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::DECODER_MANIFEST_VALIDATION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_NODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::INVALID_NODE), false);
  }
  else if (hashCode == INVALID_SIGNALS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTFleetWiseErrors::INVALID_SIGNALS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTFleetWiseErrorMapper
} // namespace IoTFleetWise
} // namespace Aws
