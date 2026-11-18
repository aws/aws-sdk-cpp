/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/AbuseSignalErrorMarshaller.h>
#include <aws/abuse-signal/AbuseSignalErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::AbuseSignal;

AWSError<CoreErrors> AbuseSignalErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = AbuseSignalErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}