/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/json-protocol/JsonProtocolErrorMarshaller.h>
#include <aws/json-protocol/JsonProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::JsonProtocol;

AWSError<CoreErrors> JsonProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = JsonProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}