/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/email/SESErrorMarshaller.h>
#include <aws/email/SESErrors.h>

using namespace Aws::Client;
using namespace Aws::SES;

AWSError<CoreErrors> SESErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SESErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}