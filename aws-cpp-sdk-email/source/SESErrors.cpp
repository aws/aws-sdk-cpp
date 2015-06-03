/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SESErrors.h>

using namespace Aws::Client;
using namespace Aws::SES;
using namespace Aws::Utils;

static const int MESSAGE_REJECTED_HASH = HashingUtils::HashString("MessageRejected");

namespace Aws
{
namespace SES
{
namespace SESErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MESSAGE_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SESErrors::MESSAGE_REJECTED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SESErrorMapper
} // namespace SES
} // namespace Aws
