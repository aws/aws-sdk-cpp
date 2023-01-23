/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/connectcases/ConnectCasesErrorMarshaller.h>
#include <aws/connectcases/ConnectCasesErrors.h>

using namespace Aws::Client;
using namespace Aws::ConnectCases;

AWSError<CoreErrors> ConnectCasesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ConnectCasesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}