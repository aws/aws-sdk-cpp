/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/json-rpc-10/JSONRPC10ErrorMarshaller.h>
#include <aws/json-rpc-10/JSONRPC10Errors.h>

using namespace Aws::Client;
using namespace Aws::JSONRPC10;

AWSError<CoreErrors> JSONRPC10ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = JSONRPC10ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}