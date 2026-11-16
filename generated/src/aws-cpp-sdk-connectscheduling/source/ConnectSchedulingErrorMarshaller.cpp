/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/ConnectSchedulingErrorMarshaller.h>
#include <aws/connectscheduling/ConnectSchedulingErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ConnectScheduling;

AWSError<CoreErrors> ConnectSchedulingErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ConnectSchedulingErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}