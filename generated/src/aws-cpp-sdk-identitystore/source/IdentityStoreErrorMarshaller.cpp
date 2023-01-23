/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/identitystore/IdentityStoreErrorMarshaller.h>
#include <aws/identitystore/IdentityStoreErrors.h>

using namespace Aws::Client;
using namespace Aws::IdentityStore;

AWSError<CoreErrors> IdentityStoreErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IdentityStoreErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}