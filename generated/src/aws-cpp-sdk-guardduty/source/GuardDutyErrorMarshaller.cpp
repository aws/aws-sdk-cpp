/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/guardduty/GuardDutyErrorMarshaller.h>
#include <aws/guardduty/GuardDutyErrors.h>

using namespace Aws::Client;
using namespace Aws::GuardDuty;

AWSError<CoreErrors> GuardDutyErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GuardDutyErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}