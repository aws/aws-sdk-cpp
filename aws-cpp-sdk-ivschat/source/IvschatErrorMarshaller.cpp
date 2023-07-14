/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ivschat/IvschatErrorMarshaller.h>
#include <aws/ivschat/IvschatErrors.h>

using namespace Aws::Client;
using namespace Aws::ivschat;

AWSError<CoreErrors> IvschatErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IvschatErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}