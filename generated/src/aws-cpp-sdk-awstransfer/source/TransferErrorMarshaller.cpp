/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/awstransfer/TransferErrorMarshaller.h>
#include <aws/awstransfer/TransferErrors.h>

using namespace Aws::Client;
using namespace Aws::Transfer;

AWSError<CoreErrors> TransferErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TransferErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}