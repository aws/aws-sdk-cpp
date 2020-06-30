/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ebs/EBSErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/ebs/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EBS;
using namespace Aws::EBS::Model;

namespace Aws
{
namespace EBS
{
template<> AWS_EBS_API ValidationException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace EBSErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EBSErrorMapper
} // namespace EBS
} // namespace Aws
