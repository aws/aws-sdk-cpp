/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/firehose/FirehoseErrorMarshaller.h>
#include <aws/firehose/FirehoseErrors.h>

using namespace Aws::Client;
using namespace Aws::Firehose;

AWSError<CoreErrors> FirehoseErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FirehoseErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}