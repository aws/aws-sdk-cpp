/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rpcv2protocol/RpcV2ProtocolErrorMarshaller.h>
#include <aws/rpcv2protocol/RpcV2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::RpcV2Protocol;

AWSError<CoreErrors> RpcV2ProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = RpcV2ProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}