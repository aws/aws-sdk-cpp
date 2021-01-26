/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/snowball/SnowballErrors.h>
#include <aws/snowball/model/ConflictException.h>
#include <aws/snowball/model/InvalidResourceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Snowball;
using namespace Aws::Snowball::Model;

namespace Aws
{
namespace Snowball
{
template<> AWS_SNOWBALL_API ConflictException SnowballError::GetModeledError()
{
  assert(this->GetErrorType() == SnowballErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SNOWBALL_API InvalidResourceException SnowballError::GetModeledError()
{
  assert(this->GetErrorType() == SnowballErrors::INVALID_RESOURCE);
  return InvalidResourceException(this->GetJsonPayload().View());
}

namespace SnowballErrorMapper
{

static const int CLUSTER_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ClusterLimitExceededException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("InvalidAddressException");
static const int INVALID_JOB_STATE_HASH = HashingUtils::HashString("InvalidJobStateException");
static const int K_M_S_REQUEST_FAILED_HASH = HashingUtils::HashString("KMSRequestFailedException");
static const int EC2_REQUEST_FAILED_HASH = HashingUtils::HashString("Ec2RequestFailedException");
static const int INVALID_INPUT_COMBINATION_HASH = HashingUtils::HashString("InvalidInputCombinationException");
static const int UNSUPPORTED_ADDRESS_HASH = HashingUtils::HashString("UnsupportedAddressException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_RESOURCE_HASH = HashingUtils::HashString("InvalidResourceException");
static const int RETURN_SHIPPING_LABEL_ALREADY_EXISTS_HASH = HashingUtils::HashString("ReturnShippingLabelAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLUSTER_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::CLUSTER_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_ADDRESS), false);
  }
  else if (hashCode == INVALID_JOB_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_JOB_STATE), false);
  }
  else if (hashCode == K_M_S_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::K_M_S_REQUEST_FAILED), false);
  }
  else if (hashCode == EC2_REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::EC2_REQUEST_FAILED), false);
  }
  else if (hashCode == INVALID_INPUT_COMBINATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_INPUT_COMBINATION), false);
  }
  else if (hashCode == UNSUPPORTED_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::UNSUPPORTED_ADDRESS), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::INVALID_RESOURCE), false);
  }
  else if (hashCode == RETURN_SHIPPING_LABEL_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SnowballErrors::RETURN_SHIPPING_LABEL_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SnowballErrorMapper
} // namespace Snowball
} // namespace Aws
