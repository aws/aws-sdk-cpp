/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/SignerErrors.h>

using namespace Aws::Client;
using namespace Aws::signer;

AWSError<CoreErrors> SignerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SignerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}