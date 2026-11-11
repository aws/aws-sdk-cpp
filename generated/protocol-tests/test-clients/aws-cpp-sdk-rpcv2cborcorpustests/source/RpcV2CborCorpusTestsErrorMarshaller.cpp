/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsErrorMarshaller.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTestsErrors.h>

using namespace Aws::Client;
using namespace Aws::RpcV2CborCorpusTests;

AWSError<CoreErrors> RpcV2CborCorpusTestsErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = RpcV2CborCorpusTestsErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}