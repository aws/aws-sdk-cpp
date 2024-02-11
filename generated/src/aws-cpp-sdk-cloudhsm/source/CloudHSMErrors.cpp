/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudHSM;

namespace Aws
{
namespace CloudHSM
{
namespace CloudHSMErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudHSMErrorMapper
} // namespace CloudHSM
} // namespace Aws
