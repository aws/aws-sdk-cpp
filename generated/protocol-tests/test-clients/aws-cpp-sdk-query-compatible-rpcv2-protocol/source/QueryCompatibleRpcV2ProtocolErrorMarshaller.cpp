/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolErrorMarshaller.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::QueryCompatibleRpcV2Protocol;

AWSError<CoreErrors> QueryCompatibleRpcV2ProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = QueryCompatibleRpcV2ProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}