/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/DirectConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DirectConnect;

namespace Aws
{
namespace DirectConnect
{
namespace DirectConnectErrorMapper
{

static constexpr uint32_t DUPLICATE_TAG_KEYS_HASH = ConstExprHashingUtils::HashString("DuplicateTagKeysException");
static constexpr uint32_t DIRECT_CONNECT_CLIENT_HASH = ConstExprHashingUtils::HashString("DirectConnectClientException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t DIRECT_CONNECT_SERVER_HASH = ConstExprHashingUtils::HashString("DirectConnectServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DUPLICATE_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectConnectErrors::DUPLICATE_TAG_KEYS), false);
  }
  else if (hashCode == DIRECT_CONNECT_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectConnectErrors::DIRECT_CONNECT_CLIENT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DirectConnectErrors::TOO_MANY_TAGS), false);
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
