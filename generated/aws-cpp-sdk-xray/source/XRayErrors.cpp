﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/xray/XRayErrors.h>
#include <aws/xray/model/ResourceNotFoundException.h>
#include <aws/xray/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::XRay;
using namespace Aws::XRay::Model;

namespace Aws
{
namespace XRay
{
template<> AWS_XRAY_API ResourceNotFoundException XRayError::GetModeledError()
{
  assert(this->GetErrorType() == XRayErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_XRAY_API TooManyTagsException XRayError::GetModeledError()
{
  assert(this->GetErrorType() == XRayErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace XRayErrorMapper
{

static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int RULE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RuleLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == RULE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::RULE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace XRayErrorMapper
} // namespace XRay
} // namespace Aws
