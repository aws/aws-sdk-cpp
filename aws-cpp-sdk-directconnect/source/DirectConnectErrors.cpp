/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::DirectConnect;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace DirectConnectErrorMapper
{

static const int DIRECT_CONNECT_CLIENT_HASH = HashingUtils::HashString("DirectConnectClientException");
static const int DIRECT_CONNECT_SERVER_HASH = HashingUtils::HashString("DirectConnectServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DIRECT_CONNECT_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectConnectErrors::DIRECT_CONNECT_CLIENT), false);
  }
  else if (hashCode == DIRECT_CONNECT_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectConnectErrors::DIRECT_CONNECT_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DirectConnectErrorMapper
} // namespace DirectConnect
} // namespace Aws
