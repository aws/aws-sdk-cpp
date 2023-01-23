/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/dataexchange/DataExchangeErrorMarshaller.h>
#include <aws/dataexchange/DataExchangeErrors.h>

using namespace Aws::Client;
using namespace Aws::DataExchange;

AWSError<CoreErrors> DataExchangeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DataExchangeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}