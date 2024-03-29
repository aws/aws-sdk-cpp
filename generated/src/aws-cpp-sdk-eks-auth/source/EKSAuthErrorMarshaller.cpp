﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/eks-auth/EKSAuthErrorMarshaller.h>
#include <aws/eks-auth/EKSAuthErrors.h>

using namespace Aws::Client;
using namespace Aws::EKSAuth;

AWSError<CoreErrors> EKSAuthErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EKSAuthErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}