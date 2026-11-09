/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NonQueryCompatibleRpcV2Protocol;

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
namespace NonQueryCompatibleRpcV2ProtocolErrorMapper {

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  AWS_UNREFERENCED_PARAM(errorName);
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace NonQueryCompatibleRpcV2ProtocolErrorMapper
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
