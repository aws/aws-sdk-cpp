/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/worklink/WorkLinkErrors.h>
#include <aws/core/utils/UnreferencedParam.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WorkLink;

namespace Aws
{
namespace WorkLink
{
namespace WorkLinkErrorMapper
{



AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WorkLinkErrorMapper
} // namespace WorkLink
} // namespace Aws
