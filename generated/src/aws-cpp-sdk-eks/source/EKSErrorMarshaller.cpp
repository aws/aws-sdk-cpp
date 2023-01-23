/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/eks/EKSErrorMarshaller.h>
#include <aws/eks/EKSErrors.h>

using namespace Aws::Client;
using namespace Aws::EKS;

AWSError<CoreErrors> EKSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EKSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}