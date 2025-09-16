/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/query-protocol/QueryProtocolErrorMarshaller.h>
#include <aws/query-protocol/QueryProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::QueryProtocol;

AWSError<CoreErrors> QueryProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = QueryProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}