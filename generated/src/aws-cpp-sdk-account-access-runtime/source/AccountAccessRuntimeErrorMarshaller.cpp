/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/AccountAccessRuntimeErrorMarshaller.h>
#include <aws/account-access-runtime/AccountAccessRuntimeErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::AccountAccessRuntime;

AWSError<CoreErrors> AccountAccessRuntimeErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = AccountAccessRuntimeErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}