/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudHSMV2;

namespace Aws
{
namespace CloudHSMV2
{
namespace CloudHSMV2ErrorMapper
{

static constexpr uint32_t CLOUD_HSM_INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("CloudHsmInvalidRequestException");
static constexpr uint32_t CLOUD_HSM_TAG_HASH = ConstExprHashingUtils::HashString("CloudHsmTagException");
static constexpr uint32_t CLOUD_HSM_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("CloudHsmAccessDeniedException");
static constexpr uint32_t CLOUD_HSM_INTERNAL_FAILURE_HASH = ConstExprHashingUtils::HashString("CloudHsmInternalFailureException");
static constexpr uint32_t CLOUD_HSM_SERVICE_HASH = ConstExprHashingUtils::HashString("CloudHsmServiceException");
static constexpr uint32_t CLOUD_HSM_RESOURCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CloudHsmResourceNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLOUD_HSM_INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_INVALID_REQUEST), false);
  }
  else if (hashCode == CLOUD_HSM_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_TAG), false);
  }
  else if (hashCode == CLOUD_HSM_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_ACCESS_DENIED), false);
  }
  else if (hashCode == CLOUD_HSM_INTERNAL_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_INTERNAL_FAILURE), false);
  }
  else if (hashCode == CLOUD_HSM_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_SERVICE), false);
  }
  else if (hashCode == CLOUD_HSM_RESOURCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudHSMV2Errors::CLOUD_HSM_RESOURCE_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudHSMV2ErrorMapper
} // namespace CloudHSMV2
} // namespace Aws
