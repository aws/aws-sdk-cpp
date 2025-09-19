/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/protocol-mock/ProtocolMockErrorMarshaller.h>
#include <aws/protocol-mock/ProtocolMockErrors.h>

using namespace Aws::Client;
using namespace Aws::ProtocolMock;

AWSError<CoreErrors> ProtocolMockErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ProtocolMockErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}