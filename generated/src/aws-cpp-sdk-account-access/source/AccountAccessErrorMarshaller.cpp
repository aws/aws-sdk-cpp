/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/AccountAccessErrorMarshaller.h>
#include <aws/account-access/AccountAccessErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::AccountAccess;

AWSError<CoreErrors> AccountAccessErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = AccountAccessErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}