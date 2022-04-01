/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrorMarshaller.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53RecoveryControlConfig;

AWSError<CoreErrors> Route53RecoveryControlConfigErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Route53RecoveryControlConfigErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}