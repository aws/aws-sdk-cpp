/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ebs/EBSErrorMarshaller.h>
#include <aws/ebs/EBSErrors.h>

using namespace Aws::Client;
using namespace Aws::EBS;

AWSError<CoreErrors> EBSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EBSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}