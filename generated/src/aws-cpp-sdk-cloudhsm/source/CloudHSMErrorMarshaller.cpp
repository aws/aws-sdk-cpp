/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudhsm/CloudHSMErrorMarshaller.h>
#include <aws/cloudhsm/CloudHSMErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudHSM;

AWSError<CoreErrors> CloudHSMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudHSMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}