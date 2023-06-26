/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/keyspaces/KeyspacesErrorMarshaller.h>
#include <aws/keyspaces/KeyspacesErrors.h>

using namespace Aws::Client;
using namespace Aws::Keyspaces;

AWSError<CoreErrors> KeyspacesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KeyspacesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}