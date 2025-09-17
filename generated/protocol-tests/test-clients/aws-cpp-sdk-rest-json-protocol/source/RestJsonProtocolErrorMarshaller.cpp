/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrorMarshaller.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::RestJsonProtocol;

AWSError<CoreErrors> RestJsonProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = RestJsonProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}