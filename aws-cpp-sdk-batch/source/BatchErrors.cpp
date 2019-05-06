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
#include <aws/batch/BatchErrors.h>

using namespace Aws::Client;
using namespace Aws::Batch;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace BatchErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BatchErrors::CLIENT), false);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BatchErrors::SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BatchErrorMapper
} // namespace Batch
} // namespace Aws
