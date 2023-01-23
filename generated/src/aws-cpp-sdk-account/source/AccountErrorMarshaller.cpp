/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/account/AccountErrorMarshaller.h>
#include <aws/account/AccountErrors.h>

using namespace Aws::Client;
using namespace Aws::Account;

AWSError<CoreErrors> AccountErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AccountErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}