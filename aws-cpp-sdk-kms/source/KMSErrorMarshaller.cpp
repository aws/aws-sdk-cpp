﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/kms/KMSErrorMarshaller.h>
#include <aws/kms/KMSErrors.h>

using namespace Aws::Client;
using namespace Aws::KMS;

AWSError<CoreErrors> KMSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KMSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}